import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from webots_ros2_driver.webots_launcher import WebotsLauncher
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_dir = get_package_share_directory('op3_webots_ros2')
    
    # 1. Inicia o Webots com o mundo
    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'robotis_op3_extern.wbt')
    )

    # 2. Inicia o controlador externo 
    op3_webots_controller = Node(
        package='op3_webots_ros2',
        executable='op3_extern_controller',
        output='screen',
        parameters=[{'use_sim_time': True}] 
    )

    # 3. Definição do nó Kajita
    kajita_walking_node = Node(
        package='op3_kajita_walking_module',
        executable='op3_kajita_walking_controller_node',
        name='op3_kajita_walking_controller_node',
        output='screen',
        parameters=[
            {'use_sim_time': True},
            {'publish_mode': 'individual_topics'}
        ]
    )

    return LaunchDescription([
        webots,
        op3_webots_controller,
        
        # kajita_walking_node,  <--- COMENTADO PARA NÃO RODAR AUTOMÁTICO
        
        # Garante que tudo feche ao fechar o Webots
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])