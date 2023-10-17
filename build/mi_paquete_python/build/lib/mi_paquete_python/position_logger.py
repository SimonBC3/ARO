import rclpy
import time

from rclpy.node import Node
from turtlesim.msg import Pose


class TurtleSimPose(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.create_subscription(
            Pose,
            'turtle1/pose',
            self.listener_callback,
            10)

    def listener_callback(self, msg):
        time.sleep(0.5)
        self.get_logger().info('I heard: "%s"' % msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = TurtleSimPose()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()