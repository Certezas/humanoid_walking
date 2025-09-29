// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
// generated code does not contain a copyright notice
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.hpp"

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

namespace op3_camera_setting_tool_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_camera_setting_tool_msgs
cdr_serialize(
  const op3_camera_setting_tool_msgs::msg::CameraParams & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: brightness
  cdr << ros_message.brightness;
  // Member: contrast
  cdr << ros_message.contrast;
  // Member: saturation
  cdr << ros_message.saturation;
  // Member: sharpness
  cdr << ros_message.sharpness;
  // Member: gain
  cdr << ros_message.gain;
  // Member: focus_automatic_continuous
  cdr << (ros_message.focus_automatic_continuous ? true : false);
  // Member: focus_absolute
  cdr << ros_message.focus_absolute;
  // Member: auto_exposure
  cdr << ros_message.auto_exposure;
  // Member: exposure_time_absolute
  cdr << ros_message.exposure_time_absolute;
  // Member: white_balance_automatic
  cdr << (ros_message.white_balance_automatic ? true : false);
  // Member: white_balance_temperature
  cdr << ros_message.white_balance_temperature;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_camera_setting_tool_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_camera_setting_tool_msgs::msg::CameraParams & ros_message)
{
  // Member: brightness
  cdr >> ros_message.brightness;

  // Member: contrast
  cdr >> ros_message.contrast;

  // Member: saturation
  cdr >> ros_message.saturation;

  // Member: sharpness
  cdr >> ros_message.sharpness;

  // Member: gain
  cdr >> ros_message.gain;

  // Member: focus_automatic_continuous
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.focus_automatic_continuous = tmp ? true : false;
  }

  // Member: focus_absolute
  cdr >> ros_message.focus_absolute;

  // Member: auto_exposure
  cdr >> ros_message.auto_exposure;

  // Member: exposure_time_absolute
  cdr >> ros_message.exposure_time_absolute;

  // Member: white_balance_automatic
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.white_balance_automatic = tmp ? true : false;
  }

  // Member: white_balance_temperature
  cdr >> ros_message.white_balance_temperature;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_camera_setting_tool_msgs
get_serialized_size(
  const op3_camera_setting_tool_msgs::msg::CameraParams & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: brightness
  {
    size_t item_size = sizeof(ros_message.brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contrast
  {
    size_t item_size = sizeof(ros_message.contrast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: saturation
  {
    size_t item_size = sizeof(ros_message.saturation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sharpness
  {
    size_t item_size = sizeof(ros_message.sharpness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain
  {
    size_t item_size = sizeof(ros_message.gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: focus_automatic_continuous
  {
    size_t item_size = sizeof(ros_message.focus_automatic_continuous);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: focus_absolute
  {
    size_t item_size = sizeof(ros_message.focus_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_exposure
  {
    size_t item_size = sizeof(ros_message.auto_exposure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exposure_time_absolute
  {
    size_t item_size = sizeof(ros_message.exposure_time_absolute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: white_balance_automatic
  {
    size_t item_size = sizeof(ros_message.white_balance_automatic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: white_balance_temperature
  {
    size_t item_size = sizeof(ros_message.white_balance_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_camera_setting_tool_msgs
max_serialized_size_CameraParams(
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


  // Member: brightness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contrast
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: saturation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sharpness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: focus_automatic_continuous
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: focus_absolute
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: auto_exposure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exposure_time_absolute
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: white_balance_automatic
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: white_balance_temperature
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
    using DataType = op3_camera_setting_tool_msgs::msg::CameraParams;
    is_plain =
      (
      offsetof(DataType, white_balance_temperature) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CameraParams__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_camera_setting_tool_msgs::msg::CameraParams *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraParams__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_camera_setting_tool_msgs::msg::CameraParams *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraParams__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_camera_setting_tool_msgs::msg::CameraParams *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraParams__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CameraParams(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CameraParams__callbacks = {
  "op3_camera_setting_tool_msgs::msg",
  "CameraParams",
  _CameraParams__cdr_serialize,
  _CameraParams__cdr_deserialize,
  _CameraParams__get_serialized_size,
  _CameraParams__max_serialized_size
};

static rosidl_message_type_support_t _CameraParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CameraParams__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace op3_camera_setting_tool_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_camera_setting_tool_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_camera_setting_tool_msgs::msg::CameraParams>()
{
  return &op3_camera_setting_tool_msgs::msg::typesupport_fastrtps_cpp::_CameraParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_camera_setting_tool_msgs, msg, CameraParams)() {
  return &op3_camera_setting_tool_msgs::msg::typesupport_fastrtps_cpp::_CameraParams__handle;
}

#ifdef __cplusplus
}
#endif
