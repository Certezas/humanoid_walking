// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from op3_action_module_msgs:msg/StartAction.idl
// generated code does not contain a copyright notice

#ifndef OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__FUNCTIONS_H_
#define OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "op3_action_module_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "op3_action_module_msgs/msg/detail/start_action__struct.h"

/// Initialize msg/StartAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * op3_action_module_msgs__msg__StartAction
 * )) before or use
 * op3_action_module_msgs__msg__StartAction__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__msg__StartAction__init(op3_action_module_msgs__msg__StartAction * msg);

/// Finalize msg/StartAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__msg__StartAction__fini(op3_action_module_msgs__msg__StartAction * msg);

/// Create msg/StartAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * op3_action_module_msgs__msg__StartAction__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__msg__StartAction *
op3_action_module_msgs__msg__StartAction__create();

/// Destroy msg/StartAction message.
/**
 * It calls
 * op3_action_module_msgs__msg__StartAction__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__msg__StartAction__destroy(op3_action_module_msgs__msg__StartAction * msg);

/// Check for msg/StartAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__msg__StartAction__are_equal(const op3_action_module_msgs__msg__StartAction * lhs, const op3_action_module_msgs__msg__StartAction * rhs);

/// Copy a msg/StartAction message.
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
op3_action_module_msgs__msg__StartAction__copy(
  const op3_action_module_msgs__msg__StartAction * input,
  op3_action_module_msgs__msg__StartAction * output);

/// Initialize array of msg/StartAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * op3_action_module_msgs__msg__StartAction__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__msg__StartAction__Sequence__init(op3_action_module_msgs__msg__StartAction__Sequence * array, size_t size);

/// Finalize array of msg/StartAction messages.
/**
 * It calls
 * op3_action_module_msgs__msg__StartAction__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__msg__StartAction__Sequence__fini(op3_action_module_msgs__msg__StartAction__Sequence * array);

/// Create array of msg/StartAction messages.
/**
 * It allocates the memory for the array and calls
 * op3_action_module_msgs__msg__StartAction__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
op3_action_module_msgs__msg__StartAction__Sequence *
op3_action_module_msgs__msg__StartAction__Sequence__create(size_t size);

/// Destroy array of msg/StartAction messages.
/**
 * It calls
 * op3_action_module_msgs__msg__StartAction__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
void
op3_action_module_msgs__msg__StartAction__Sequence__destroy(op3_action_module_msgs__msg__StartAction__Sequence * array);

/// Check for msg/StartAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_action_module_msgs
bool
op3_action_module_msgs__msg__StartAction__Sequence__are_equal(const op3_action_module_msgs__msg__StartAction__Sequence * lhs, const op3_action_module_msgs__msg__StartAction__Sequence * rhs);

/// Copy an array of msg/StartAction messages.
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
op3_action_module_msgs__msg__StartAction__Sequence__copy(
  const op3_action_module_msgs__msg__StartAction__Sequence * input,
  op3_action_module_msgs__msg__StartAction__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OP3_ACTION_MODULE_MSGS__MSG__DETAIL__START_ACTION__FUNCTIONS_H_
