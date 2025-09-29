// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/JointPose.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/joint_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: mov_time
  {
    out << "mov_time: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_time, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mov_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mov_time: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_time, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace op3_online_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_online_walking_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_online_walking_module_msgs::msg::JointPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::JointPose & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::JointPose>()
{
  return "op3_online_walking_module_msgs::msg::JointPose";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::JointPose>()
{
  return "op3_online_walking_module_msgs/msg/JointPose";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::JointPose>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::JointPose>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::JointPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__JOINT_POSE__TRAITS_HPP_
