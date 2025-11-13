#include "op3_kajita_walking_module/kajita_walking_controller.h"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    // Cria o nó
    auto node = std::make_shared<KajitaWalkingController>(rclcpp::NodeOptions());

    // Multithread para que o timer e os subscribers funcionem bem juntos   
    RCLCPP_INFO(node->get_logger(), "Iniciando executor multi-threaded...");
    
    // Cria um executor com 2 threads (suficiente para timer + subscribers)
    rclcpp::executors::MultiThreadedExecutor executor(rclcpp::ExecutorOptions(), 2);
    
    // Adiciona o nó ao executor
    executor.add_node(node);
    
    // Gira o executor (isso bloqueia e roda o nó)
    executor.spin();
    // =======================================================================

    rclcpp::shutdown();
    return 0;
}