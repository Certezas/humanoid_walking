// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepArray.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/foot_step_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootStepArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: moving_foot
  {
    if (msg.moving_foot.size() == 0) {
      out << "moving_foot: []";
    } else {
      out << "moving_foot: [";
      size_t pending_items = msg.moving_foot.size();
      for (auto item : msg.moving_foot) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const FootStepArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: moving_foot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.moving_foot.size() == 0) {
      out << "moving_foot: []\n";
    } else {
      out << "moving_foot:\n";
      for (auto item : msg.moving_foot) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootStepArray & msg, bool use_flow_style = false)
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
  const op3_online_walking_module_msgs::msg::FootStepArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::FootStepArray & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::FootStepArray>()
{
  return "op3_online_walking_module_msgs::msg::FootStepArray";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::FootStepArray>()
{
  return "op3_online_walking_module_msgs/msg/FootStepArray";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::FootStepArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::FootStepArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::FootStepArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__FOOT_STEP_ARRAY__TRAITS_HPP_
