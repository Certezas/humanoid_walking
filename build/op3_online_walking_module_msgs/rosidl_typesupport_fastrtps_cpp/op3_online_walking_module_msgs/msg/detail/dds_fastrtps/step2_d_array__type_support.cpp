// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.hpp"

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
bool cdr_serialize(
  const op3_online_walking_module_msgs::msg::Step2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  op3_online_walking_module_msgs::msg::Step2D &);
size_t get_serialized_size(
  const op3_online_walking_module_msgs::msg::Step2D &,
  size_t current_alignment);
size_t
max_serialized_size_Step2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_serialize(
  const op3_online_walking_module_msgs::msg::Step2DArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: step_time
  cdr << ros_message.step_time;
  // Member: footsteps_2d
  {
    size_t size = ros_message.footsteps_2d.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.footsteps_2d[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::msg::Step2DArray & ros_message)
{
  // Member: step_time
  cdr >> ros_message.step_time;

  // Member: footsteps_2d
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.footsteps_2d.resize(size);
    for (size_t i = 0; i < size; i++) {
      op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.footsteps_2d[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::msg::Step2DArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: step_time
  {
    size_t item_size = sizeof(ros_message.step_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: footsteps_2d
  {
    size_t array_size = ros_message.footsteps_2d.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.footsteps_2d[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
max_serialized_size_Step2DArray(
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


  // Member: step_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: footsteps_2d
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
      size_t inner_size =
        op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Step2D(
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
    using DataType = op3_online_walking_module_msgs::msg::Step2DArray;
    is_plain =
      (
      offsetof(DataType, footsteps_2d) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Step2DArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::Step2DArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Step2DArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::msg::Step2DArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Step2DArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::Step2DArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Step2DArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Step2DArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Step2DArray__callbacks = {
  "op3_online_walking_module_msgs::msg",
  "Step2DArray",
  _Step2DArray__cdr_serialize,
  _Step2DArray__cdr_deserialize,
  _Step2DArray__get_serialized_size,
  _Step2DArray__max_serialized_size
};

static rosidl_message_type_support_t _Step2DArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Step2DArray__callbacks,
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
get_message_type_support_handle<op3_online_walking_module_msgs::msg::Step2DArray>()
{
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_Step2DArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, msg, Step2DArray)() {
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_Step2DArray__handle;
}

#ifdef __cplusplus
}
#endif
