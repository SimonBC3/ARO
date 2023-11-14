from tutorial_interfaces.srv import MoveRobot

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from turtlesim.msg import Pose


class ServiceServer(Node):
    def __init__(self):
        super().__init__("robot_server")
        self.srv = self.create_service(
            MoveRobot, "robot_service", self.service_callback
        )
        self.subscriber = self.create_subscription(
            Pose, "/turtle1/pose", self.listener_callback, 10
        )

    def service_callback(self, request, response):
        self.get_logger().info(f"Incoming request: {request}")
        response.answer = 'nain'

        return response

    def listener_callback(self, response):
        self.get_logger().info(f"Listening to Pose topic: {response}")

    def patrol(self):
        return
    
    def go_to_exit(self):
        return


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
