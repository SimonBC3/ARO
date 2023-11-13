from tutorial_interfaces.srv import MoveRobot

import rclpy
from rclpy.node import Node


class ServiceServer(Node):
    def __init__(self):
        super().__init__("service_server")
        self.srv = self.create_service(
            MoveRobot, "move_robot", self.callback
        )

    def callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info("Incoming request\na: %d b: %d" % (request.a, request.b))

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = ServiceServer()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
