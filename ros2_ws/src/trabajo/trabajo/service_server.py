from tutorial_interfaces.srv import MoveRobot

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from turtlesim.msg import Pose


class ServiceServer(Node):
    def __init__(self):
        super().__init__("service_server")
        self.srv = self.create_service(
            MoveRobot, "move_robot", self.callback
        )
        self.subscriber = self.create_subscription(Pose, '/turtle1/pose', self.listener_callback, 10)


    def distance(goal:Point):
        
        return

    def callback(self, goal_handle):
        msg = Twist() 

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
