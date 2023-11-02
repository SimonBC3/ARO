
import math

from turtlesim.action import RotateAbsolute

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from rclpy.node import Node


class CircleActionServer(Node):

    def __init__(self):
        super().__init__('circle_action_server')

        self.duration = None
        self.rate = self.create_rate(10) 
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self._action_server = ActionServer(
            self,
            RotateAbsolute,
            'draw_circle',
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup(),
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback)

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

        self.get_logger().info("Recived theta: " + str(goal_handle.request.theta))

        msg = Twist()
        msg.angular.z = 1.0
        msg.linear.x = msg.angular.z * goal_handle.request.theta
        self.publisher.publish(msg)
        self.start_time = self.get_clock().now()
        feedback_msg = RotateAbsolute.Feedback()
        feedback_msg.remaining = 0.0

        while True:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return RotateAbsolute.Result()
            
            self.publisher.publish(msg)
            self.duration = self.get_clock().now() - self.start_time
            elapsed_time = self.duration.nanoseconds / 1e9
                        
            if elapsed_time > 2000: 
                return RotateAbsolute.Result()

            drawn_rad = elapsed_time * msg.angular.z
            self.get_logger().info(f"Amount of drawed rad = {drawn_rad}")

            feedback_msg.remaining += drawn_rad
            goal_handle.publish_feedback(feedback_msg)

            if  ((2*math.pi) - drawn_rad) < 0.2: 
                goal_handle.succeed()
                result = RotateAbsolute.Result()
                result.delta = feedback_msg.remaining
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
