// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_H_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsRunning in the package op3_action_module_msgs.
typedef struct op3_action_module_msgs__srv__IsRunning_Request
{
  uint8_t structure_needs_at_least_one_member;
} op3_action_module_msgs__srv__IsRunning_Request;

// Struct for a sequence of op3_action_module_msgs__srv__IsRunning_Request.
typedef struct op3_action_module_msgs__srv__IsRunning_Request__Sequence
{
  op3_action_module_msgs__srv__IsRunning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_action_module_msgs__srv__IsRunning_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IsRunning in the package op3_action_module_msgs.
typedef struct op3_action_module_msgs__srv__IsRunning_Response
{
  bool is_running;
} op3_action_module_msgs__srv__IsRunning_Response;

// Struct for a sequence of op3_action_module_msgs__srv__IsRunning_Response.
typedef struct op3_action_module_msgs__srv__IsRunning_Response__Sequence
{
  op3_action_module_msgs__srv__IsRunning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_action_module_msgs__srv__IsRunning_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__STRUCT_H_
