# Copyright 2018 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from action_msgs.msg import GoalStatus
from turtlesim.action import RotateAbsolute
from tutorial_interfaces.action import Circle
from geometry_msgs.msg import Point

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node


class CircleActionClient(Node):

    def __init__(self):
        super().__init__('circle_action_client')
        self._action_client = ActionClient(self, Circle, '/draw_circle')
        self.counter = 1

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self, feedback):
        self.get_logger().info('Received feedback: {0}'.format(feedback.feedback.current_point))

    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Goal succeeded! Result: {0}'.format(result.drawn_rad))
            if self.counter < 1:
                self.counter  = 1
                self.send_goal(1.0)

        else:
            self.get_logger().info('Goal failed with status: {0}'.format(status))

        # Shutdown after receiving a result
        rclpy.shutdown()

    def send_goal(self):
        self.get_logger().info('Waiting for action server...')
        self._action_client.wait_for_server()

        self.goal_msg = Circle.Goal()
        point = Point()
        point.x = 3.0
        point.y = 3.0
        self.goal_msg.point = point
        self.goal_msg.linear_vel = 1.0
        self.goal_msg.radius = 2.0

        self.get_logger().info('Sending goal request...')

        self._send_goal_future = self._action_client.send_goal_async(
            self.goal_msg,
            feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)


def main(args=None):
    rclpy.init(args=args)

    action_client = CircleActionClient()

    
    action_client.send_goal()

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
