from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

import rclpy
import time
import math


class SafeZoneController(Node):
    def __init__(self):
        super().__init__('safe_zone_controller')
        self.create_subscription(Pose, '/turtle1/pose', self.callback, 10)
        self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.center_x = 5.4 #definir de otra forma
        self.center_y = 5.4
        self.radius = 1.0

    def check_inside_circle(x, y, cx, cy, r):
        distance = math.sqrt((x - cx)**2 + (y - cy)**2)
        return distance < r

    def is_turtle_close_to_circle(turtle_x, turtle_y, circle_x, circle_y, circle_radius, threshold):
        distance = math.sqrt((turtle_x - circle_x)**2 + (turtle_y - circle_y)**2)
        return distance <= circle_radius + threshold

    def callback(self, msg):
        print(msg.x)

        if self.check_inside_circle():
            print('Turtle has entered ERRROROROORROOROR')
            return

        time.sleep(1)
        return


def main():
    rclpy.init()

    node = SafeZoneController()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()