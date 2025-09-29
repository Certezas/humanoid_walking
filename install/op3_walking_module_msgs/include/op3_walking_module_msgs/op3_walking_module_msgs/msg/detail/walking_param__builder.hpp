// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_
#define OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "op3_walking_module_msgs/msg/detail/walking_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace op3_walking_module_msgs
{

namespace msg
{

namespace builder
{

class Init_WalkingParam_d_gain
{
public:
  explicit Init_WalkingParam_d_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  ::op3_walking_module_msgs::msg::WalkingParam d_gain(::op3_walking_module_msgs::msg::WalkingParam::_d_gain_type arg)
  {
    msg_.d_gain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_i_gain
{
public:
  explicit Init_WalkingParam_i_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_d_gain i_gain(::op3_walking_module_msgs::msg::WalkingParam::_i_gain_type arg)
  {
    msg_.i_gain = std::move(arg);
    return Init_WalkingParam_d_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_p_gain
{
public:
  explicit Init_WalkingParam_p_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_i_gain p_gain(::op3_walking_module_msgs::msg::WalkingParam::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_WalkingParam_i_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_hip_pitch_offset
{
public:
  explicit Init_WalkingParam_hip_pitch_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_p_gain hip_pitch_offset(::op3_walking_module_msgs::msg::WalkingParam::_hip_pitch_offset_type arg)
  {
    msg_.hip_pitch_offset = std::move(arg);
    return Init_WalkingParam_p_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_pelvis_offset
{
public:
  explicit Init_WalkingParam_pelvis_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_hip_pitch_offset pelvis_offset(::op3_walking_module_msgs::msg::WalkingParam::_pelvis_offset_type arg)
  {
    msg_.pelvis_offset = std::move(arg);
    return Init_WalkingParam_hip_pitch_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_arm_swing_gain
{
public:
  explicit Init_WalkingParam_arm_swing_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_pelvis_offset arm_swing_gain(::op3_walking_module_msgs::msg::WalkingParam::_arm_swing_gain_type arg)
  {
    msg_.arm_swing_gain = std::move(arg);
    return Init_WalkingParam_pelvis_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_z_swap_amplitude
{
public:
  explicit Init_WalkingParam_z_swap_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_arm_swing_gain z_swap_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_z_swap_amplitude_type arg)
  {
    msg_.z_swap_amplitude = std::move(arg);
    return Init_WalkingParam_arm_swing_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_y_swap_amplitude
{
public:
  explicit Init_WalkingParam_y_swap_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_z_swap_amplitude y_swap_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_y_swap_amplitude_type arg)
  {
    msg_.y_swap_amplitude = std::move(arg);
    return Init_WalkingParam_z_swap_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_balance_ankle_pitch_gain
{
public:
  explicit Init_WalkingParam_balance_ankle_pitch_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_y_swap_amplitude balance_ankle_pitch_gain(::op3_walking_module_msgs::msg::WalkingParam::_balance_ankle_pitch_gain_type arg)
  {
    msg_.balance_ankle_pitch_gain = std::move(arg);
    return Init_WalkingParam_y_swap_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_balance_ankle_roll_gain
{
public:
  explicit Init_WalkingParam_balance_ankle_roll_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_balance_ankle_pitch_gain balance_ankle_roll_gain(::op3_walking_module_msgs::msg::WalkingParam::_balance_ankle_roll_gain_type arg)
  {
    msg_.balance_ankle_roll_gain = std::move(arg);
    return Init_WalkingParam_balance_ankle_pitch_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_balance_knee_gain
{
public:
  explicit Init_WalkingParam_balance_knee_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_balance_ankle_roll_gain balance_knee_gain(::op3_walking_module_msgs::msg::WalkingParam::_balance_knee_gain_type arg)
  {
    msg_.balance_knee_gain = std::move(arg);
    return Init_WalkingParam_balance_ankle_roll_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_balance_hip_roll_gain
{
public:
  explicit Init_WalkingParam_balance_hip_roll_gain(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_balance_knee_gain balance_hip_roll_gain(::op3_walking_module_msgs::msg::WalkingParam::_balance_hip_roll_gain_type arg)
  {
    msg_.balance_hip_roll_gain = std::move(arg);
    return Init_WalkingParam_balance_knee_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_balance_enable
{
public:
  explicit Init_WalkingParam_balance_enable(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_balance_hip_roll_gain balance_enable(::op3_walking_module_msgs::msg::WalkingParam::_balance_enable_type arg)
  {
    msg_.balance_enable = std::move(arg);
    return Init_WalkingParam_balance_hip_roll_gain(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_move_aim_on
{
public:
  explicit Init_WalkingParam_move_aim_on(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_balance_enable move_aim_on(::op3_walking_module_msgs::msg::WalkingParam::_move_aim_on_type arg)
  {
    msg_.move_aim_on = std::move(arg);
    return Init_WalkingParam_balance_enable(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_angle_move_amplitude
{
public:
  explicit Init_WalkingParam_angle_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_move_aim_on angle_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_angle_move_amplitude_type arg)
  {
    msg_.angle_move_amplitude = std::move(arg);
    return Init_WalkingParam_move_aim_on(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_z_move_amplitude
{
public:
  explicit Init_WalkingParam_z_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_angle_move_amplitude z_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_z_move_amplitude_type arg)
  {
    msg_.z_move_amplitude = std::move(arg);
    return Init_WalkingParam_angle_move_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_y_move_amplitude
{
public:
  explicit Init_WalkingParam_y_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_z_move_amplitude y_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_y_move_amplitude_type arg)
  {
    msg_.y_move_amplitude = std::move(arg);
    return Init_WalkingParam_z_move_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_x_move_amplitude
{
public:
  explicit Init_WalkingParam_x_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_y_move_amplitude x_move_amplitude(::op3_walking_module_msgs::msg::WalkingParam::_x_move_amplitude_type arg)
  {
    msg_.x_move_amplitude = std::move(arg);
    return Init_WalkingParam_y_move_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_step_fb_ratio
{
public:
  explicit Init_WalkingParam_step_fb_ratio(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_x_move_amplitude step_fb_ratio(::op3_walking_module_msgs::msg::WalkingParam::_step_fb_ratio_type arg)
  {
    msg_.step_fb_ratio = std::move(arg);
    return Init_WalkingParam_x_move_amplitude(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_dsp_ratio
{
public:
  explicit Init_WalkingParam_dsp_ratio(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_step_fb_ratio dsp_ratio(::op3_walking_module_msgs::msg::WalkingParam::_dsp_ratio_type arg)
  {
    msg_.dsp_ratio = std::move(arg);
    return Init_WalkingParam_step_fb_ratio(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_period_time
{
public:
  explicit Init_WalkingParam_period_time(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_dsp_ratio period_time(::op3_walking_module_msgs::msg::WalkingParam::_period_time_type arg)
  {
    msg_.period_time = std::move(arg);
    return Init_WalkingParam_dsp_ratio(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_yaw_offset
{
public:
  explicit Init_WalkingParam_init_yaw_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_period_time init_yaw_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_yaw_offset_type arg)
  {
    msg_.init_yaw_offset = std::move(arg);
    return Init_WalkingParam_period_time(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_pitch_offset
{
public:
  explicit Init_WalkingParam_init_pitch_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_init_yaw_offset init_pitch_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_pitch_offset_type arg)
  {
    msg_.init_pitch_offset = std::move(arg);
    return Init_WalkingParam_init_yaw_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_roll_offset
{
public:
  explicit Init_WalkingParam_init_roll_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_init_pitch_offset init_roll_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_roll_offset_type arg)
  {
    msg_.init_roll_offset = std::move(arg);
    return Init_WalkingParam_init_pitch_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_z_offset
{
public:
  explicit Init_WalkingParam_init_z_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_init_roll_offset init_z_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_z_offset_type arg)
  {
    msg_.init_z_offset = std::move(arg);
    return Init_WalkingParam_init_roll_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_y_offset
{
public:
  explicit Init_WalkingParam_init_y_offset(::op3_walking_module_msgs::msg::WalkingParam & msg)
  : msg_(msg)
  {}
  Init_WalkingParam_init_z_offset init_y_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_y_offset_type arg)
  {
    msg_.init_y_offset = std::move(arg);
    return Init_WalkingParam_init_z_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

class Init_WalkingParam_init_x_offset
{
public:
  Init_WalkingParam_init_x_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WalkingParam_init_y_offset init_x_offset(::op3_walking_module_msgs::msg::WalkingParam::_init_x_offset_type arg)
  {
    msg_.init_x_offset = std::move(arg);
    return Init_WalkingParam_init_y_offset(msg_);
  }

private:
  ::op3_walking_module_msgs::msg::WalkingParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::op3_walking_module_msgs::msg::WalkingParam>()
{
  return op3_walking_module_msgs::msg::builder::Init_WalkingParam_init_x_offset();
}

}  // namespace op3_walking_module_msgs

#endif  // OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__BUILDER_HPP_
