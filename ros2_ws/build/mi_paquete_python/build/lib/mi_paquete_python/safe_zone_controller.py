from rclpy.node import Node
from turtlesim.msg import Pose

import rclpy


class SafeZoneController(Node):
    def __init__(self):
        super().__init__('safe_zone_controller')
        self.create_subscription(Pose, '/turtle1/pose', self.callback, 10)
    
    def callback(self, msg):
        print(msg)
        return
    

def main():
    rclpy.init()

    node = SafeZoneController()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()