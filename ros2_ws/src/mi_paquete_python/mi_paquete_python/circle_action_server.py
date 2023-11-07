
import math

from tutorial_interfaces.action import Circle

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist, Point
from turtlesim.msg import Pose
from rclpy.node import Node


class CircleActionServer(Node):

    def __init__(self):
        super().__init__('circle_action_server')

        self.duration = None
        self.rate = self.create_rate(10) 
        self.vel_publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.tp_publisher = self.create_publisher(Point, '/turtle1/teleport_absolute', 10)
        self.subscriber = self.create_subscription(Pose, '/turtle1/pose', self.listener_callback, 10)
        self._action_server = ActionServer(
            self,
            Circle,
            'draw_circle',
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)

    def listener_callback(self, pose):
        self.feedback_msg = Circle.Feedback()
        self.feedback_msg.current_point = Point()
        
        self.feedback_msg.current_point.x = pose.x
        self.feedback_msg.current_point.y = pose.y
        self.feedback_msg.current_point.z = pose.theta

    def destroy(self):
        self._action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        """Accept or reject a client request to begin an action."""
        # This server allows multiple goals in parallel
        self.get_logger().info('Received goal request')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        """Accept or reject a client request to cancel an action."""
        self.get_logger().info('Received cancel request')
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        """Execute a goal."""
        self.get_logger().info('Executing goal...')

        self.get_logger().info("Recived goal: " + str(goal_handle.request))

        self.tp_publisher.publish(goal_handle.request.point)

        msg = Twist()
        msg.angular.z = goal_handle.request.linear_vel / goal_handle.request.radius
        msg.linear.x = goal_handle.request.linear_vel
        self.vel_publisher.publish(msg)
        self.start_time = self.get_clock().now()
        

        while True:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return Circle.Result()
            
            self.vel_publisher.publish(msg)
            self.duration = self.get_clock().now() - self.start_time
            elapsed_time = self.duration.nanoseconds / 1e9
                        
            if elapsed_time > 2000: 
                return Circle.Result()

            drawn_rad = elapsed_time * msg.angular.z
            self.get_logger().info(f"Amount of drawed rad = {drawn_rad}")

            goal_handle.publish_feedback(self.feedback_msg)

            if  ((2*math.pi) - drawn_rad) < 0.2 or goal_handle.request.point == self.feedback_msg.current_point: 
                goal_handle.succeed()
                result = Circle.Result()
                result.drawn_rad = drawn_rad
                return result

            self.rate.sleep()


def main(args=None):
    rclpy.init(args=args)

    circle_action_server = CircleActionServer()

    # Use a MultiThreadedExecutor to enable processing goals concurrently
    executor = MultiThreadedExecutor()

    rclpy.spin(circle_action_server, executor=executor)

    circle_action_server.destroy()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
