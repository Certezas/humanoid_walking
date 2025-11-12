#include "op3_kajita_walking_module/kajita_walking_controller.h"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    // Cria o nó
    auto node = std::make_shared<KajitaWalkingController>(rclcpp::NodeOptions());

    // Processamento multi-threaded necessário para que o timer de 'process()' e os subscribers (como 'cmd_vel')
    // rodem em threads separadas, evitando que um bloqueie o outro.
    
    RCLCPP_INFO(node->get_logger(), "Iniciando executor multi-threaded...");
    
    // Cria um executor com 4 threads
    rclcpp::executors::MultiThreadedExecutor executor(rclcpp::ExecutorOptions(), 4);
    
    // Adiciona o nó ao executor
    executor.add_node(node);
    
    // Gira o executor (isso bloqueia e roda o nó)
    executor.spin();
    // =======================================================================

    rclcpp::shutdown();
    return 0;
}