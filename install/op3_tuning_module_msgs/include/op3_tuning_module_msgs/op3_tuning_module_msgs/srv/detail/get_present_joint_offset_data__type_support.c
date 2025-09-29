// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from op3_tuning_module_msgs:srv/GetPresentJointOffsetData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__rosidl_typesupport_introspection_c.h"
#include "op3_tuning_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__functions.h"
#include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__init(message_memory);
}

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_fini_function(void * message_memory)
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_members = {
  "op3_tuning_module_msgs__srv",  // message namespace
  "GetPresentJointOffsetData_Request",  // message name
  1,  // number of fields
  sizeof(op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request),
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_member_array,  // message members
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_type_support_handle = {
  0,
  &op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_tuning_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Request)() {
  if (!op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_type_support_handle.typesupport_identifier) {
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Request__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "op3_tuning_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__functions.h"
// already included above
// #include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__struct.h"


// Include directives for member types
// Member `present_data_array`
#include "op3_tuning_module_msgs/msg/joint_offset_position_data.h"
// Member `present_data_array`
#include "op3_tuning_module_msgs/msg/detail/joint_offset_position_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__init(message_memory);
}

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_fini_function(void * message_memory)
{
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__fini(message_memory);
}

size_t op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__size_function__GetPresentJointOffsetData_Response__present_data_array(
  const void * untyped_member)
{
  const op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence * member =
    (const op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence *)(untyped_member);
  return member->size;
}

const void * op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_const_function__GetPresentJointOffsetData_Response__present_data_array(
  const void * untyped_member, size_t index)
{
  const op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence * member =
    (const op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_function__GetPresentJointOffsetData_Response__present_data_array(
  void * untyped_member, size_t index)
{
  op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence * member =
    (op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence *)(untyped_member);
  return &member->data[index];
}

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__fetch_function__GetPresentJointOffsetData_Response__present_data_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const op3_tuning_module_msgs__msg__JointOffsetPositionData * item =
    ((const op3_tuning_module_msgs__msg__JointOffsetPositionData *)
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_const_function__GetPresentJointOffsetData_Response__present_data_array(untyped_member, index));
  op3_tuning_module_msgs__msg__JointOffsetPositionData * value =
    (op3_tuning_module_msgs__msg__JointOffsetPositionData *)(untyped_value);
  *value = *item;
}

void op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__assign_function__GetPresentJointOffsetData_Response__present_data_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  op3_tuning_module_msgs__msg__JointOffsetPositionData * item =
    ((op3_tuning_module_msgs__msg__JointOffsetPositionData *)
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_function__GetPresentJointOffsetData_Response__present_data_array(untyped_member, index));
  const op3_tuning_module_msgs__msg__JointOffsetPositionData * value =
    (const op3_tuning_module_msgs__msg__JointOffsetPositionData *)(untyped_value);
  *item = *value;
}

bool op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__resize_function__GetPresentJointOffsetData_Response__present_data_array(
  void * untyped_member, size_t size)
{
  op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence * member =
    (op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence *)(untyped_member);
  op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence__fini(member);
  return op3_tuning_module_msgs__msg__JointOffsetPositionData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_member_array[1] = {
  {
    "present_data_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response, present_data_array),  // bytes offset in struct
    NULL,  // default value
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__size_function__GetPresentJointOffsetData_Response__present_data_array,  // size() function pointer
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_const_function__GetPresentJointOffsetData_Response__present_data_array,  // get_const(index) function pointer
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__get_function__GetPresentJointOffsetData_Response__present_data_array,  // get(index) function pointer
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__fetch_function__GetPresentJointOffsetData_Response__present_data_array,  // fetch(index, &value) function pointer
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__assign_function__GetPresentJointOffsetData_Response__present_data_array,  // assign(index, value) function pointer
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__resize_function__GetPresentJointOffsetData_Response__present_data_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_members = {
  "op3_tuning_module_msgs__srv",  // message namespace
  "GetPresentJointOffsetData_Response",  // message name
  1,  // number of fields
  sizeof(op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response),
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_member_array,  // message members
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_type_support_handle = {
  0,
  &op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_tuning_module_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Response)() {
  op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, msg, JointOffsetPositionData)();
  if (!op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_type_support_handle.typesupport_identifier) {
    op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &op3_tuning_module_msgs__srv__GetPresentJointOffsetData_Response__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "op3_tuning_module_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "op3_tuning_module_msgs/srv/detail/get_present_joint_offset_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_members = {
  "op3_tuning_module_msgs__srv",  // service namespace
  "GetPresentJointOffsetData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Request_message_type_support_handle,
  NULL  // response message
  // op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_Response_message_type_support_handle
};

static rosidl_service_type_support_t op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_type_support_handle = {
  0,
  &op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_op3_tuning_module_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData)() {
  if (!op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_type_support_handle.typesupport_identifier) {
    op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, op3_tuning_module_msgs, srv, GetPresentJointOffsetData_Response)()->data;
  }

  return &op3_tuning_module_msgs__srv__detail__get_present_joint_offset_data__rosidl_typesupport_introspection_c__GetPresentJointOffsetData_service_type_support_handle;
}
