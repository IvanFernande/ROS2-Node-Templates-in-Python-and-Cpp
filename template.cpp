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