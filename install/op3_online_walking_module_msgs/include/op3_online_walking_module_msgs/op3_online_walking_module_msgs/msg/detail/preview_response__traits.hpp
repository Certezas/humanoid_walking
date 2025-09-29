// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__TRAITS_HPP_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_online_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PreviewResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: k_row
  {
    out << "k_row: ";
    rosidl_generator_traits::value_to_yaml(msg.k_row, out);
    out << ", ";
  }

  // member: k_col
  {
    out << "k_col: ";
    rosidl_generator_traits::value_to_yaml(msg.k_col, out);
    out << ", ";
  }

  // member: k
  {
    if (msg.k.size() == 0) {
      out << "k: []";
    } else {
      out << "k: [";
      size_t pending_items = msg.k.size();
      for (auto item : msg.k) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: p_row
  {
    out << "p_row: ";
    rosidl_generator_traits::value_to_yaml(msg.p_row, out);
    out << ", ";
  }

  // member: p_col
  {
    out << "p_col: ";
    rosidl_generator_traits::value_to_yaml(msg.p_col, out);
    out << ", ";
  }

  // member: p
  {
    if (msg.p.size() == 0) {
      out << "p: []";
    } else {
      out << "p: [";
      size_t pending_items = msg.p.size();
      for (auto item : msg.p) {
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
  const PreviewResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: k_row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_row: ";
    rosidl_generator_traits::value_to_yaml(msg.k_row, out);
    out << "\n";
  }

  // member: k_col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k_col: ";
    rosidl_generator_traits::value_to_yaml(msg.k_col, out);
    out << "\n";
  }

  // member: k
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.k.size() == 0) {
      out << "k: []\n";
    } else {
      out << "k:\n";
      for (auto item : msg.k) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: p_row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_row: ";
    rosidl_generator_traits::value_to_yaml(msg.p_row, out);
    out << "\n";
  }

  // member: p_col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_col: ";
    rosidl_generator_traits::value_to_yaml(msg.p_col, out);
    out << "\n";
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.p.size() == 0) {
      out << "p: []\n";
    } else {
      out << "p:\n";
      for (auto item : msg.p) {
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

inline std::string to_yaml(const PreviewResponse & msg, bool use_flow_style = false)
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
  const op3_online_walking_module_msgs::msg::PreviewResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_online_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_online_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_online_walking_module_msgs::msg::PreviewResponse & msg)
{
  return op3_online_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_online_walking_module_msgs::msg::PreviewResponse>()
{
  return "op3_online_walking_module_msgs::msg::PreviewResponse";
}

template<>
inline const char * name<op3_online_walking_module_msgs::msg::PreviewResponse>()
{
  return "op3_online_walking_module_msgs/msg/PreviewResponse";
}

template<>
struct has_fixed_size<op3_online_walking_module_msgs::msg::PreviewResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<op3_online_walking_module_msgs::msg::PreviewResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<op3_online_walking_module_msgs::msg::PreviewResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__PREVIEW_RESPONSE__TRAITS_HPP_
