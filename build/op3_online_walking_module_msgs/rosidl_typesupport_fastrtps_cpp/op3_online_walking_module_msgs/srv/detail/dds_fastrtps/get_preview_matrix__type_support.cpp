// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/srv/detail/get_preview_matrix__rosidl_typesupport_fastrtps_cpp.hpp"
#include "op3_online_walking_module_msgs/srv/detail/get_preview_matrix__struct.hpp"

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
  const op3_online_walking_module_msgs::msg::PreviewRequest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  op3_online_walking_module_msgs::msg::PreviewRequest &);
size_t get_serialized_size(
  const op3_online_walking_module_msgs::msg::PreviewRequest &,
  size_t current_alignment);
size_t
max_serialized_size_PreviewRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_serialize(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: req
  op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.req,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request & ros_message)
{
  // Member: req
  op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.req);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: req

  current_alignment +=
    op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.req, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
max_serialized_size_GetPreviewMatrix_Request(
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


  // Member: req
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PreviewRequest(
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
    using DataType = op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request;
    is_plain =
      (
      offsetof(DataType, req) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetPreviewMatrix_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetPreviewMatrix_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetPreviewMatrix_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetPreviewMatrix_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetPreviewMatrix_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetPreviewMatrix_Request__callbacks = {
  "op3_online_walking_module_msgs::srv",
  "GetPreviewMatrix_Request",
  _GetPreviewMatrix_Request__cdr_serialize,
  _GetPreviewMatrix_Request__cdr_deserialize,
  _GetPreviewMatrix_Request__get_serialized_size,
  _GetPreviewMatrix_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPreviewMatrix_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetPreviewMatrix_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Request>()
{
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, srv, GetPreviewMatrix_Request)() {
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace op3_online_walking_module_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const op3_online_walking_module_msgs::msg::PreviewResponse &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  op3_online_walking_module_msgs::msg::PreviewResponse &);
size_t get_serialized_size(
  const op3_online_walking_module_msgs::msg::PreviewResponse &,
  size_t current_alignment);
size_t
max_serialized_size_PreviewResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace op3_online_walking_module_msgs


namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_serialize(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: res
  op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.res,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response & ros_message)
{
  // Member: res
  op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.res);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
get_serialized_size(
  const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: res

  current_alignment +=
    op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.res, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_op3_online_walking_module_msgs
max_serialized_size_GetPreviewMatrix_Response(
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


  // Member: res
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        op3_online_walking_module_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PreviewResponse(
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
    using DataType = op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response;
    is_plain =
      (
      offsetof(DataType, res) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetPreviewMatrix_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetPreviewMatrix_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetPreviewMatrix_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetPreviewMatrix_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetPreviewMatrix_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetPreviewMatrix_Response__callbacks = {
  "op3_online_walking_module_msgs::srv",
  "GetPreviewMatrix_Response",
  _GetPreviewMatrix_Response__cdr_serialize,
  _GetPreviewMatrix_Response__cdr_deserialize,
  _GetPreviewMatrix_Response__get_serialized_size,
  _GetPreviewMatrix_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPreviewMatrix_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetPreviewMatrix_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_online_walking_module_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<op3_online_walking_module_msgs::srv::GetPreviewMatrix_Response>()
{
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, srv, GetPreviewMatrix_Response)() {
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace op3_online_walking_module_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetPreviewMatrix__callbacks = {
  "op3_online_walking_module_msgs::srv",
  "GetPreviewMatrix",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, srv, GetPreviewMatrix_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, srv, GetPreviewMatrix_Response)(),
};

static rosidl_service_type_support_t _GetPreviewMatrix__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetPreviewMatrix__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace op3_online_walking_module_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_op3_online_walking_module_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<op3_online_walking_module_msgs::srv::GetPreviewMatrix>()
{
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, op3_online_walking_module_msgs, srv, GetPreviewMatrix)() {
  return &op3_online_walking_module_msgs::srv::typesupport_fastrtps_cpp::_GetPreviewMatrix__handle;
}

#ifdef __cplusplus
}
#endif
