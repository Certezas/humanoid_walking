// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOff.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__TRAITS_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_tuning_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTorqueOnOff & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: torque_enable
  {
    out << "torque_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTorqueOnOff & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: torque_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTorqueOnOff & msg, bool use_flow_style = false)
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

}  // namespace op3_tuning_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_tuning_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_tuning_module_msgs::msg::JointTorqueOnOff & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_tuning_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_tuning_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_tuning_module_msgs::msg::JointTorqueOnOff & msg)
{
  return op3_tuning_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_tuning_module_msgs::msg::JointTorqueOnOff>()
{
  return "op3_tuning_module_msgs::msg::JointTorqueOnOff";
}

template<>
inline const char * name<op3_tuning_module_msgs::msg::JointTorqueOnOff>()
{
  return "op3_tuning_module_msgs/msg/JointTorqueOnOff";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::msg::JointTorqueOnOff>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_tuning_module_msgs::msg::JointTorqueOnOff>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_tuning_module_msgs::msg::JointTorqueOnOff>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF__TRAITS_HPP_
