from tutorial_interfaces.srv import MoveRobot

import rclpy
import tf_transformations
import time
import math

from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from turtlesim.msg import Pose
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import PoseStamped, Vector3
from std_msgs.msg import Bool
from action_msgs.msg import GoalStatus
from nav2_msgs.action import NavigateToPose


class ServiceServer(Node):
    def __init__(self):
        super().__init__("robot_server")
        self.srv = self.create_service(
            MoveRobot, "robot_service", self.service_callback
        )
        # creating navigator & setting initial pose
        self.nav = BasicNavigator()
        initial_pose = self.create_pose_stamped(
            self.nav, -1.576505, -0.792324, 0.008534
        )
        self.nav.setInitialPose(initial_pose)
        self.nav.waitUntilNav2Active()

        # publisher to control treasure hunt
        self.treasure_publisher = self.create_publisher(Bool, "/busquedaTesoro", 10)

        # declaring global variable to control treasure hunt
        self.treasure_mode = False
        self.treasure_pos = None

    def service_callback(self, request, response):
        self.get_logger().info(f"Incoming request: {request}")
        response.answer = "No eligible command"

        # if looking for treasure, won't serve any petition
        if self.treasure_mode:
            response.answer = "Service not available, currently looking for treasure."
            return response

        # filtering the command
        if request.command == "patrol":
            response.answer = self.patrol()
        elif request.command == "goToExit":
            response.answer = self.go_to_exit()
        elif request.command == "treasure":
            response.answer = self.find_treasure()

        self.get_logger().info(f"\n Navigation went: {response}")

        return response

    def patrol(self):
        # defining waypoints
        entrance_corridor = self.create_pose_stamped(self.nav, 1.1, 0.35, 0.0)
        bottom_living_room = self.create_pose_stamped(self.nav, -1.4, 3.5, 0.0)
        bottom_left_room = self.create_pose_stamped(self.nav, -6.3, 3.3, 0.0)
        bottom_right_room = self.create_pose_stamped(self.nav, -6.3, -1.65, 0.0)
        top_room = self.create_pose_stamped(self.nav, 6.279, -0.99, 0.0)
        top_living_room = self.create_pose_stamped(self.nav, 3.39, 0.88, 0.0)
        mid_room = self.create_pose_stamped(self.nav, 1.04, 3.57, 0.0)
        self.goal_final_position = self.create_pose_stamped(self.nav, -1.36, -3.08, 0.0)

        waypoints = [
            entrance_corridor,
            bottom_living_room,
            bottom_left_room,
            bottom_right_room,
            bottom_left_room,
            bottom_living_room,
            entrance_corridor,
            top_living_room,
            top_room,
            top_living_room,
            mid_room,
            top_living_room,
            entrance_corridor,
            self.goal_final_position,
        ]

        self.nav.followWaypoints(waypoints)
        while not self.nav.isTaskComplete():
            feedback = self.nav.getFeedback()
            self.get_logger().info(f"Patrolling: {feedback}")

        return str(self.nav.getResult())

    def go_to_exit(self):
        self.goal_final_position = self.create_pose_stamped(self.nav, -1.36, -3.08, 0.0)
        self.nav.goToPose(self.goal_final_position)

        while not self.nav.isTaskComplete():
            feedback = self.nav.getFeedback()
            self.get_logger().info(f"Going to the exit: {feedback}")

        return str(self.nav.getResult())

    def create_pose_stamped(self, navigator, position_x, position_y, rotation_z):
        q_x, q_y, q_z, q_w = tf_transformations.quaternion_from_euler(
            0.0, 0.0, rotation_z
        )
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = "map"
        goal_pose.header.stamp = navigator.get_clock().now().to_msg()
        goal_pose.pose.position.x = position_x
        goal_pose.pose.position.y = position_y
        goal_pose.pose.position.z = 0.0
        goal_pose.pose.orientation.x = q_x
        goal_pose.pose.orientation.y = q_y
        goal_pose.pose.orientation.z = q_z
        goal_pose.pose.orientation.w = q_w
        return goal_pose

    def treasure_callback(self, treasure_pos):
        self.treasure_pos = treasure_pos
        self.get_logger().info(f"Distance to treasure: {treasure_pos.z}")

        if self.iteration == 0:  # if first iteration set goal
            goal_treasure_pose = self.create_pose_stamped(
                self.nav, self.treasure_pos.x, self.treasure_pos.y, 0.0
            )
            self.nav.goToPose(goal_treasure_pose)
            self.iteration += 1

        if treasure_pos.z < 0.5:  # check if we're in the goal
            self.get_logger().info(f"Goal reached!")
            self.control_treasure_hunt(False)

        if self.timer <= 0:  # check if we ran out of time
            self.control_treasure_hunt(False)
            self.nav.clearAllCostmaps
            self.get_logger().info(f"Time left: {self.timer}")

        self.get_logger().info(f"Time left: {self.timer}")

        self.timer -= 1

    def find_treasure(self):
        self.timer = 90
        self.iteration = 0
        self.control_treasure_hunt(True)
        self.treasure_subscriber = self.create_subscription(
            Vector3, "/distanciaTesoro", self.treasure_callback, 10
        )
        return "Looking for the treasure"

    def control_treasure_hunt(self, control: Bool):
        treasure_hunt = Bool()
        treasure_hunt.data = control
        self.treasure_publisher.publish(treasure_hunt)
        self.get_logger().info(f"Control msg sent: {treasure_hunt}")


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
