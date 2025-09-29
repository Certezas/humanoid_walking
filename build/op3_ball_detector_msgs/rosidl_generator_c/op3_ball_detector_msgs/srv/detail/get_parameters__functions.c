// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_ball_detector_msgs:srv/GetParameters.idl
// generated code does not contain a copyright notice
#include "op3_ball_detector_msgs/srv/detail/get_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
op3_ball_detector_msgs__srv__GetParameters_Request__init(op3_ball_detector_msgs__srv__GetParameters_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
op3_ball_detector_msgs__srv__GetParameters_Request__fini(op3_ball_detector_msgs__srv__GetParameters_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
op3_ball_detector_msgs__srv__GetParameters_Request__are_equal(const op3_ball_detector_msgs__srv__GetParameters_Request * lhs, const op3_ball_detector_msgs__srv__GetParameters_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
op3_ball_detector_msgs__srv__GetParameters_Request__copy(
  const op3_ball_detector_msgs__srv__GetParameters_Request * input,
  op3_ball_detector_msgs__srv__GetParameters_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

op3_ball_detector_msgs__srv__GetParameters_Request *
op3_ball_detector_msgs__srv__GetParameters_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Request * msg = (op3_ball_detector_msgs__srv__GetParameters_Request *)allocator.allocate(sizeof(op3_ball_detector_msgs__srv__GetParameters_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_ball_detector_msgs__srv__GetParameters_Request));
  bool success = op3_ball_detector_msgs__srv__GetParameters_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_ball_detector_msgs__srv__GetParameters_Request__destroy(op3_ball_detector_msgs__srv__GetParameters_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_ball_detector_msgs__srv__GetParameters_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__init(op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Request * data = NULL;

  if (size) {
    data = (op3_ball_detector_msgs__srv__GetParameters_Request *)allocator.zero_allocate(size, sizeof(op3_ball_detector_msgs__srv__GetParameters_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_ball_detector_msgs__srv__GetParameters_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_ball_detector_msgs__srv__GetParameters_Request__fini(&data[i - 1]);
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
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__fini(op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * array)
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
      op3_ball_detector_msgs__srv__GetParameters_Request__fini(&array->data[i]);
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

op3_ball_detector_msgs__srv__GetParameters_Request__Sequence *
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * array = (op3_ball_detector_msgs__srv__GetParameters_Request__Sequence *)allocator.allocate(sizeof(op3_ball_detector_msgs__srv__GetParameters_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__destroy(op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__are_equal(const op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * lhs, const op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_ball_detector_msgs__srv__GetParameters_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_ball_detector_msgs__srv__GetParameters_Request__Sequence__copy(
  const op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * input,
  op3_ball_detector_msgs__srv__GetParameters_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_ball_detector_msgs__srv__GetParameters_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_ball_detector_msgs__srv__GetParameters_Request * data =
      (op3_ball_detector_msgs__srv__GetParameters_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_ball_detector_msgs__srv__GetParameters_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_ball_detector_msgs__srv__GetParameters_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_ball_detector_msgs__srv__GetParameters_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `returns`
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__functions.h"

bool
op3_ball_detector_msgs__srv__GetParameters_Response__init(op3_ball_detector_msgs__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // returns
  if (!op3_ball_detector_msgs__msg__BallDetectorParams__init(&msg->returns)) {
    op3_ball_detector_msgs__srv__GetParameters_Response__fini(msg);
    return false;
  }
  return true;
}

void
op3_ball_detector_msgs__srv__GetParameters_Response__fini(op3_ball_detector_msgs__srv__GetParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // returns
  op3_ball_detector_msgs__msg__BallDetectorParams__fini(&msg->returns);
}

bool
op3_ball_detector_msgs__srv__GetParameters_Response__are_equal(const op3_ball_detector_msgs__srv__GetParameters_Response * lhs, const op3_ball_detector_msgs__srv__GetParameters_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // returns
  if (!op3_ball_detector_msgs__msg__BallDetectorParams__are_equal(
      &(lhs->returns), &(rhs->returns)))
  {
    return false;
  }
  return true;
}

bool
op3_ball_detector_msgs__srv__GetParameters_Response__copy(
  const op3_ball_detector_msgs__srv__GetParameters_Response * input,
  op3_ball_detector_msgs__srv__GetParameters_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // returns
  if (!op3_ball_detector_msgs__msg__BallDetectorParams__copy(
      &(input->returns), &(output->returns)))
  {
    return false;
  }
  return true;
}

op3_ball_detector_msgs__srv__GetParameters_Response *
op3_ball_detector_msgs__srv__GetParameters_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Response * msg = (op3_ball_detector_msgs__srv__GetParameters_Response *)allocator.allocate(sizeof(op3_ball_detector_msgs__srv__GetParameters_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_ball_detector_msgs__srv__GetParameters_Response));
  bool success = op3_ball_detector_msgs__srv__GetParameters_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_ball_detector_msgs__srv__GetParameters_Response__destroy(op3_ball_detector_msgs__srv__GetParameters_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_ball_detector_msgs__srv__GetParameters_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__init(op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Response * data = NULL;

  if (size) {
    data = (op3_ball_detector_msgs__srv__GetParameters_Response *)allocator.zero_allocate(size, sizeof(op3_ball_detector_msgs__srv__GetParameters_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_ball_detector_msgs__srv__GetParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_ball_detector_msgs__srv__GetParameters_Response__fini(&data[i - 1]);
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
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__fini(op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * array)
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
      op3_ball_detector_msgs__srv__GetParameters_Response__fini(&array->data[i]);
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

op3_ball_detector_msgs__srv__GetParameters_Response__Sequence *
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * array = (op3_ball_detector_msgs__srv__GetParameters_Response__Sequence *)allocator.allocate(sizeof(op3_ball_detector_msgs__srv__GetParameters_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__destroy(op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__are_equal(const op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * lhs, const op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_ball_detector_msgs__srv__GetParameters_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_ball_detector_msgs__srv__GetParameters_Response__Sequence__copy(
  const op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * input,
  op3_ball_detector_msgs__srv__GetParameters_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_ball_detector_msgs__srv__GetParameters_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_ball_detector_msgs__srv__GetParameters_Response * data =
      (op3_ball_detector_msgs__srv__GetParameters_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_ball_detector_msgs__srv__GetParameters_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_ball_detector_msgs__srv__GetParameters_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_ball_detector_msgs__srv__GetParameters_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
