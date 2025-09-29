// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_
#define OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "op3_walking_module_msgs/msg/detail/walking_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace op3_walking_module_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WalkingParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: init_x_offset
  {
    out << "init_x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_x_offset, out);
    out << ", ";
  }

  // member: init_y_offset
  {
    out << "init_y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_y_offset, out);
    out << ", ";
  }

  // member: init_z_offset
  {
    out << "init_z_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_z_offset, out);
    out << ", ";
  }

  // member: init_roll_offset
  {
    out << "init_roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_roll_offset, out);
    out << ", ";
  }

  // member: init_pitch_offset
  {
    out << "init_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_pitch_offset, out);
    out << ", ";
  }

  // member: init_yaw_offset
  {
    out << "init_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_yaw_offset, out);
    out << ", ";
  }

  // member: period_time
  {
    out << "period_time: ";
    rosidl_generator_traits::value_to_yaml(msg.period_time, out);
    out << ", ";
  }

  // member: dsp_ratio
  {
    out << "dsp_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ratio, out);
    out << ", ";
  }

  // member: step_fb_ratio
  {
    out << "step_fb_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.step_fb_ratio, out);
    out << ", ";
  }

  // member: x_move_amplitude
  {
    out << "x_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.x_move_amplitude, out);
    out << ", ";
  }

  // member: y_move_amplitude
  {
    out << "y_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.y_move_amplitude, out);
    out << ", ";
  }

  // member: z_move_amplitude
  {
    out << "z_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.z_move_amplitude, out);
    out << ", ";
  }

  // member: angle_move_amplitude
  {
    out << "angle_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_move_amplitude, out);
    out << ", ";
  }

  // member: move_aim_on
  {
    out << "move_aim_on: ";
    rosidl_generator_traits::value_to_yaml(msg.move_aim_on, out);
    out << ", ";
  }

  // member: balance_enable
  {
    out << "balance_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_enable, out);
    out << ", ";
  }

  // member: balance_hip_roll_gain
  {
    out << "balance_hip_roll_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_hip_roll_gain, out);
    out << ", ";
  }

  // member: balance_knee_gain
  {
    out << "balance_knee_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_knee_gain, out);
    out << ", ";
  }

  // member: balance_ankle_roll_gain
  {
    out << "balance_ankle_roll_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ankle_roll_gain, out);
    out << ", ";
  }

  // member: balance_ankle_pitch_gain
  {
    out << "balance_ankle_pitch_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ankle_pitch_gain, out);
    out << ", ";
  }

  // member: y_swap_amplitude
  {
    out << "y_swap_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swap_amplitude, out);
    out << ", ";
  }

  // member: z_swap_amplitude
  {
    out << "z_swap_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.z_swap_amplitude, out);
    out << ", ";
  }

  // member: arm_swing_gain
  {
    out << "arm_swing_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_swing_gain, out);
    out << ", ";
  }

  // member: pelvis_offset
  {
    out << "pelvis_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pelvis_offset, out);
    out << ", ";
  }

  // member: hip_pitch_offset
  {
    out << "hip_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.hip_pitch_offset, out);
    out << ", ";
  }

  // member: p_gain
  {
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << ", ";
  }

  // member: i_gain
  {
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << ", ";
  }

  // member: d_gain
  {
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WalkingParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: init_x_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_x_offset, out);
    out << "\n";
  }

  // member: init_y_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_y_offset, out);
    out << "\n";
  }

  // member: init_z_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_z_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_z_offset, out);
    out << "\n";
  }

  // member: init_roll_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_roll_offset, out);
    out << "\n";
  }

  // member: init_pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_pitch_offset, out);
    out << "\n";
  }

  // member: init_yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.init_yaw_offset, out);
    out << "\n";
  }

  // member: period_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_time: ";
    rosidl_generator_traits::value_to_yaml(msg.period_time, out);
    out << "\n";
  }

  // member: dsp_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.dsp_ratio, out);
    out << "\n";
  }

  // member: step_fb_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_fb_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.step_fb_ratio, out);
    out << "\n";
  }

  // member: x_move_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.x_move_amplitude, out);
    out << "\n";
  }

  // member: y_move_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.y_move_amplitude, out);
    out << "\n";
  }

  // member: z_move_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.z_move_amplitude, out);
    out << "\n";
  }

  // member: angle_move_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_move_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_move_amplitude, out);
    out << "\n";
  }

  // member: move_aim_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_aim_on: ";
    rosidl_generator_traits::value_to_yaml(msg.move_aim_on, out);
    out << "\n";
  }

  // member: balance_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_enable, out);
    out << "\n";
  }

  // member: balance_hip_roll_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_hip_roll_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_hip_roll_gain, out);
    out << "\n";
  }

  // member: balance_knee_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_knee_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_knee_gain, out);
    out << "\n";
  }

  // member: balance_ankle_roll_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_ankle_roll_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ankle_roll_gain, out);
    out << "\n";
  }

  // member: balance_ankle_pitch_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "balance_ankle_pitch_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.balance_ankle_pitch_gain, out);
    out << "\n";
  }

  // member: y_swap_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_swap_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.y_swap_amplitude, out);
    out << "\n";
  }

  // member: z_swap_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_swap_amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.z_swap_amplitude, out);
    out << "\n";
  }

  // member: arm_swing_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_swing_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_swing_gain, out);
    out << "\n";
  }

  // member: pelvis_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pelvis_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pelvis_offset, out);
    out << "\n";
  }

  // member: hip_pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hip_pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.hip_pitch_offset, out);
    out << "\n";
  }

  // member: p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << "\n";
  }

  // member: i_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.i_gain, out);
    out << "\n";
  }

  // member: d_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.d_gain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WalkingParam & msg, bool use_flow_style = false)
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

}  // namespace op3_walking_module_msgs

namespace rosidl_generator_traits
{

[[deprecated("use op3_walking_module_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const op3_walking_module_msgs::msg::WalkingParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  op3_walking_module_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use op3_walking_module_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const op3_walking_module_msgs::msg::WalkingParam & msg)
{
  return op3_walking_module_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<op3_walking_module_msgs::msg::WalkingParam>()
{
  return "op3_walking_module_msgs::msg::WalkingParam";
}

template<>
inline const char * name<op3_walking_module_msgs::msg::WalkingParam>()
{
  return "op3_walking_module_msgs/msg/WalkingParam";
}

template<>
struct has_fixed_size<op3_walking_module_msgs::msg::WalkingParam>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<op3_walking_module_msgs::msg::WalkingParam>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<op3_walking_module_msgs::msg::WalkingParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OP3_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__TRAITS_HPP_
