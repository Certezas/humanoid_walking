// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__TRAITS_HPP_
#define OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'torque_enable_data'
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off__traits.hpp"

namespace op3_tuning_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointTorqueOnOffArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: torque_enable_data
  {
    if (msg.torque_enable_data.size() == 0) {
      out << "torque_enable_data: []";
    } else {
      out << "torque_enable_data: [";
      size_t pending_items = msg.torque_enable_data.size();
      for (auto item : msg.torque_enable_data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointTorqueOnOffArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: torque_enable_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque_enable_data.size() == 0) {
      out << "torque_enable_data: []\n";
    } else {
      out << "torque_enable_data:\n";
      for (auto item : msg.torque_enable_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointTorqueOnOffArray & msg, bool use_flow_style = false)
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
  const op3_tuning_module_msgs::msg::JointTorqueOnOffArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_tuning_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_tuning_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_tuning_module_msgs::msg::JointTorqueOnOffArray & msg)
{
  return op3_tuning_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>()
{
  return "op3_tuning_module_msgs::msg::JointTorqueOnOffArray";
}

template<>
inline const char * name<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>()
{
  return "op3_tuning_module_msgs/msg/JointTorqueOnOffArray";
}

template<>
struct has_fixed_size<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_tuning_module_msgs::msg::JointTorqueOnOffArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_TUNING_MODULE_MSGS__MSG__DETAIL__JOINT_TORQUE_ON_OFF_ARRAY__TRAITS_HPP_
