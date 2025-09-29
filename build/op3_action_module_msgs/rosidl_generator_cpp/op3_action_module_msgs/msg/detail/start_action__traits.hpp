// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__TRAITS_HPP_
#define OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_action_module_msgs/msg/detail/start_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_action_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: page_num
  {
    out << "page_num: ";
    rosidl_generator_traits::value_to_yaml(msg.page_num, out);
    out << ", ";
  }

  // member: joint_name_array
  {
    if (msg.joint_name_array.size() == 0) {
      out << "joint_name_array: []";
    } else {
      out << "joint_name_array: [";
      size_t pending_items = msg.joint_name_array.size();
      for (auto item : msg.joint_name_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const StartAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: page_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "page_num: ";
    rosidl_generator_traits::value_to_yaml(msg.page_num, out);
    out << "\n";
  }

  // member: joint_name_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_name_array.size() == 0) {
      out << "joint_name_array: []\n";
    } else {
      out << "joint_name_array:\n";
      for (auto item : msg.joint_name_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartAction & msg, bool use_flow_style = false)
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

}  // namespace op3_action_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_action_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_action_module_msgs::msg::StartAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_action_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_action_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_action_module_msgs::msg::StartAction & msg)
{
  return op3_action_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_action_module_msgs::msg::StartAction>()
{
  return "op3_action_module_msgs::msg::StartAction";
}

template<>
inline const char * name<op3_action_module_msgs::msg::StartAction>()
{
  return "op3_action_module_msgs/msg/StartAction";
}

template<>
struct has_fixed_size<op3_action_module_msgs::msg::StartAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_action_module_msgs::msg::StartAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_action_module_msgs::msg::StartAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__TRAITS_HPP_
