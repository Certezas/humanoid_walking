// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/Step2D.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/step2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `step2d`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
op3_online_walking_module_msgs__msg__Step2D__init(op3_online_walking_module_msgs__msg__Step2D * msg)
{
  if (!msg) {
    return false;
  }
  // step2d
  if (!geometry_msgs__msg__Pose2D__init(&msg->step2d)) {
    op3_online_walking_module_msgs__msg__Step2D__fini(msg);
    return false;
  }
  // moving_foot
  return true;
}

void
op3_online_walking_module_msgs__msg__Step2D__fini(op3_online_walking_module_msgs__msg__Step2D * msg)
{
  if (!msg) {
    return;
  }
  // step2d
  geometry_msgs__msg__Pose2D__fini(&msg->step2d);
  // moving_foot
}

bool
op3_online_walking_module_msgs__msg__Step2D__are_equal(const op3_online_walking_module_msgs__msg__Step2D * lhs, const op3_online_walking_module_msgs__msg__Step2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // step2d
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->step2d), &(rhs->step2d)))
  {
    return false;
  }
  // moving_foot
  if (lhs->moving_foot != rhs->moving_foot) {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__Step2D__copy(
  const op3_online_walking_module_msgs__msg__Step2D * input,
  op3_online_walking_module_msgs__msg__Step2D * output)
{
  if (!input || !output) {
    return false;
  }
  // step2d
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->step2d), &(output->step2d)))
  {
    return false;
  }
  // moving_foot
  output->moving_foot = input->moving_foot;
  return true;
}

op3_online_walking_module_msgs__msg__Step2D *
op3_online_walking_module_msgs__msg__Step2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__Step2D * msg = (op3_online_walking_module_msgs__msg__Step2D *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__Step2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__Step2D));
  bool success = op3_online_walking_module_msgs__msg__Step2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__Step2D__destroy(op3_online_walking_module_msgs__msg__Step2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__Step2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__Step2D__Sequence__init(op3_online_walking_module_msgs__msg__Step2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__Step2D * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__Step2D *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__Step2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__Step2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__Step2D__fini(&data[i - 1]);
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
op3_online_walking_module_msgs__msg__Step2D__Sequence__fini(op3_online_walking_module_msgs__msg__Step2D__Sequence * array)
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
      op3_online_walking_module_msgs__msg__Step2D__fini(&array->data[i]);
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

op3_online_walking_module_msgs__msg__Step2D__Sequence *
op3_online_walking_module_msgs__msg__Step2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__Step2D__Sequence * array = (op3_online_walking_module_msgs__msg__Step2D__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__Step2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__Step2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__Step2D__Sequence__destroy(op3_online_walking_module_msgs__msg__Step2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__Step2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__Step2D__Sequence__are_equal(const op3_online_walking_module_msgs__msg__Step2D__Sequence * lhs, const op3_online_walking_module_msgs__msg__Step2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__Step2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__Step2D__Sequence__copy(
  const op3_online_walking_module_msgs__msg__Step2D__Sequence * input,
  op3_online_walking_module_msgs__msg__Step2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__Step2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__Step2D * data =
      (op3_online_walking_module_msgs__msg__Step2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__Step2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__Step2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__Step2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
