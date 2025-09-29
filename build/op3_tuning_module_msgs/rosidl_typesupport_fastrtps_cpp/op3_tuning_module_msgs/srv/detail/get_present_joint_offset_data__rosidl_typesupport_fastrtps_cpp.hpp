// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from op3_tuning_module_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_tuning_module_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace op3_tuning_module_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
cdr_serialize(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
get_serialized_size(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
max_serialized_size_GetPresentJointOffsetData_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace op3_tuning_module_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "op3_tuning_module_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace op3_tuning_module_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
cdr_serialize(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
get_serialized_size(
  const op3_tuning_module_msgs::srv::GetPresentJointOffsetData_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
max_serialized_size_GetPresentJointOffsetData_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace op3_tuning_module_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "op3_tuning_module_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_tuning_module_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_tuning_module_msgs, srv, GetPresentJointOffsetData)();

#ifdef __cplusplus
}
#endif

#endif  // OP3_TUNING_MODULE_MSGS__SRV__DETAIL__GET_PRESENT_JOINT_OFFSET_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
