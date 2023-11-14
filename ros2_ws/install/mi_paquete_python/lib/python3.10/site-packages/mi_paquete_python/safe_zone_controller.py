from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from rcl_interfaces.msg import ParameterEvent, Parameter

import rclpy
import time
import math


class SafeZoneController(Node):
    def __init__(self):
        super().__init__('safe_zone_controller')
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.declare_parameter('center_x', 5.4)
        self.declare_parameter('center_y', 5.4)
        self.declare_parameter('radius', 1.0)
        self.create_subscription(ParameterEvent, '/parameter_events', self.parameter_callback,10)

    def check_inside_circle(self, x, y):
        center_x = self.get_parameter('center_x').get_parameter_value().double_value
        center_y = self.get_parameter('center_y').get_parameter_value().double_value
        radius = self.get_parameter('radius').get_parameter_value().double_value
        
        distance = math.sqrt((x - center_x)**2 + (y - center_y)**2)
        return distance < radius

    def is_turtle_close_to_circle(self, turtle_x, turtle_y, threshold):
        center_x = self.get_parameter('center_x').get_parameter_value().double_value
        center_y = self.get_parameter('center_y').get_parameter_value().double_value
        radius = self.get_parameter('radius').get_parameter_value().double_value

        distance = math.sqrt((turtle_x - center_x)**2 + (turtle_y - center_y)**2)
        return distance <= radius + threshold

    def pose_callback(self, msg):
        if self.check_inside_circle(msg.x, msg.y):
            print('Turtle has entered ERRROROROORROOROR')
            return
        
        if self.is_turtle_close_to_circle(msg.x, msg.y, 0.5):
            self.get_logger().info("\n Turtle close to circle\n stopping turtle")
            stop_turtle_msg = Twist()
            stop_turtle_msg.linear.x = -5.0
            stop_turtle_msg.angular.z = 0.0
            self.publisher.publish(stop_turtle_msg)

        time.sleep(1)
        return

    def parameter_callback(self, msg):
        for parameter in msg.changed_parameters:
            self.get_logger().info(f"\nParameter {parameter.name} was changed to {parameter.value.double_value}")


def main():
    rclpy.init()

    node = SafeZoneController()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()