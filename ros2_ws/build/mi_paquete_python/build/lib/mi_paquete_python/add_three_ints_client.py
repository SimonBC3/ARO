import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import AddThreeInts
import sys

class AddThreeIntsClient(Node):
    def __init__(self, a, b, c):
        super().__init__('add_three_ints_client')
        self.cli = self.create_client(AddThreeInts, 'add_three_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = AddThreeInts.Request()
        self.req.a = a
        self.req.b = b
        self.req.c = c

    def send_request(self):
        future = self.cli.call_async(self.req)
        future.add_done_callback(self.future_callback)

    def future_callback(self, future):
        try:
            response = future.result()
            self.get_logger().info(f"Sum: { response.sum} ")
            # Shutdown rclpy to make the node terminate
            rclpy.shutdown()
        except Exception as e:
            self.get_logger().error(f"Service call failed { e} ")


def main(args=None):
    rclpy.init(args=args)
    if len(sys.argv) < 4:
        print("Usage: script_name.py <a> <b> <c>")
        return
    
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    c = int(sys.argv[3])
    client = AddThreeIntsClient(a, b, c)
    client.send_request()

    rclpy.spin(client)

    client.destroy_node()

if __name__ == '__main__':
    main()