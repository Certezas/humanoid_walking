// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/walking_param__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.hpp"

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

namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_serialize(
  const op3_online_walking_module_msgs::msg::WalkingParam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dsp_ratio
  cdr << ros_message.dsp_ratio;
  // Member: lipm_height
  cdr << ros_message.lipm_height;
  // Member: foot_height_max
  cdr << ros_message.foot_height_max;
  // Member: zmp_offset_x
  cdr << ros_message.zmp_offset_x;
  // Member: zmp_offset_y
  cdr << ros_message.zmp_offset_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::msg::WalkingParam & ros_message)
{
  // Member: dsp_ratio
  cdr >> ros_message.dsp_ratio;

  // Member: lipm_height
  cdr >> ros_message.lipm_height;

  // Member: foot_height_max
  cdr >> ros_message.foot_height_max;

  // Member: zmp_offset_x
  cdr >> ros_message.zmp_offset_x;

  // Member: zmp_offset_y
  cdr >> ros_message.zmp_offset_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::msg::WalkingParam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dsp_ratio
  {
    size_t item_size = sizeof(ros_message.dsp_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lipm_height
  {
    size_t item_size = sizeof(ros_message.lipm_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_height_max
  {
    size_t item_size = sizeof(ros_message.foot_height_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zmp_offset_x
  {
    size_t item_size = sizeof(ros_message.zmp_offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: zmp_offset_y
  {
    size_t item_size = sizeof(ros_message.zmp_offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
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


  // Member: dsp_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lipm_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: foot_height_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zmp_offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: zmp_offset_y
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
    using DataType = op3_online_walking_module_msgs::msg::WalkingParam;
    is_plain =
      (
      offsetof(DataType, zmp_offset_y) +
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
    static_cast<const op3_online_walking_module_msgs::msg::WalkingParam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WalkingParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::msg::WalkingParam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WalkingParam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::WalkingParam *>(
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
  "op3_online_walking_module_msgs::msg",
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

}  // namespace op3_online_walking_module_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_online_walking_module_msgs::msg::WalkingParam>()
{
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_WalkingParam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, msg, WalkingParam)() {
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_WalkingParam__handle;
}

#ifdef __cplusplus
}
#endif
