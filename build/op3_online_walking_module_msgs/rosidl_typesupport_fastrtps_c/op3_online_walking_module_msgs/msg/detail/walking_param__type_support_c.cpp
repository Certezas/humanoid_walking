// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/walking_param__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "op3_online_walking_module_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.h"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__functions.h"
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


using _WalkingParam__ros_msg_type = op3_online_walking_module_msgs__msg__WalkingParam;

static bool _WalkingParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WalkingParam__ros_msg_type * ros_message = static_cast<const _WalkingParam__ros_msg_type *>(untyped_ros_message);
  // Field name: dsp_ratio
  {
    cdr << ros_message->dsp_ratio;
  }

  // Field name: lipm_height
  {
    cdr << ros_message->lipm_height;
  }

  // Field name: foot_height_max
  {
    cdr << ros_message->foot_height_max;
  }

  // Field name: zmp_offset_x
  {
    cdr << ros_message->zmp_offset_x;
  }

  // Field name: zmp_offset_y
  {
    cdr << ros_message->zmp_offset_y;
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
  // Field name: dsp_ratio
  {
    cdr >> ros_message->dsp_ratio;
  }

  // Field name: lipm_height
  {
    cdr >> ros_message->lipm_height;
  }

  // Field name: foot_height_max
  {
    cdr >> ros_message->foot_height_max;
  }

  // Field name: zmp_offset_x
  {
    cdr >> ros_message->zmp_offset_x;
  }

  // Field name: zmp_offset_y
  {
    cdr >> ros_message->zmp_offset_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t get_serialized_size_op3_online_walking_module_msgs__msg__WalkingParam(
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

  // field.name dsp_ratio
  {
    size_t item_size = sizeof(ros_message->dsp_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lipm_height
  {
    size_t item_size = sizeof(ros_message->lipm_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_height_max
  {
    size_t item_size = sizeof(ros_message->foot_height_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zmp_offset_x
  {
    size_t item_size = sizeof(ros_message->zmp_offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name zmp_offset_y
  {
    size_t item_size = sizeof(ros_message->zmp_offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WalkingParam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_op3_online_walking_module_msgs__msg__WalkingParam(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_online_walking_module_msgs
size_t max_serialized_size_op3_online_walking_module_msgs__msg__WalkingParam(
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

  // member: dsp_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lipm_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: foot_height_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zmp_offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: zmp_offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_online_walking_module_msgs__msg__WalkingParam;
    is_plain =
      (
      offsetof(DataType, zmp_offset_y) +
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

  ret_val = max_serialized_size_op3_online_walking_module_msgs__msg__WalkingParam(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WalkingParam = {
  "op3_online_walking_module_msgs::msg",
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_online_walking_module_msgs, msg, WalkingParam)() {
  return &_WalkingParam__type_support;
}

#if defined(__cplusplus)
}
#endif
