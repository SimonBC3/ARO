from minimal_interfaces.srv import StringService

import rclpy
from rclpy.node import Node

class MoveTurtle(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(StringService, 'string_service', self.move_turtle_callback)

    def move_turtle_callback(self, request, response):
        if request.figure not in ['cuadrado', 'circulo']:
            self.get_logger().error('Error: %s is not a valid figure' % request.figure)
            
            return
        
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MoveTurtle()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()