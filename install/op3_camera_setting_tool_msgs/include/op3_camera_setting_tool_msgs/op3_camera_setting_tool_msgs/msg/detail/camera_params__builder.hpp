// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice

#ifndef OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__BUILDER_HPP_
#define OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_camera_setting_tool_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraParams_white_balance_temperature
{
public:
  explicit Init_CameraParams_white_balance_temperature(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  ::op3_camera_setting_tool_msgs::msg::CameraParams white_balance_temperature(::op3_camera_setting_tool_msgs::msg::CameraParams::_white_balance_temperature_type arg)
  {
    msg_.white_balance_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_white_balance_automatic
{
public:
  explicit Init_CameraParams_white_balance_automatic(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_white_balance_temperature white_balance_automatic(::op3_camera_setting_tool_msgs::msg::CameraParams::_white_balance_automatic_type arg)
  {
    msg_.white_balance_automatic = std::move(arg);
    return Init_CameraParams_white_balance_temperature(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_exposure_time_absolute
{
public:
  explicit Init_CameraParams_exposure_time_absolute(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_white_balance_automatic exposure_time_absolute(::op3_camera_setting_tool_msgs::msg::CameraParams::_exposure_time_absolute_type arg)
  {
    msg_.exposure_time_absolute = std::move(arg);
    return Init_CameraParams_white_balance_automatic(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_auto_exposure
{
public:
  explicit Init_CameraParams_auto_exposure(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_exposure_time_absolute auto_exposure(::op3_camera_setting_tool_msgs::msg::CameraParams::_auto_exposure_type arg)
  {
    msg_.auto_exposure = std::move(arg);
    return Init_CameraParams_exposure_time_absolute(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_focus_absolute
{
public:
  explicit Init_CameraParams_focus_absolute(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_auto_exposure focus_absolute(::op3_camera_setting_tool_msgs::msg::CameraParams::_focus_absolute_type arg)
  {
    msg_.focus_absolute = std::move(arg);
    return Init_CameraParams_auto_exposure(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_focus_automatic_continuous
{
public:
  explicit Init_CameraParams_focus_automatic_continuous(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_focus_absolute focus_automatic_continuous(::op3_camera_setting_tool_msgs::msg::CameraParams::_focus_automatic_continuous_type arg)
  {
    msg_.focus_automatic_continuous = std::move(arg);
    return Init_CameraParams_focus_absolute(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_gain
{
public:
  explicit Init_CameraParams_gain(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_focus_automatic_continuous gain(::op3_camera_setting_tool_msgs::msg::CameraParams::_gain_type arg)
  {
    msg_.gain = std::move(arg);
    return Init_CameraParams_focus_automatic_continuous(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_sharpness
{
public:
  explicit Init_CameraParams_sharpness(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_gain sharpness(::op3_camera_setting_tool_msgs::msg::CameraParams::_sharpness_type arg)
  {
    msg_.sharpness = std::move(arg);
    return Init_CameraParams_gain(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_saturation
{
public:
  explicit Init_CameraParams_saturation(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_sharpness saturation(::op3_camera_setting_tool_msgs::msg::CameraParams::_saturation_type arg)
  {
    msg_.saturation = std::move(arg);
    return Init_CameraParams_sharpness(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_contrast
{
public:
  explicit Init_CameraParams_contrast(::op3_camera_setting_tool_msgs::msg::CameraParams & msg)
  : msg_(msg)
  {}
  Init_CameraParams_saturation contrast(::op3_camera_setting_tool_msgs::msg::CameraParams::_contrast_type arg)
  {
    msg_.contrast = std::move(arg);
    return Init_CameraParams_saturation(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

class Init_CameraParams_brightness
{
public:
  Init_CameraParams_brightness()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraParams_contrast brightness(::op3_camera_setting_tool_msgs::msg::CameraParams::_brightness_type arg)
  {
    msg_.brightness = std::move(arg);
    return Init_CameraParams_contrast(msg_);
  }

private:
  ::op3_camera_setting_tool_msgs::msg::CameraParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_camera_setting_tool_msgs::msg::CameraParams>()
{
  return op3_camera_setting_tool_msgs::msg::builder::Init_CameraParams_brightness();
}

}  // namespace op3_camera_setting_tool_msgs

#endif  // OP3_CAMERA_SETTING_TOOL_MSGS__MSG__DETAIL__CAMERA_PARAMS__BUILDER_HPP_
