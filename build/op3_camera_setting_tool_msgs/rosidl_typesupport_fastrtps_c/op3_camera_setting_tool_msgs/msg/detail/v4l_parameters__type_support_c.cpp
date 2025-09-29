// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from op3_camera_setting_tool_msgs:msg/V4lParameters.idl
// generated code does not contain a copyright notice
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "op3_camera_setting_tool_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__struct.h"
#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameters__functions.h"
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

#include "op3_camera_setting_tool_msgs/msg/detail/v4l_parameter__functions.h"  // video_parameter

// forward declare type support functions
size_t get_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameter(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_camera_setting_tool_msgs, msg, V4lParameter)();


using _V4lParameters__ros_msg_type = op3_camera_setting_tool_msgs__msg__V4lParameters;

static bool _V4lParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _V4lParameters__ros_msg_type * ros_message = static_cast<const _V4lParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: video_parameter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, op3_camera_setting_tool_msgs, msg, V4lParameter
      )()->data);
    size_t size = ros_message->video_parameter.size;
    auto array_ptr = ros_message->video_parameter.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _V4lParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _V4lParameters__ros_msg_type * ros_message = static_cast<_V4lParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: video_parameter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, op3_camera_setting_tool_msgs, msg, V4lParameter
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->video_parameter.data) {
      op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__fini(&ros_message->video_parameter);
    }
    if (!op3_camera_setting_tool_msgs__msg__V4lParameter__Sequence__init(&ros_message->video_parameter, size)) {
      fprintf(stderr, "failed to create array for field 'video_parameter'");
      return false;
    }
    auto array_ptr = ros_message->video_parameter.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_camera_setting_tool_msgs
size_t get_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _V4lParameters__ros_msg_type * ros_message = static_cast<const _V4lParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name video_parameter
  {
    size_t array_size = ros_message->video_parameter.size;
    auto array_ptr = ros_message->video_parameter.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameter(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _V4lParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_op3_camera_setting_tool_msgs
size_t max_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameters(
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

  // member: video_parameter
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_camera_setting_tool_msgs__msg__V4lParameters;
    is_plain =
      (
      offsetof(DataType, video_parameter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _V4lParameters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_op3_camera_setting_tool_msgs__msg__V4lParameters(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_V4lParameters = {
  "op3_camera_setting_tool_msgs::msg",
  "V4lParameters",
  _V4lParameters__cdr_serialize,
  _V4lParameters__cdr_deserialize,
  _V4lParameters__get_serialized_size,
  _V4lParameters__max_serialized_size
};

static rosidl_message_type_support_t _V4lParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_V4lParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, op3_camera_setting_tool_msgs, msg, V4lParameters)() {
  return &_V4lParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
