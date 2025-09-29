// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "op3_ball_detector_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__struct.hpp"

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

namespace op3_ball_detector_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
cdr_serialize(
  const op3_ball_detector_msgs::msg::CircleSetStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_ball_detector_msgs::msg::CircleSetStamped & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
get_serialized_size(
  const op3_ball_detector_msgs::msg::CircleSetStamped & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
max_serialized_size_CircleSetStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace op3_ball_detector_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_ball_detector_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_ball_detector_msgs, msg, CircleSetStamped)();

#ifdef __cplusplus
}
#endif

#endif  // OP3_BALL_DETECTOR_MSGS__MSG__DETAIL__CIRCLE_SET_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
