from tutorial_interfaces.srv import MoveRobot

import rclpy
import tf_transformations
import time

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

        self.nav = BasicNavigator()
        initial_pose = self.create_pose_stamped(self.nav, -1.576505, -0.792324, 0.008534)
        self.nav.setInitialPose(initial_pose)
        self.nav.waitUntilNav2Active()

        self.publisher = self.create_publisher(Bool, '/busquedaTesoro', 10)
        
        self.treasure_hunt = Bool()
        self.treasure_hunt.data = True
        self.publisher.publish(self.treasure_hunt)

        self.treasure_mode = False
        self.subscriber = self.create_subscription(Vector3, '/distanciaTesoro', self.treasure_callback, 10)
        

    def service_callback(self, request, response):
        self.get_logger().info(f"Incoming request: {request}")
        response.answer = 'No eligible command'

        if self.treasure_mode:
            response.answer = 'Service not available, currently looking for treasure. Disconnect treasure_node and try again'
            return response

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

    def treasure_callback(self, treasure_pos):
        self.treasure_mode = True
        
        goal_treasure_pose = self.create_pose_stamped(self.nav, treasure_pos.x, treasure_pos.y, 0.0)
        self.nav.goToPose(goal_treasure_pose) # service navigate_to_pose

        time_left = 3
        while treasure_pos.z >= 0.5 and time_left > 0:
            time_left -= 1
            self.get_logger().info(f"\nSearching for the treasure: {treasure_pos.z}")
            
            self.get_logger().info(f"\nTime left {time_left}")
            if time_left == 0:
                self.get_logger().info(f"\nTime's up treasure not found {treasure_pos.z}")
                print("\n\n\nDESTROY NODE \n\n\n")
                self.nav.destroyNode()
            
            time.sleep(1)

        if time_left > 0:
            self.treasure_hunt.data = False
            self.publisher.publish(self.treasure_hunt)
        
        self.nav = BasicNavigator()
        self.nav.waitUntilNav2Active()



        return
    
    def cancelGoToPose(self):
        while not self.nav_to_pose_client.wait_for_server(timeout_sec=1.0):
            self.info("'NavigateToPose' action server not available, waiting...")

        goal_msg = NavigateToPose.Result()
        return True


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
