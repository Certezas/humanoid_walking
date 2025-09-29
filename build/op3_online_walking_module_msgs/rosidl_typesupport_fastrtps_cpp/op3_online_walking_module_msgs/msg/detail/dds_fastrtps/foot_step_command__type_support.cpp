// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__struct.hpp"

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
  const op3_online_walking_module_msgs::msg::FootStepCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  // Member: start_leg
  cdr << ros_message.start_leg;
  // Member: step_num
  cdr << ros_message.step_num;
  // Member: step_time
  cdr << ros_message.step_time;
  // Member: step_length
  cdr << ros_message.step_length;
  // Member: side_length
  cdr << ros_message.side_length;
  // Member: step_angle
  cdr << ros_message.step_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::msg::FootStepCommand & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: start_leg
  cdr >> ros_message.start_leg;

  // Member: step_num
  cdr >> ros_message.step_num;

  // Member: step_time
  cdr >> ros_message.step_time;

  // Member: step_length
  cdr >> ros_message.step_length;

  // Member: side_length
  cdr >> ros_message.side_length;

  // Member: step_angle
  cdr >> ros_message.step_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::msg::FootStepCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);
  // Member: start_leg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.start_leg.size() + 1);
  // Member: step_num
  {
    size_t item_size = sizeof(ros_message.step_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_time
  {
    size_t item_size = sizeof(ros_message.step_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_length
  {
    size_t item_size = sizeof(ros_message.step_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: side_length
  {
    size_t item_size = sizeof(ros_message.side_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: step_angle
  {
    size_t item_size = sizeof(ros_message.step_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
max_serialized_size_FootStepCommand(
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


  // Member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: start_leg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: step_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: step_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: step_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: side_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: step_angle
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
    using DataType = op3_online_walking_module_msgs::msg::FootStepCommand;
    is_plain =
      (
      offsetof(DataType, step_angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FootStepCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::FootStepCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FootStepCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::msg::FootStepCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FootStepCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::FootStepCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FootStepCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FootStepCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FootStepCommand__callbacks = {
  "op3_online_walking_module_msgs::msg",
  "FootStepCommand",
  _FootStepCommand__cdr_serialize,
  _FootStepCommand__cdr_deserialize,
  _FootStepCommand__get_serialized_size,
  _FootStepCommand__max_serialized_size
};

static rosidl_message_type_support_t _FootStepCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FootStepCommand__callbacks,
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
get_message_type_support_handle<op3_online_walking_module_msgs::msg::FootStepCommand>()
{
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_FootStepCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, msg, FootStepCommand)() {
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_FootStepCommand__handle;
}

#ifdef __cplusplus
}
#endif
