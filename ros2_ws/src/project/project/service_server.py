from tutorial_interfaces.srv import MoveRobot

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from turtlesim.msg import Pose
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import PoseStamped

import tf_transformations


class ServiceServer(Node):
    def __init__(self):
        super().__init__("robot_server")
        self.srv = self.create_service(
            MoveRobot, "robot_service", self.service_callback
        )

        self.nav = BasicNavigator()
        initial_pose = self.create_pose_stamped(self.nav, -1.576505, -0.792324, 0.008534)
        self.nav.setInitialPose(initial_pose)
        self.nav.waitUntilNav2Active()

    def service_callback(self, request, response):
        self.get_logger().info(f"Incoming request: {request}")
        response.answer = 'No eligible command'

        if request.command == 'patrol':
            response.answer = self.patrol()
        elif request.command == 'goToExit':
            response.answer = self.go_to_exit()

        return response

    def patrol(self):
        entrance_corridor = self.create_pose_stamped(self.nav, 1.1, 0.35, 0.0)
        bottom_living_room = self.create_pose_stamped(self.nav, -1.4, 3.5, 0.0) 
        bottom_left_room = self.create_pose_stamped(self.nav, -6.3, 3.3, 0.0)
        bottom_right_room = self.create_pose_stamped(self.nav, -6.3, -1.65, 0.0)
        top_room = self.create_pose_stamped(self.nav, 6.279, -0.99, 0.0)
        top_living_room = self.create_pose_stamped(self.nav, 3.39, 0.88, 0.0)
        mid_room = self.create_pose_stamped(self.nav, 1.04, 3.57, 0.0)
        self.goal_final_position = self.create_pose_stamped(self.nav, -1.36, -3.08, 0.0)
        
        waypoints = [entrance_corridor, bottom_living_room, bottom_left_room, bottom_right_room,
                     bottom_left_room, bottom_living_room, entrance_corridor, top_living_room, 
                     top_room, top_living_room, mid_room, top_living_room, entrance_corridor, self.goal_final_position]

        self.nav.followWaypoints(waypoints)
        while not self.nav.isTaskComplete():
            feedback = self.nav.getFeedback()
            self.get_logger().info(f"Feedback of the robot: {feedback}")

        self.get_logger().info(f"Feedback of the robot: {self.nav.getResult()}")
        
        return str(self.nav.getResult())
    
    def go_to_exit(self):
        self.nav.goToPose(self.goal_final_position)
        while not self.nav.isTaskComplete():
            feedback = self.nav.getFeedback()
            self.get_logger().info(f"Feedback of the robot: {feedback}")

        return str(self.nav.getResult())

    def create_pose_stamped(self, navigator, position_x, position_y, rotation_z):
        q_x, q_y, q_z, q_w = tf_transformations.quaternion_from_euler(0.0, 0.0, rotation_z)
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


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
