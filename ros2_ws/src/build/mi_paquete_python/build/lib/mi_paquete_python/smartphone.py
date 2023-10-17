
import rclpy
from rclpy.node import Node

from std_msgs.msg import String


class SmartphoneNode(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.create_subscription(
            String,
            'robot_news',
            self.listener_callback,
            10)

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = SmartphoneNode()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()