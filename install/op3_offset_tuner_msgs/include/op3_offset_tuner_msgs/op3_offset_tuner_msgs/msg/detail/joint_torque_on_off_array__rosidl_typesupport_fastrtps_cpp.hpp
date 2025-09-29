// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from op3_offset_tuner_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_offset_tuner_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "op3_offset_tuner_msgs/msg/detail/joint_torque_on_off_array__struct.hpp"

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

namespace op3_offset_tuner_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_offset_tuner_msgs
cdr_serialize(
  const op3_offset_tuner_msgs::msg::JointTorqueOnOffArray & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_offset_tuner_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_offset_tuner_msgs::msg::JointTorqueOnOffArray & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_offset_tuner_msgs
get_serialized_size(
  const op3_offset_tuner_msgs::msg::JointTorqueOnOffArray & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_offset_tuner_msgs
max_serialized_size_JointTorqueOnOffArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace op3_offset_tuner_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_offset_tuner_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_offset_tuner_msgs, msg, JointTorqueOnOffArray)();

#ifdef __cplusplus
}
#endif

#endif  // OP3_OFFSET_TUNER_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
