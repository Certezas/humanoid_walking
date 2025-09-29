// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__TRAITS_HPP_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_action_module_msgs/srv/detail/is_running__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_action_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsRunning_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsRunning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsRunning_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_action_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_action_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_action_module_msgs::srv::IsRunning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_action_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_action_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_action_module_msgs::srv::IsRunning_Request & msg)
{
  return op3_action_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_action_module_msgs::srv::IsRunning_Request>()
{
  return "op3_action_module_msgs::srv::IsRunning_Request";
}

template<>
inline const char * name<op3_action_module_msgs::srv::IsRunning_Request>()
{
  return "op3_action_module_msgs/srv/IsRunning_Request";
}

template<>
struct has_fixed_size<op3_action_module_msgs::srv::IsRunning_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_action_module_msgs::srv::IsRunning_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_action_module_msgs::srv::IsRunning_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace op3_action_module_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IsRunning_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_running
  {
    out << "is_running: ";
    rosidl_generator_traits::value_to_yaml(msg.is_running, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IsRunning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_running: ";
    rosidl_generator_traits::value_to_yaml(msg.is_running, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IsRunning_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace op3_action_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_action_module_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_action_module_msgs::srv::IsRunning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_action_module_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_action_module_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_action_module_msgs::srv::IsRunning_Response & msg)
{
  return op3_action_module_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_action_module_msgs::srv::IsRunning_Response>()
{
  return "op3_action_module_msgs::srv::IsRunning_Response";
}

template<>
inline const char * name<op3_action_module_msgs::srv::IsRunning_Response>()
{
  return "op3_action_module_msgs/srv/IsRunning_Response";
}

template<>
struct has_fixed_size<op3_action_module_msgs::srv::IsRunning_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_action_module_msgs::srv::IsRunning_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_action_module_msgs::srv::IsRunning_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_action_module_msgs::srv::IsRunning>()
{
  return "op3_action_module_msgs::srv::IsRunning";
}

template<>
inline const char * name<op3_action_module_msgs::srv::IsRunning>()
{
  return "op3_action_module_msgs/srv/IsRunning";
}

template<>
struct has_fixed_size<op3_action_module_msgs::srv::IsRunning>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_action_module_msgs::srv::IsRunning_Request>::value &&
    has_fixed_size<op3_action_module_msgs::srv::IsRunning_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_action_module_msgs::srv::IsRunning>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_action_module_msgs::srv::IsRunning_Request>::value &&
    has_bounded_size<op3_action_module_msgs::srv::IsRunning_Response>::value
  >
{
};

template<>
struct is_service<op3_action_module_msgs::srv::IsRunning>
  : std::true_type
{
};

template<>
struct is_service_request<op3_action_module_msgs::srv::IsRunning_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_action_module_msgs::srv::IsRunning_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__TRAITS_HPP_
