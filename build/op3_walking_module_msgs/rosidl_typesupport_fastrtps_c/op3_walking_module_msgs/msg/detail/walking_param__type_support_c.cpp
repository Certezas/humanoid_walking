// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_walking_module_msgs/msg/detail/walking_param__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "op3_walking_module_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.h"
#include "op3_walking_module_msgs/msg/detail/walking_param__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _WalkingParam__ros_msg_type = op3_walking_module_msgs__msg__WalkingParam;

static bool _WalkingParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WalkingParam__ros_msg_type * ros_message = static_cast<const _WalkingParam__ros_msg_type *>(untyped_ros_message);
  // Field name: init_x_offset
  {
    cdr << ros_message->init_x_offset;
  }

  // Field name: init_y_offset
  {
    cdr << ros_message->init_y_offset;
  }

  // Field name: init_z_offset
  {
    cdr << ros_message->init_z_offset;
  }

  // Field name: init_roll_offset
  {
    cdr << ros_message->init_roll_offset;
  }

  // Field name: init_pitch_offset
  {
    cdr << ros_message->init_pitch_offset;
  }

  // Field name: init_yaw_offset
  {
    cdr << ros_message->init_yaw_offset;
  }

  // Field name: period_time
  {
    cdr << ros_message->period_time;
  }

  // Field name: dsp_ratio
  {
    cdr << ros_message->dsp_ratio;
  }

  // Field name: step_fb_ratio
  {
    cdr << ros_message->step_fb_ratio;
  }

  // Field name: x_move_amplitude
  {
    cdr << ros_message->x_move_amplitude;
  }

  // Field name: y_move_amplitude
  {
    cdr << ros_message->y_move_amplitude;
  }

  // Field name: z_move_amplitude
  {
    cdr << ros_message->z_move_amplitude;
  }

  // Field name: angle_move_amplitude
  {
    cdr << ros_message->angle_move_amplitude;
  }

  // Field name: move_aim_on
  {
    cdr << (ros_message->move_aim_on ? true : false);
  }

  // Field name: balance_enable
  {
    cdr << (ros_message->balance_enable ? true : false);
  }

  // Field name: balance_hip_roll_gain
  {
    cdr << ros_message->balance_hip_roll_gain;
  }

  // Field name: balance_knee_gain
  {
    cdr << ros_message->balance_knee_gain;
  }

  // Field name: balance_ankle_roll_gain
  {
    cdr << ros_message->balance_ankle_roll_gain;
  }

  // Field name: balance_ankle_pitch_gain
  {
    cdr << ros_message->balance_ankle_pitch_gain;
  }

  // Field name: y_swap_amplitude
  {
    cdr << ros_message->y_swap_amplitude;
  }

  // Field name: z_swap_amplitude
  {
    cdr << ros_message->z_swap_amplitude;
  }

  // Field name: arm_swing_gain
  {
    cdr << ros_message->arm_swing_gain;
  }

  // Field name: pelvis_offset
  {
    cdr << ros_message->pelvis_offset;
  }

  // Field name: hip_pitch_offset
  {
    cdr << ros_message->hip_pitch_offset;
  }

  // Field name: p_gain
  {
    cdr << ros_message->p_gain;
  }

  // Field name: i_gain
  {
    cdr << ros_message->i_gain;
  }

  // Field name: d_gain
  {
    cdr << ros_message->d_gain;
  }

  return true;
}

static bool _WalkingParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WalkingParam__ros_msg_type * ros_message = static_cast<_WalkingParam__ros_msg_type *>(untyped_ros_message);
  // Field name: init_x_offset
  {
    cdr >> ros_message->init_x_offset;
  }

  // Field name: init_y_offset
  {
    cdr >> ros_message->init_y_offset;
  }

  // Field name: init_z_offset
  {
    cdr >> ros_message->init_z_offset;
  }

  // Field name: init_roll_offset
  {
    cdr >> ros_message->init_roll_offset;
  }

  // Field name: init_pitch_offset
  {
    cdr >> ros_message->init_pitch_offset;
  }

  // Field name: init_yaw_offset
  {
    cdr >> ros_message->init_yaw_offset;
  }

  // Field name: period_time
  {
    cdr >> ros_message->period_time;
  }

  // Field name: dsp_ratio
  {
    cdr >> ros_message->dsp_ratio;
  }

  // Field name: step_fb_ratio
  {
    cdr >> ros_message->step_fb_ratio;
  }

  // Field name: x_move_amplitude
  {
    cdr >> ros_message->x_move_amplitude;
  }

  // Field name: y_move_amplitude
  {
    cdr >> ros_message->y_move_amplitude;
  }

  // Field name: z_move_amplitude
  {
    cdr >> ros_message->z_move_amplitude;
  }

  // Field name: angle_move_amplitude
  {
    cdr >> ros_message->angle_move_amplitude;
  }

  // Field name: move_aim_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->move_aim_on = tmp ? true : false;
  }

  // Field name: balance_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->balance_enable = tmp ? true : false;
  }

  // Field name: balance_hip_roll_gain
  {
    cdr >> ros_message->balance_hip_roll_gain;
  }

  // Field name: balance_knee_gain
  {
    cdr >> ros_message->balance_knee_gain;
  }

  // Field name: balance_ankle_roll_gain
  {
    cdr >> ros_message->balance_ankle_roll_gain;
  }

  // Field name: balance_ankle_pitch_gain
  {
    cdr >> ros_message->balance_ankle_pitch_gain;
  }

  // Field name: y_swap_amplitude
  {
    cdr >> ros_message->y_swap_amplitude;
  }

  // Field name: z_swap_amplitude
  {
    cdr >> ros_message->z_swap_amplitude;
  }

  // Field name: arm_swing_gain
  {
    cdr >> ros_message->arm_swing_gain;
  }

  // Field name: pelvis_offset
  {
    cdr >> ros_message->pelvis_offset;
  }

  // Field name: hip_pitch_offset
  {
    cdr >> ros_message->hip_pitch_offset;
  }

  // Field name: p_gain
  {
    cdr >> ros_message->p_gain;
  }

  // Field name: i_gain
  {
    cdr >> ros_message->i_gain;
  }

  // Field name: d_gain
  {
    cdr >> ros_message->d_gain;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_walking_module_msgs
size_t get_serialized_size_op3_walking_module_msgs__msg__WalkingParam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WalkingParam__ros_msg_type * ros_message = static_cast<const _WalkingParam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name init_x_offset
  {
    size_t item_size = sizeof(ros_message->init_x_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_y_offset
  {
    size_t item_size = sizeof(ros_message->init_y_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_z_offset
  {
    size_t item_size = sizeof(ros_message->init_z_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_roll_offset
  {
    size_t item_size = sizeof(ros_message->init_roll_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_pitch_offset
  {
    size_t item_size = sizeof(ros_message->init_pitch_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name init_yaw_offset
  {
    size_t item_size = sizeof(ros_message->init_yaw_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period_time
  {
    size_t item_size = sizeof(ros_message->period_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_ratio
  {
    size_t item_size = sizeof(ros_message->dsp_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name step_fb_ratio
  {
    size_t item_size = sizeof(ros_message->step_fb_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_move_amplitude
  {
    size_t item_size = sizeof(ros_message->x_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_move_amplitude
  {
    size_t item_size = sizeof(ros_message->y_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_move_amplitude
  {
    size_t item_size = sizeof(ros_message->z_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_move_amplitude
  {
    size_t item_size = sizeof(ros_message->angle_move_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name move_aim_on
  {
    size_t item_size = sizeof(ros_message->move_aim_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_enable
  {
    size_t item_size = sizeof(ros_message->balance_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_hip_roll_gain
  {
    size_t item_size = sizeof(ros_message->balance_hip_roll_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_knee_gain
  {
    size_t item_size = sizeof(ros_message->balance_knee_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_ankle_roll_gain
  {
    size_t item_size = sizeof(ros_message->balance_ankle_roll_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balance_ankle_pitch_gain
  {
    size_t item_size = sizeof(ros_message->balance_ankle_pitch_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_swap_amplitude
  {
    size_t item_size = sizeof(ros_message->y_swap_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_swap_amplitude
  {
    size_t item_size = sizeof(ros_message->z_swap_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_swing_gain
  {
    size_t item_size = sizeof(ros_message->arm_swing_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pelvis_offset
  {
    size_t item_size = sizeof(ros_message->pelvis_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hip_pitch_offset
  {
    size_t item_size = sizeof(ros_message->hip_pitch_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_gain
  {
    size_t item_size = sizeof(ros_message->p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i_gain
  {
    size_t item_size = sizeof(ros_message->i_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_gain
  {
    size_t item_size = sizeof(ros_message->d_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WalkingParam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_op3_walking_module_msgs__msg__WalkingParam(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_walking_module_msgs
size_t max_serialized_size_op3_walking_module_msgs__msg__WalkingParam(
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

  // member: init_x_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_y_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_z_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_roll_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_pitch_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: init_yaw_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: period_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dsp_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: step_fb_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_move_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: move_aim_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: balance_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: balance_hip_roll_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: balance_knee_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: balance_ankle_roll_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: balance_ankle_pitch_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_swap_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_swap_amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: arm_swing_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pelvis_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hip_pitch_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: i_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_gain
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
    using DataType = op3_walking_module_msgs__msg__WalkingParam;
    is_plain =
      (
      offsetof(DataType, d_gain) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WalkingParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_op3_walking_module_msgs__msg__WalkingParam(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WalkingParam = {
  "op3_walking_module_msgs::msg",
  "WalkingParam",
  _WalkingParam__cdr_serialize,
  _WalkingParam__cdr_deserialize,
  _WalkingParam__get_serialized_size,
  _WalkingParam__max_serialized_size
};

static rosidl_message_type_support_t _WalkingParam__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WalkingParam,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_walking_module_msgs, msg, WalkingParam)() {
  return &_WalkingParam__type_support;
}

#if defined(__cplusplus)
}
#endif
