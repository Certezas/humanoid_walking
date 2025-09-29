// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'req'
#include "op3_online_walking_module_msgs/msg/detail/preview_request__struct.h"

/// Struct defined in srv/GetPreviewMatrix in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request
{
  op3_online_walking_module_msgs__msg__PreviewRequest req;
} op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request.
typedef struct op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__Sequence
{
  op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetPreviewMatrix_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'res'
#include "op3_online_walking_module_msgs/msg/detail/preview_response__struct.h"

/// Struct defined in srv/GetPreviewMatrix in the package op3_online_walking_module_msgs.
typedef struct op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response
{
  op3_online_walking_module_msgs__msg__PreviewResponse res;
} op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response;

// Struct for a sequence of op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response.
typedef struct op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__Sequence
{
  op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} op3_online_walking_module_msgs__srv__GetPreviewMatrix_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__SRV__DETAIL__GET_PREVIEW_MATRIX__STRUCT_H_
