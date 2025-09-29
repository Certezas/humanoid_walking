// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/preview_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `k`
// Member `p`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
op3_online_walking_module_msgs__msg__PreviewResponse__init(op3_online_walking_module_msgs__msg__PreviewResponse * msg)
{
  if (!msg) {
    return false;
  }
  // k_row
  // k_col
  // k
  if (!rosidl_runtime_c__double__Sequence__init(&msg->k, 0)) {
    op3_online_walking_module_msgs__msg__PreviewResponse__fini(msg);
    return false;
  }
  // p_row
  // p_col
  // p
  if (!rosidl_runtime_c__double__Sequence__init(&msg->p, 0)) {
    op3_online_walking_module_msgs__msg__PreviewResponse__fini(msg);
    return false;
  }
  return true;
}

void
op3_online_walking_module_msgs__msg__PreviewResponse__fini(op3_online_walking_module_msgs__msg__PreviewResponse * msg)
{
  if (!msg) {
    return;
  }
  // k_row
  // k_col
  // k
  rosidl_runtime_c__double__Sequence__fini(&msg->k);
  // p_row
  // p_col
  // p
  rosidl_runtime_c__double__Sequence__fini(&msg->p);
}

bool
op3_online_walking_module_msgs__msg__PreviewResponse__are_equal(const op3_online_walking_module_msgs__msg__PreviewResponse * lhs, const op3_online_walking_module_msgs__msg__PreviewResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // k_row
  if (lhs->k_row != rhs->k_row) {
    return false;
  }
  // k_col
  if (lhs->k_col != rhs->k_col) {
    return false;
  }
  // k
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->k), &(rhs->k)))
  {
    return false;
  }
  // p_row
  if (lhs->p_row != rhs->p_row) {
    return false;
  }
  // p_col
  if (lhs->p_col != rhs->p_col) {
    return false;
  }
  // p
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->p), &(rhs->p)))
  {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__PreviewResponse__copy(
  const op3_online_walking_module_msgs__msg__PreviewResponse * input,
  op3_online_walking_module_msgs__msg__PreviewResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // k_row
  output->k_row = input->k_row;
  // k_col
  output->k_col = input->k_col;
  // k
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->k), &(output->k)))
  {
    return false;
  }
  // p_row
  output->p_row = input->p_row;
  // p_col
  output->p_col = input->p_col;
  // p
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->p), &(output->p)))
  {
    return false;
  }
  return true;
}

op3_online_walking_module_msgs__msg__PreviewResponse *
op3_online_walking_module_msgs__msg__PreviewResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewResponse * msg = (op3_online_walking_module_msgs__msg__PreviewResponse *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__PreviewResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__PreviewResponse));
  bool success = op3_online_walking_module_msgs__msg__PreviewResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__PreviewResponse__destroy(op3_online_walking_module_msgs__msg__PreviewResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__PreviewResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__init(op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewResponse * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__PreviewResponse *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__PreviewResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__PreviewResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__PreviewResponse__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__fini(op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      op3_online_walking_module_msgs__msg__PreviewResponse__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

op3_online_walking_module_msgs__msg__PreviewResponse__Sequence *
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * array = (op3_online_walking_module_msgs__msg__PreviewResponse__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__PreviewResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__destroy(op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__are_equal(const op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * lhs, const op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__PreviewResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__PreviewResponse__Sequence__copy(
  const op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * input,
  op3_online_walking_module_msgs__msg__PreviewResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__PreviewResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__PreviewResponse * data =
      (op3_online_walking_module_msgs__msg__PreviewResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__PreviewResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__PreviewResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__PreviewResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
