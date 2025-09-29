// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from op3_action_module_msgs:srv/IsRunning.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__FUNCTIONS_H_
#define OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "op3_action_module_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "op3_action_module_msgs/srv/detail/is_running__struct.h"

/// Initialize srv/IsRunning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * op3_action_module_msgs__srv__IsRunning_Request
 * )) before or use
 * op3_action_module_msgs__srv__IsRunning_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__init(op3_action_module_msgs__srv__IsRunning_Request * msg);

/// Finalize srv/IsRunning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Request__fini(op3_action_module_msgs__srv__IsRunning_Request * msg);

/// Create srv/IsRunning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * op3_action_module_msgs__srv__IsRunning_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__srv__IsRunning_Request *
op3_action_module_msgs__srv__IsRunning_Request__create();

/// Destroy srv/IsRunning message.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Request__destroy(op3_action_module_msgs__srv__IsRunning_Request * msg);

/// Check for srv/IsRunning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__are_equal(const op3_action_module_msgs__srv__IsRunning_Request * lhs, const op3_action_module_msgs__srv__IsRunning_Request * rhs);

/// Copy a srv/IsRunning message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__copy(
  const op3_action_module_msgs__srv__IsRunning_Request * input,
  op3_action_module_msgs__srv__IsRunning_Request * output);

/// Initialize array of srv/IsRunning messages.
/**
 * It allocates the memory for the number of elements and calls
 * op3_action_module_msgs__srv__IsRunning_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__Sequence__init(op3_action_module_msgs__srv__IsRunning_Request__Sequence * array, size_t size);

/// Finalize array of srv/IsRunning messages.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Request__Sequence__fini(op3_action_module_msgs__srv__IsRunning_Request__Sequence * array);

/// Create array of srv/IsRunning messages.
/**
 * It allocates the memory for the array and calls
 * op3_action_module_msgs__srv__IsRunning_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__srv__IsRunning_Request__Sequence *
op3_action_module_msgs__srv__IsRunning_Request__Sequence__create(size_t size);

/// Destroy array of srv/IsRunning messages.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Request__Sequence__destroy(op3_action_module_msgs__srv__IsRunning_Request__Sequence * array);

/// Check for srv/IsRunning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__Sequence__are_equal(const op3_action_module_msgs__srv__IsRunning_Request__Sequence * lhs, const op3_action_module_msgs__srv__IsRunning_Request__Sequence * rhs);

/// Copy an array of srv/IsRunning messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Request__Sequence__copy(
  const op3_action_module_msgs__srv__IsRunning_Request__Sequence * input,
  op3_action_module_msgs__srv__IsRunning_Request__Sequence * output);

/// Initialize srv/IsRunning message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * op3_action_module_msgs__srv__IsRunning_Response
 * )) before or use
 * op3_action_module_msgs__srv__IsRunning_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__init(op3_action_module_msgs__srv__IsRunning_Response * msg);

/// Finalize srv/IsRunning message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Response__fini(op3_action_module_msgs__srv__IsRunning_Response * msg);

/// Create srv/IsRunning message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * op3_action_module_msgs__srv__IsRunning_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__srv__IsRunning_Response *
op3_action_module_msgs__srv__IsRunning_Response__create();

/// Destroy srv/IsRunning message.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Response__destroy(op3_action_module_msgs__srv__IsRunning_Response * msg);

/// Check for srv/IsRunning message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__are_equal(const op3_action_module_msgs__srv__IsRunning_Response * lhs, const op3_action_module_msgs__srv__IsRunning_Response * rhs);

/// Copy a srv/IsRunning message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__copy(
  const op3_action_module_msgs__srv__IsRunning_Response * input,
  op3_action_module_msgs__srv__IsRunning_Response * output);

/// Initialize array of srv/IsRunning messages.
/**
 * It allocates the memory for the number of elements and calls
 * op3_action_module_msgs__srv__IsRunning_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__Sequence__init(op3_action_module_msgs__srv__IsRunning_Response__Sequence * array, size_t size);

/// Finalize array of srv/IsRunning messages.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Response__Sequence__fini(op3_action_module_msgs__srv__IsRunning_Response__Sequence * array);

/// Create array of srv/IsRunning messages.
/**
 * It allocates the memory for the array and calls
 * op3_action_module_msgs__srv__IsRunning_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__srv__IsRunning_Response__Sequence *
op3_action_module_msgs__srv__IsRunning_Response__Sequence__create(size_t size);

/// Destroy array of srv/IsRunning messages.
/**
 * It calls
 * op3_action_module_msgs__srv__IsRunning_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__srv__IsRunning_Response__Sequence__destroy(op3_action_module_msgs__srv__IsRunning_Response__Sequence * array);

/// Check for srv/IsRunning message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__Sequence__are_equal(const op3_action_module_msgs__srv__IsRunning_Response__Sequence * lhs, const op3_action_module_msgs__srv__IsRunning_Response__Sequence * rhs);

/// Copy an array of srv/IsRunning messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__srv__IsRunning_Response__Sequence__copy(
  const op3_action_module_msgs__srv__IsRunning_Response__Sequence * input,
  op3_action_module_msgs__srv__IsRunning_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OP3_ACTION_MODULE_MSGS__SRV__DETAIL__IS_RUNNING__FUNCTIONS_H_
