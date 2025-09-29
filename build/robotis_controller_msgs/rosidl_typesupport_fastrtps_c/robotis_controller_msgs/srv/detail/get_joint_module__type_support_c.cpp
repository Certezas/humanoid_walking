// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotis_controller_msgs:srv/GetJointModule.idl
// generated code does not contain a copyright notice
#include "robotis_controller_msgs/srv/detail/get_joint_module__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotis_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotis_controller_msgs/srv/detail/get_joint_module__struct.h"
#include "robotis_controller_msgs/srv/detail/get_joint_module__functions.h"
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

#include "rosidl_runtime_c/string.h"  // joint_name
#include "rosidl_runtime_c/string_functions.h"  // joint_name

// forward declare type support functions


using _GetJointModule_Request__ros_msg_type = robotis_controller_msgs__srv__GetJointModule_Request;

static bool _GetJointModule_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetJointModule_Request__ros_msg_type * ros_message = static_cast<const _GetJointModule_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    size_t size = ros_message->joint_name.size;
    auto array_ptr = ros_message->joint_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetJointModule_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetJointModule_Request__ros_msg_type * ros_message = static_cast<_GetJointModule_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->joint_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->joint_name, size)) {
      fprintf(stderr, "failed to create array for field 'joint_name'");
      return false;
    }
    auto array_ptr = ros_message->joint_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'joint_name'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotis_controller_msgs
size_t get_serialized_size_robotis_controller_msgs__srv__GetJointModule_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetJointModule_Request__ros_msg_type * ros_message = static_cast<const _GetJointModule_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_name
  {
    size_t array_size = ros_message->joint_name.size;
    auto array_ptr = ros_message->joint_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetJointModule_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotis_controller_msgs__srv__GetJointModule_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotis_controller_msgs
size_t max_serialized_size_robotis_controller_msgs__srv__GetJointModule_Request(
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

  // member: joint_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotis_controller_msgs__srv__GetJointModule_Request;
    is_plain =
      (
      offsetof(DataType, joint_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetJointModule_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotis_controller_msgs__srv__GetJointModule_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetJointModule_Request = {
  "robotis_controller_msgs::srv",
  "GetJointModule_Request",
  _GetJointModule_Request__cdr_serialize,
  _GetJointModule_Request__cdr_deserialize,
  _GetJointModule_Request__get_serialized_size,
  _GetJointModule_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetJointModule_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetJointModule_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, srv, GetJointModule_Request)() {
  return &_GetJointModule_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__struct.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/get_joint_module__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // joint_name, module_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // joint_name, module_name

// forward declare type support functions


using _GetJointModule_Response__ros_msg_type = robotis_controller_msgs__srv__GetJointModule_Response;

static bool _GetJointModule_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetJointModule_Response__ros_msg_type * ros_message = static_cast<const _GetJointModule_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    size_t size = ros_message->joint_name.size;
    auto array_ptr = ros_message->joint_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: module_name
  {
    size_t size = ros_message->module_name.size;
    auto array_ptr = ros_message->module_name.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetJointModule_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetJointModule_Response__ros_msg_type * ros_message = static_cast<_GetJointModule_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_name
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->joint_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->joint_name, size)) {
      fprintf(stderr, "failed to create array for field 'joint_name'");
      return false;
    }
    auto array_ptr = ros_message->joint_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'joint_name'\n");
        return false;
      }
    }
  }

  // Field name: module_name
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->module_name.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->module_name);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->module_name, size)) {
      fprintf(stderr, "failed to create array for field 'module_name'");
      return false;
    }
    auto array_ptr = ros_message->module_name.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'module_name'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotis_controller_msgs
size_t get_serialized_size_robotis_controller_msgs__srv__GetJointModule_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetJointModule_Response__ros_msg_type * ros_message = static_cast<const _GetJointModule_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_name
  {
    size_t array_size = ros_message->joint_name.size;
    auto array_ptr = ros_message->joint_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name module_name
  {
    size_t array_size = ros_message->module_name.size;
    auto array_ptr = ros_message->module_name.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetJointModule_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotis_controller_msgs__srv__GetJointModule_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotis_controller_msgs
size_t max_serialized_size_robotis_controller_msgs__srv__GetJointModule_Response(
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

  // member: joint_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: module_name
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotis_controller_msgs__srv__GetJointModule_Response;
    is_plain =
      (
      offsetof(DataType, module_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetJointModule_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotis_controller_msgs__srv__GetJointModule_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetJointModule_Response = {
  "robotis_controller_msgs::srv",
  "GetJointModule_Response",
  _GetJointModule_Response__cdr_serialize,
  _GetJointModule_Response__cdr_deserialize,
  _GetJointModule_Response__get_serialized_size,
  _GetJointModule_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetJointModule_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetJointModule_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, srv, GetJointModule_Response)() {
  return &_GetJointModule_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robotis_controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotis_controller_msgs/srv/get_joint_module.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetJointModule__callbacks = {
  "robotis_controller_msgs::srv",
  "GetJointModule",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, srv, GetJointModule_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, srv, GetJointModule_Response)(),
};

static rosidl_service_type_support_t GetJointModule__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetJointModule__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, srv, GetJointModule)() {
  return &GetJointModule__handle;
}

#if defined(__cplusplus)
}
#endif
