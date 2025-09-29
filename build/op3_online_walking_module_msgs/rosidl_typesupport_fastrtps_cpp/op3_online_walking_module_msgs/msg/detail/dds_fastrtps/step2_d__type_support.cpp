// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/step2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_online_walking_module_msgs/msg/detail/step2_d__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose2D &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose2D &,
  size_t current_alignment);
size_t
max_serialized_size_Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace op3_online_walking_module_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_serialize(
  const op3_online_walking_module_msgs::msg::Step2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: step2d
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.step2d,
    cdr);
  // Member: moving_foot
  cdr << ros_message.moving_foot;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::msg::Step2D & ros_message)
{
  // Member: step2d
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.step2d);

  // Member: moving_foot
  cdr >> ros_message.moving_foot;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::msg::Step2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: step2d

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.step2d, current_alignment);
  // Member: moving_foot
  {
    size_t item_size = sizeof(ros_message.moving_foot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
max_serialized_size_Step2D(
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


  // Member: step2d
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moving_foot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = op3_online_walking_module_msgs::msg::Step2D;
    is_plain =
      (
      offsetof(DataType, moving_foot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Step2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::Step2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Step2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::msg::Step2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Step2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::msg::Step2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Step2D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Step2D(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Step2D__callbacks = {
  "op3_online_walking_module_msgs::msg",
  "Step2D",
  _Step2D__cdr_serialize,
  _Step2D__cdr_deserialize,
  _Step2D__get_serialized_size,
  _Step2D__max_serialized_size
};

static rosidl_message_type_support_t _Step2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Step2D__callbacks,
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
get_message_type_support_handle<op3_online_walking_module_msgs::msg::Step2D>()
{
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_Step2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, msg, Step2D)() {
  return &op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::_Step2D__handle;
}

#ifdef __cplusplus
}
#endif
