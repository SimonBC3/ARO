#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class MichelangeloController(Node): 
    def __init__(self):
        super().__init__("MichelangeloController") 
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.vel_msg = Twist()
        self.vel_msg.angular.z = 1.8
        self.move(1.0,0.0)
        self.move(1.0,0.0)
        self.move(1.0,0.0)
        self.move(1.0,0.0)      

    def publish_instruction(self):
        self.publisher_.publish(self.vel_msg)
        self.get_logger().info("Publishing: ""%s" % self.vel_msg)

    def move(self, x, y):
        self.vel_msg.linear.x = x
        self.vel_msg.linear.y = y
        self.publish_instruction()
        time.sleep(1)
    

def main(args=None):
    rclpy.init(args=args)
    node = MichelangeloController() 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()