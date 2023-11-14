import rclpy
import math
import sys

from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtleController(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.goal = Pose()
        self.goal.x = float(sys.argv[1])
        self.goal.y = float(sys.argv[2])
        self.publisher = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.create_subscription(Pose, 'turtle1/pose', self.pose_callback, 10)

    # Función de callback del subscriptor
    def pose_callback(self, msg: Pose):
        self.distance = math.sqrt(math.pow((self.goal.x - msg.x),2) + math.pow((self.goal.y - msg.y),2))
        self.angle = math.atan2(self.goal.y - msg.y, self.goal.x - msg.x) - msg.theta
        if(abs(self.goal.x - msg.x) < 0.1  and abs(self.goal.y - msg.y) < 0.1):
            print("Reached goal")
            exit(0)
        self.go_to_goal()

    def go_to_goal(self):
        twist_msg = Twist()
        twist_msg.linear.x = 2 * self.distance
        twist_msg.angular.z = 5 * self.angle
        self.publisher.publish(twist_msg)


def main(args=None):
    rclpy.init(args=args)


    turtle_controller = TurtleController()

    rclpy.spin(turtle_controller)

    turtle_controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()