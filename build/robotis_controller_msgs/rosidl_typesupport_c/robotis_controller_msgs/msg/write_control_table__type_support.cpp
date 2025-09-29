// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robotis_controller_msgs:msg/WriteControlTable.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robotis_controller_msgs/msg/detail/write_control_table__struct.h"
#include "robotis_controller_msgs/msg/detail/write_control_table__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robotis_controller_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _WriteControlTable_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _WriteControlTable_type_support_ids_t;

static const _WriteControlTable_type_support_ids_t _WriteControlTable_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _WriteControlTable_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _WriteControlTable_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _WriteControlTable_type_support_symbol_names_t _WriteControlTable_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotis_controller_msgs, msg, WriteControlTable)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robotis_controller_msgs, msg, WriteControlTable)),
  }
};

typedef struct _WriteControlTable_type_support_data_t
{
  void * data[2];
} _WriteControlTable_type_support_data_t;

static _WriteControlTable_type_support_data_t _WriteControlTable_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _WriteControlTable_message_typesupport_map = {
  2,
  "robotis_controller_msgs",
  &_WriteControlTable_message_typesupport_ids.typesupport_identifier[0],
  &_WriteControlTable_message_typesupport_symbol_names.symbol_name[0],
  &_WriteControlTable_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t WriteControlTable_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_WriteControlTable_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace robotis_controller_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robotis_controller_msgs, msg, WriteControlTable)() {
  return &::robotis_controller_msgs::msg::rosidl_typesupport_c::WriteControlTable_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
