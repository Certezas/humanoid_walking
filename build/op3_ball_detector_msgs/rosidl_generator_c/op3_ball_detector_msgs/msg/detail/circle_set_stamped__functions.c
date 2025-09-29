// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_ball_detector_msgs:msg/CircleSetStamped.idl
// generated code does not contain a copyright notice
#include "op3_ball_detector_msgs/msg/detail/circle_set_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `circles`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
op3_ball_detector_msgs__msg__CircleSetStamped__init(op3_ball_detector_msgs__msg__CircleSetStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    op3_ball_detector_msgs__msg__CircleSetStamped__fini(msg);
    return false;
  }
  // circles
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->circles, 0)) {
    op3_ball_detector_msgs__msg__CircleSetStamped__fini(msg);
    return false;
  }
  return true;
}

void
op3_ball_detector_msgs__msg__CircleSetStamped__fini(op3_ball_detector_msgs__msg__CircleSetStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // circles
  geometry_msgs__msg__Point__Sequence__fini(&msg->circles);
}

bool
op3_ball_detector_msgs__msg__CircleSetStamped__are_equal(const op3_ball_detector_msgs__msg__CircleSetStamped * lhs, const op3_ball_detector_msgs__msg__CircleSetStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // circles
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->circles), &(rhs->circles)))
  {
    return false;
  }
  return true;
}

bool
op3_ball_detector_msgs__msg__CircleSetStamped__copy(
  const op3_ball_detector_msgs__msg__CircleSetStamped * input,
  op3_ball_detector_msgs__msg__CircleSetStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // circles
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->circles), &(output->circles)))
  {
    return false;
  }
  return true;
}

op3_ball_detector_msgs__msg__CircleSetStamped *
op3_ball_detector_msgs__msg__CircleSetStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__CircleSetStamped * msg = (op3_ball_detector_msgs__msg__CircleSetStamped *)allocator.allocate(sizeof(op3_ball_detector_msgs__msg__CircleSetStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_ball_detector_msgs__msg__CircleSetStamped));
  bool success = op3_ball_detector_msgs__msg__CircleSetStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_ball_detector_msgs__msg__CircleSetStamped__destroy(op3_ball_detector_msgs__msg__CircleSetStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_ball_detector_msgs__msg__CircleSetStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__init(op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__CircleSetStamped * data = NULL;

  if (size) {
    data = (op3_ball_detector_msgs__msg__CircleSetStamped *)allocator.zero_allocate(size, sizeof(op3_ball_detector_msgs__msg__CircleSetStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_ball_detector_msgs__msg__CircleSetStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_ball_detector_msgs__msg__CircleSetStamped__fini(&data[i - 1]);
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
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__fini(op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * array)
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
      op3_ball_detector_msgs__msg__CircleSetStamped__fini(&array->data[i]);
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

op3_ball_detector_msgs__msg__CircleSetStamped__Sequence *
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * array = (op3_ball_detector_msgs__msg__CircleSetStamped__Sequence *)allocator.allocate(sizeof(op3_ball_detector_msgs__msg__CircleSetStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__destroy(op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__are_equal(const op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * lhs, const op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_ball_detector_msgs__msg__CircleSetStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_ball_detector_msgs__msg__CircleSetStamped__Sequence__copy(
  const op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * input,
  op3_ball_detector_msgs__msg__CircleSetStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_ball_detector_msgs__msg__CircleSetStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_ball_detector_msgs__msg__CircleSetStamped * data =
      (op3_ball_detector_msgs__msg__CircleSetStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_ball_detector_msgs__msg__CircleSetStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_ball_detector_msgs__msg__CircleSetStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_ball_detector_msgs__msg__CircleSetStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
