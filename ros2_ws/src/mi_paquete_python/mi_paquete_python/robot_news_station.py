#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String 


class RobotNews(Node): 
    def __init__(self):
        super().__init__("RobotNews") 
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.publish_news)
        self.i = 0


    def publish_news(self):
        msg = String()
        msg.data = "Hi, this is C3PO from the robot news station"
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing: ""%s" % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    node = RobotNews() 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()