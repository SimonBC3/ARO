#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class LeonardoController(Node): 
    def __init__(self):
        super().__init__("LeonardoController") 
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.vel_msg = Twist()
        self.move(1.0,0.0)
        self.move(0.0,1.0)
        self.move(-1.0,0.0)
        self.move(0.0,-1.0)
        self.move(0.0,0.0)
        self.vel_msg.angular.z = 1.0
        self.publish_instruction()

    def publish_instruction(self):
        self.publisher_.publish(self.vel_msg)
        self.get_logger().info("Publishing: ""%s" % self.vel_msg)

    def move(self, x, y):
        self.vel_msg.linear.x = x
        self.vel_msg.linear.y = y
        print('moving')
        self.publish_instruction()
        time.sleep(1)

def main(args=None):
    rclpy.init(args=args)
    node = LeonardoController() 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()