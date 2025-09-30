import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from webots_ros2_driver.webots_launcher import WebotsLauncher
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_dir = get_package_share_directory('op3_webots_ros2')
    
    # Inicia o Webots com o mundo que já contém o robô
    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'robotis_op3_extern.wbt')
    )

    # Inicia o controlador externo, que faz a ponte com o simulador
    op3_webots_controller = Node(
        package='op3_webots_ros2',
        executable='op3_extern_controller',
        output='screen',
        # Remapeia o TÓPICO DE ENTRADA do controlador para que ele
        # receba os ângulos do SEU nó, em vez de um nó padrão.
        
    )

    # Inicia o SEU nó de caminhada, que publica os ângulos
    kajita_walking_node = Node(
        package='op3_kajita_walking_module',
        executable='kajita_walking_node',
        name='kajita_walking_node',
        output='screen',
        parameters=[
            {'publish_mode': 'individual_topics'}  # Modo de publicação individual
        ]
    )

    return LaunchDescription([
        webots,
        op3_webots_controller,
        #kajita_walking_node,
        
        # Garante que tudo feche ao fechar o Webots
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])