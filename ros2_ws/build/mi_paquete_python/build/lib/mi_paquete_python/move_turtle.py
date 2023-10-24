from minimal_interfaces.srv import StringService

import rclpy
import time
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MoveTurtle(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(StringService, 'string_service', self.move_turtle_callback)
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

    def move_turtle_callback(self, request, response):
        if request.figure not in ['cuadrado', 'circulo']:
            self.get_logger().error('Error: %s is not a valid figure' % request.figure)
            return
        
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
        
        if request.figure == 'cuadrado':
            self.create_square
        elif request.figure == 'circulo':
            self.create_circle
        else:
            self.get_logger().error('Error: %s is not a valid figure' % request.figure)
            return

        return response

    def create_square(self):
        self.publish_movement(1.0, 0.0, 0.0)
        self.publish_movement(0.0, 1.0, 0.0)
        self.publish_movement(-1.0, 0.0, 0.0)
        self.publish_movement(0.0, -1.0, 0.0)

    def create_circle(self):
        self.publish_movement(1.0, 0.0, 1.0)
        self.publish_movement(1.0, 0.0, 1.0)
        self.publish_movement(1.0, 0.0, 1.0)
        self.publish_movement(1.0, 0.0, 1.0)

    def publish_movement(self, x, y, z):
        vel_msg = Twist()
        vel_msg.linear.x = x
        vel_msg.linear.y = y
        vel_msg.angular.z = z
        self.publisher.publish(vel_msg)
        time.sleep(1)

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MoveTurtle()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()