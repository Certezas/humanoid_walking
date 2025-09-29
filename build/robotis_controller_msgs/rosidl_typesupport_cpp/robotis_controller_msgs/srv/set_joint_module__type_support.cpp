// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robotis_controller_msgs:srv/SetJointModule.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robotis_controller_msgs/srv/detail/set_joint_module__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointModule_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointModule_Request_type_support_ids_t;

static const _SetJointModule_Request_type_support_ids_t _SetJointModule_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointModule_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointModule_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointModule_Request_type_support_symbol_names_t _SetJointModule_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetJointModule_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetJointModule_Request)),
  }
};

typedef struct _SetJointModule_Request_type_support_data_t
{
  void * data[2];
} _SetJointModule_Request_type_support_data_t;

static _SetJointModule_Request_type_support_data_t _SetJointModule_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointModule_Request_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetJointModule_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointModule_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointModule_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointModule_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointModule_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::SetJointModule_Request>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetJointModule_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetJointModule_Request)() {
  return get_message_type_support_handle<robotis_controller_msgs::srv::SetJointModule_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointModule_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointModule_Response_type_support_ids_t;

static const _SetJointModule_Response_type_support_ids_t _SetJointModule_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointModule_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointModule_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointModule_Response_type_support_symbol_names_t _SetJointModule_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetJointModule_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetJointModule_Response)),
  }
};

typedef struct _SetJointModule_Response_type_support_data_t
{
  void * data[2];
} _SetJointModule_Response_type_support_data_t;

static _SetJointModule_Response_type_support_data_t _SetJointModule_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointModule_Response_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetJointModule_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointModule_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointModule_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointModule_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointModule_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robotis_controller_msgs::srv::SetJointModule_Response>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetJointModule_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetJointModule_Response)() {
  return get_message_type_support_handle<robotis_controller_msgs::srv::SetJointModule_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robotis_controller_msgs/srv/detail/set_joint_module__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetJointModule_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointModule_type_support_ids_t;

static const _SetJointModule_type_support_ids_t _SetJointModule_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetJointModule_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointModule_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointModule_type_support_symbol_names_t _SetJointModule_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robotis_controller_msgs, srv, SetJointModule)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robotis_controller_msgs, srv, SetJointModule)),
  }
};

typedef struct _SetJointModule_type_support_data_t
{
  void * data[2];
} _SetJointModule_type_support_data_t;

static _SetJointModule_type_support_data_t _SetJointModule_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointModule_service_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_SetJointModule_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointModule_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointModule_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointModule_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointModule_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace robotis_controller_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robotis_controller_msgs::srv::SetJointModule>()
{
  return &::robotis_controller_msgs::srv::rosidl_typesupport_cpp::SetJointModule_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robotis_controller_msgs, srv, SetJointModule)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robotis_controller_msgs::srv::SetJointModule>();
}

#ifdef __cplusplus
}
#endif
