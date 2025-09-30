cmake_minimum_required(VERSION 3.8)
project(op3_kajita_walking_module)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Encontra as dependências
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(op3_kinematics_dynamics REQUIRED)
find_package(robotis_math REQUIRED)

# Adiciona o diretório 'include' do nosso próprio pacote
include_directories(include)

# Cria o nó executável
add_executable(kajita_walking_node
  src/main.cpp
  src/kajita_walking_controller.cpp
)

# =======================================================
# CORREÇÃO DEFINITIVA
# =======================================================
# Adiciona explicitamente os diretórios de inclusão das dependências ao nosso alvo.
# Isso força o compilador a encontrar os arquivos .h necessários, resolvendo
# o problema da dependência transitória.
target_include_directories(kajita_walking_node PRIVATE
  ${Eigen3_INCLUDE_DIRS}
  ${op3_kinematics_dynamics_INCLUDE_DIRS}
  ${robotis_math_INCLUDE_DIRS}
)
# =======================================================

# "Linka" as bibliotecas de pacotes ROS 2
ament_target_dependencies(kajita_walking_node
  rclcpp
  geometry_msgs
  sensor_msgs
  op3_kinematics_dynamics
  robotis_math
)

# "Linka" as bibliotecas externas (não-ROS)
target_link_libraries(kajita_walking_node Eigen3::Eigen)

# Instala o executável criado
install(TARGETS
  kajita_walking_node
  DESTINATION lib/${PROJECT_NAME}
)

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()