// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewRequest.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/preview_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PreviewRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: control_cycle
  {
    out << "control_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.control_cycle, out);
    out << ", ";
  }

  // member: lipm_height
  {
    out << "lipm_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lipm_height, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PreviewRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.control_cycle, out);
    out << "\n";
  }

  // member: lipm_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lipm_height: ";
    rosidl_generator_traits::value_to_yaml(msg.lipm_height, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PreviewRequest & msg, bool use_flow_style = false)
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
  const op3_online_walking_module_msgs::msg::PreviewRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::PreviewRequest & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::PreviewRequest>()
{
  return "op3_online_walking_module_msgs::msg::PreviewRequest";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::PreviewRequest>()
{
  return "op3_online_walking_module_msgs/msg/PreviewRequest";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::PreviewRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::PreviewRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::PreviewRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_REQUEST__TRAITS_HPP_
