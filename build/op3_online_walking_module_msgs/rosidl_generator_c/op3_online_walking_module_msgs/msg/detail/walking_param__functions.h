// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice

#ifndef OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__FUNCTIONS_H_
#define OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "op3_online_walking_module_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.h"

/// Initialize msg/WalkingParam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * op3_online_walking_module_msgs__msg__WalkingParam
 * )) before or use
 * op3_online_walking_module_msgs__msg__WalkingParam__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__init(op3_online_walking_module_msgs__msg__WalkingParam * msg);

/// Finalize msg/WalkingParam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__WalkingParam__fini(op3_online_walking_module_msgs__msg__WalkingParam * msg);

/// Create msg/WalkingParam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * op3_online_walking_module_msgs__msg__WalkingParam__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
op3_online_walking_module_msgs__msg__WalkingParam *
op3_online_walking_module_msgs__msg__WalkingParam__create();

/// Destroy msg/WalkingParam message.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__WalkingParam__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__WalkingParam__destroy(op3_online_walking_module_msgs__msg__WalkingParam * msg);

/// Check for msg/WalkingParam message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__are_equal(const op3_online_walking_module_msgs__msg__WalkingParam * lhs, const op3_online_walking_module_msgs__msg__WalkingParam * rhs);

/// Copy a msg/WalkingParam message.
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
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__copy(
  const op3_online_walking_module_msgs__msg__WalkingParam * input,
  op3_online_walking_module_msgs__msg__WalkingParam * output);

/// Initialize array of msg/WalkingParam messages.
/**
 * It allocates the memory for the number of elements and calls
 * op3_online_walking_module_msgs__msg__WalkingParam__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__init(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array, size_t size);

/// Finalize array of msg/WalkingParam messages.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__WalkingParam__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__fini(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array);

/// Create array of msg/WalkingParam messages.
/**
 * It allocates the memory for the array and calls
 * op3_online_walking_module_msgs__msg__WalkingParam__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
op3_online_walking_module_msgs__msg__WalkingParam__Sequence *
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__create(size_t size);

/// Destroy array of msg/WalkingParam messages.
/**
 * It calls
 * op3_online_walking_module_msgs__msg__WalkingParam__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
void
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__destroy(op3_online_walking_module_msgs__msg__WalkingParam__Sequence * array);

/// Check for msg/WalkingParam message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__are_equal(const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * lhs, const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * rhs);

/// Copy an array of msg/WalkingParam messages.
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
ROSIDL_GENERATOR_C_PUBLIC_op3_online_walking_module_msgs
bool
op3_online_walking_module_msgs__msg__WalkingParam__Sequence__copy(
  const op3_online_walking_module_msgs__msg__WalkingParam__Sequence * input,
  op3_online_walking_module_msgs__msg__WalkingParam__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OP3_ONLINE_WALKING_MODULE_MSGS__MSG__DETAIL__WALKING_PARAM__FUNCTIONS_H_
