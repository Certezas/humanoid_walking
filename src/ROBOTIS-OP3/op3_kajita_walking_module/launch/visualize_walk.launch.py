import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Caminhos para os pacotes necessários
    op3_description_pkg_path = FindPackageShare('op3_description')

    # Processa o arquivo XACRO para gerar a descrição do robô
    xacro_file_path = PathJoinSubstitution([
        op3_description_pkg_path, 'urdf', 'robotis_op3.urdf.xacro'
    ])
    robot_description_content = ParameterValue(
        Command(['xacro ', xacro_file_path]),
        value_type=str
    )
    
    # Caminho para o arquivo de configuração do RViz
    rviz_config_path = PathJoinSubstitution([
        op3_description_pkg_path, 'rviz', 'op3.rviz'
    ])

    return LaunchDescription([
        # 1. Inicia o Robot State Publisher.
        #    Ele ouve diretamente o tópico /joint_states (que o seu nó publica)
        #    e posiciona o modelo 3D.
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{'robot_description': robot_description_content}],
        ),
        
        # 2. Inicia o seu nó de caminhada.
        #    Ele agora é a ÚNICA fonte de estados de juntas.
        Node(
            package='op3_kajita_walking_module',
            executable='kajita_walking_node',
            name='kajita_walking_node',
            output='screen',
            parameters=[
                # Garante que o nó está no modo correto para o RViz2
                {'publish_mode': 'joint_state'}
            ]
        ),

        # 3. Inicia o RViz2 com a configuração correta.
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_path]
        )
    ])