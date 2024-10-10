# ROS2 (Humble) Templates for nodes
ROS2 (Robot Operating System) is a flexible and scalable framework for writing robot software. It provides the tools and libraries needed to obtain, build, write and run code on multiple computers. One of the key features of ROS2 is its use of ‘nodes’ which are processes that perform computations. Nodes communicate with each other via topic messages within a network, which facilitates modularity and code reuse, essential in complex robotic development.

<p align="center">
  <img src="https://github.com/user-attachments/assets/3e10d96d-7e1f-4caa-9d8f-4bcaf5ee6529" width="200">
</p>

The node-based architecture of ROS2 is key because it allows a system to be broken down into small functional parts that can be developed and tested independently. These nodes can be as simple as an individual sensor controller or as complex as an advanced motion planning system. By modularising systems in this way, ROS2 facilitates collaboration between developers and the integration of heterogeneous systems, providing a robust intercommunication framework.

During my time learning to use ROS2, I noticed that it can be cumbersome to start developing a node from scratch. This initial hurdle led me to create templates for writing nodes in both Python and C++. These templates are designed to be a starting point, helping developers to quickly structure their own nodes and customise them to the needs of their specific projects. I have uploaded these codes, called template.py and template.cpp, in the hope that they will serve as a valuable tool for others starting out in ROS2.

It should be noted that these templates will have to be integrated into the projects as required by the language.

Good luck with your projects! 🚀🤖🔧

# template.py
```python
import rclpy
from rclpy.node import Node

class MyCustomeNode(Node): # You will need to modify the name

    def __init__(self):
        super().__init__("node_name") # You will need to modify the name

def main(args=None):
    rclpy.init(args=args)
    node = MyCustomeNode()
    rclpy.spin(node)
    rclpy.shutdown

if __name__ == "__main__":
    main()
```

# template.cpp
```cpp
#include "rclcpp/rclcpp.hpp"

class MyCustomNode : public rclcpp::Node // You will modify the name
{
public:
    MyCustomNode() : Node("node_name") // You will modify the name
    {
        
    }

private:
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<MyCustomNode>("cpp_test"); // You will modify the name

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
```


