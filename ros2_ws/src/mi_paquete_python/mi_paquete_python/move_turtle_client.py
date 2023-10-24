from minimal_interfaces.srv import StringService

import rclpy
from rclpy.node import Node


class MoveTurtleClient(Node):

    def __init__(self):
        super().__init__('move_turtle_client')
        self.cli = self.create_client(StringService, 'string_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = StringService.Request()

    def send_request(self, figure):
        self.req.figura = figure
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MoveTurtleClient()
    minimal_client.send_request('cuadrado')
    minimal_client.send_request('circulo')
    minimal_client.send_request('cuadrado')

    while rclpy.ok():
        rclpy.spin_once(minimal_client)

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
