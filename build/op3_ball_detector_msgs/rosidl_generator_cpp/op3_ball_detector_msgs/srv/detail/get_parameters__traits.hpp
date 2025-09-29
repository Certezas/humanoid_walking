// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_ball_detector_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_
#define OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_ball_detector_msgs/srv/detail/get_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_ball_detector_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParameters_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetParameters_Request & msg, bool use_flow_style = false)
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

}  // namespace op3_ball_detector_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_ball_detector_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_ball_detector_msgs::srv::GetParameters_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_ball_detector_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_ball_detector_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_ball_detector_msgs::srv::GetParameters_Request & msg)
{
  return op3_ball_detector_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_ball_detector_msgs::srv::GetParameters_Request>()
{
  return "op3_ball_detector_msgs::srv::GetParameters_Request";
}

template<>
inline const char * name<op3_ball_detector_msgs::srv::GetParameters_Request>()
{
  return "op3_ball_detector_msgs/srv/GetParameters_Request";
}

template<>
struct has_fixed_size<op3_ball_detector_msgs::srv::GetParameters_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_ball_detector_msgs::srv::GetParameters_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_ball_detector_msgs::srv::GetParameters_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'returns'
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__traits.hpp"

namespace op3_ball_detector_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetParameters_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: returns
  {
    out << "returns: ";
    to_flow_style_yaml(msg.returns, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: returns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "returns:\n";
    to_block_style_yaml(msg.returns, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetParameters_Response & msg, bool use_flow_style = false)
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

}  // namespace op3_ball_detector_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_ball_detector_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_ball_detector_msgs::srv::GetParameters_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_ball_detector_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_ball_detector_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const op3_ball_detector_msgs::srv::GetParameters_Response & msg)
{
  return op3_ball_detector_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<op3_ball_detector_msgs::srv::GetParameters_Response>()
{
  return "op3_ball_detector_msgs::srv::GetParameters_Response";
}

template<>
inline const char * name<op3_ball_detector_msgs::srv::GetParameters_Response>()
{
  return "op3_ball_detector_msgs/srv/GetParameters_Response";
}

template<>
struct has_fixed_size<op3_ball_detector_msgs::srv::GetParameters_Response>
  : std::integral_constant<bool, has_fixed_size<op3_ball_detector_msgs::msg::BallDetectorParams>::value> {};

template<>
struct has_bounded_size<op3_ball_detector_msgs::srv::GetParameters_Response>
  : std::integral_constant<bool, has_bounded_size<op3_ball_detector_msgs::msg::BallDetectorParams>::value> {};

template<>
struct is_message<op3_ball_detector_msgs::srv::GetParameters_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<op3_ball_detector_msgs::srv::GetParameters>()
{
  return "op3_ball_detector_msgs::srv::GetParameters";
}

template<>
inline const char * name<op3_ball_detector_msgs::srv::GetParameters>()
{
  return "op3_ball_detector_msgs/srv/GetParameters";
}

template<>
struct has_fixed_size<op3_ball_detector_msgs::srv::GetParameters>
  : std::integral_constant<
    bool,
    has_fixed_size<op3_ball_detector_msgs::srv::GetParameters_Request>::value &&
    has_fixed_size<op3_ball_detector_msgs::srv::GetParameters_Response>::value
  >
{
};

template<>
struct has_bounded_size<op3_ball_detector_msgs::srv::GetParameters>
  : std::integral_constant<
    bool,
    has_bounded_size<op3_ball_detector_msgs::srv::GetParameters_Request>::value &&
    has_bounded_size<op3_ball_detector_msgs::srv::GetParameters_Response>::value
  >
{
};

template<>
struct is_service<op3_ball_detector_msgs::srv::GetParameters>
  : std::true_type
{
};

template<>
struct is_service_request<op3_ball_detector_msgs::srv::GetParameters_Request>
  : std::true_type
{
};

template<>
struct is_service_response<op3_ball_detector_msgs::srv::GetParameters_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OP3_BALL_DETECTOR_MSGS__SRV__DETAIL__GET_PARAMETERS__TRAITS_HPP_
