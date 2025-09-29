// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_walking_module_msgs/msg/detail/walking_param__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace op3_walking_module_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_walking_module_msgs
cdr_serialize(
  const op3_walking_module_msgs::msg::WalkingParam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: init_x_offset
  cdr << ros_message.init_x_offset;
  // Member: init_y_offset
  cdr << ros_message.init_y_offset;
  // Member: init_z_offset
  cdr << ros_message.init_z_offset;
  // Member: init_roll_offset
  cdr << ros_message.init_roll_offset;
  // Member: init_pitch_offset
  cdr << ros_message.init_pitch_offset;
  // Member: init_yaw_offset
  cdr << ros_message.init_yaw_offset;
  // Member: period_time
  cdr << ros_message.period_time;
  // Member: dsp_ratio
  cdr << ros_message.dsp_ratio;
  // Member: step_fb_ratio
  cdr << ros_message.step_fb_ratio;
  // Member: x_move_amplitude
  cdr << ros_message.x_move_amplitude;
  // Member: y_move_amplitude
  cdr << ros_message.y_move_amplitude;
  // Member: z_move_amplitude
  cdr << ros_message.z_move_amplitude;
  // Member: angle_move_amplitude
  cdr << ros_message.angle_move_amplitude;
  // Member: move_aim_on
  cdr << (ros_message.move_aim_on ? true : false);
  // Member: balance_enable
  cdr << (ros_message.balance_enable ? true : false);
  // Member: balance_hip_roll_gain
  cdr << ros_message.balance_hip_roll_gain;
  // Member: balance_knee_gain
  cdr << ros_message.balance_knee_gain;
  // Member: balance_ankle_roll_gain
  cdr << ros_message.balance_ankle_roll_gain;
  // Member: balance_ankle_pitch_gain
  cdr << ros_message.balance_ankle_pitch_gain;
  // Member: y_swap_amplitude
  cdr << ros_message.y_swap_amplitude;
  // Member: z_swap_amplitude
  cdr << ros_message.z_swap_amplitude;
  // Member: arm_swing_gain
  cdr << ros_message.arm_swing_gain;
  // Member: pelvis_offset
  cdr << ros_message.pelvis_offset;
  // Member: hip_pitch_offset
  cdr << ros_message.hip_pitch_offset;
  // Member: p_gain
  cdr << ros_message.p_gain;
  // Member: i_gain
  cdr << ros_message.i_gain;
  // Member: d_gain
  cdr << ros_message.d_gain;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_walking_module_msgs::msg::WalkingParam & ros_message)
{
  // Member: init_x_offset
  cdr >> ros_message.init_x_offset;

  // Member: init_y_offset
  cdr >> ros_message.init_y_offset;

  // Member: init_z_offset
  cdr >> ros_message.init_z_offset;

  // Member: init_roll_offset
  cdr >> ros_message.init_roll_offset;

  // Member: init_pitch_offset
  cdr >> ros_message.init_pitch_offset;

  // Member: init_yaw_offset
  cdr >> ros_message.init_yaw_offset;

  // Member: period_time
  cdr >> ros_message.period_time;

  // Member: dsp_ratio
  cdr >> ros_message.dsp_ratio;

  // Member: step_fb_ratio
  cdr >> ros_message.step_fb_ratio;

  // Member: x_move_amplitude
  cdr >> ros_message.x_move_amplitude;

  // Member: y_move_amplitude
  cdr >> ros_message.y_move_amplitude;

  // Member: z_move_amplitude
  cdr >> ros_message.z_move_amplitude;

  // Member: angle_move_amplitude
  cdr >> ros_message.angle_move_amplitude;

  // Member: move_aim_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.move_aim_on = tmp ? true : false;
  }

  // Member: balance_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.balance_enable = tmp ? true : false;
  }

  // Member: balance_hip_roll_gain
  cdr >> ros_message.balance_hip_roll_gain;

  // Member: balance_knee_gain
  cdr >> ros_message.balance_knee_gain;

  // Member: balance_ankle_roll_gain
  cdr >> ros_message.balance_ankle_roll_gain;

  // Member: balance_ankle_pitch_gain
  cdr >> ros_message.balance_ankle_pitch_gain;

  // Member: y_swap_amplitude
  cdr >> ros_message.y_swap_amplitude;

  // Member: z_swap_amplitude
  cdr >> ros_message.z_swap_amplitude;

  // Member: arm_swing_gain
  cdr >> ros_message.arm_swing_gain;

  // Member: pelvis_offset
  cdr >> ros_message.pelvis_offset;

  // Member: hip_pitch_offset
  cdr >> ros_message.hip_pitch_offset;

  // Member: p_gain
  cdr >> ros_message.p_gain;

  // Member: i_gain
  cdr >> ros_message.i_gain;

  // Member: d_gain
  cdr >> ros_message.d_gain;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_walking_module_msgs
get_serialized_size(
  const op3_walking_module_msgs::msg::WalkingParam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: init_x_offset
  {
    size_t item_size = sizeof(ros_message.init_x_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_y_offset
  {
    size_t item_size = sizeof(ros_message.init_y_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_z_offset
  {
    size_t item_size = sizeof(ros_message.init_z_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_roll_offset
  {
    size_t item_size = sizeof(ros_message.init_roll_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_pitch_offset
  {
    size_t item_size = sizeof(ros_message.init_pitch_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: init_yaw_offset
  {
    size_t item_size = sizeof(ros_message.init_yaw_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period_time
  {
    size_t item_size = sizeof(ros_message.period_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_ratio
  {
    size_t item_size = sizeof(ros_message.dsp_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_fb_ratio
  {
    size_t item_size = sizeof(ros_message.step_fb_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_move_amplitude
  {
    size_t item_size = sizeof(ros_message.x_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_move_amplitude
  {
    size_t item_size = sizeof(ros_message.y_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_move_amplitude
  {
    size_t item_size = sizeof(ros_message.z_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_move_amplitude
  {
    size_t item_size = sizeof(ros_message.angle_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move_aim_on
  {
    size_t item_size = sizeof(ros_message.move_aim_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_enable
  {
    size_t item_size = sizeof(ros_message.balance_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_hip_roll_gain
  {
    size_t item_size = sizeof(ros_message.balance_hip_roll_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_knee_gain
  {
    size_t item_size = sizeof(ros_message.balance_knee_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_ankle_roll_gain
  {
    size_t item_size = sizeof(ros_message.balance_ankle_roll_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balance_ankle_pitch_gain
  {
    size_t item_size = sizeof(ros_message.balance_ankle_pitch_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_swap_amplitude
  {
    size_t item_size = sizeof(ros_message.y_swap_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_swap_amplitude
  {
    size_t item_size = sizeof(ros_message.z_swap_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_swing_gain
  {
    size_t item_size = sizeof(ros_message.arm_swing_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pelvis_offset
  {
    size_t item_size = sizeof(ros_message.pelvis_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hip_pitch_offset
  {
    size_t item_size = sizeof(ros_message.hip_pitch_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_gain
  {
    size_t item_size = sizeof(ros_message.p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i_gain
  {
    size_t item_size = sizeof(ros_message.i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_gain
  {
    size_t item_size = sizeof(ros_message.d_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_walking_module_msgs
max_serialized_size_WalkingParam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: init_x_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: init_y_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: init_z_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: init_roll_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: init_pitch_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: init_yaw_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: period_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dsp_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: step_fb_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: move_aim_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: balance_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: balance_hip_roll_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: balance_knee_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: balance_ankle_roll_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: balance_ankle_pitch_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_swap_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_swap_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: arm_swing_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pelvis_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hip_pitch_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: i_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_walking_module_msgs::msg::WalkingParam;
    is_plain =
      (
      offsetof(DataType, d_gain) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WalkingParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_walking_module_msgs::msg::WalkingParam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WalkingParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_walking_module_msgs::msg::WalkingParam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WalkingParam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_walking_module_msgs::msg::WalkingParam *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WalkingParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WalkingParam(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WalkingParam__callbacks = {
  "op3_walking_module_msgs::msg",
  "WalkingParam",
  _WalkingParam__cdr_serialize,
  _WalkingParam__cdr_deserialize,
  _WalkingParam__get_serialized_size,
  _WalkingParam__max_serialized_size
};

static rosidl_message_type_support_t _WalkingParam__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WalkingParam__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace op3_walking_module_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_walking_module_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_walking_module_msgs::msg::WalkingParam>()
{
  return &op3_walking_module_msgs::msg::typesupport_fastrtps_cpp::_WalkingParam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_walking_module_msgs, msg, WalkingParam)() {
  return &op3_walking_module_msgs::msg::typesupport_fastrtps_cpp::_WalkingParam__handle;
}

#ifdef __cplusplus
}
#endif
