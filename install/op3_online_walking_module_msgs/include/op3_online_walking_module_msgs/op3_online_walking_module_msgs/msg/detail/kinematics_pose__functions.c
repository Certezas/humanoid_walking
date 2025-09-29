// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/KinematicsPose.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/kinematics_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
op3_online_walking_module_msgs__msg__KinematicsPose__init(op3_online_walking_module_msgs__msg__KinematicsPose * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    op3_online_walking_module_msgs__msg__KinematicsPose__fini(msg);
    return false;
  }
  // mov_time
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    op3_online_walking_module_msgs__msg__KinematicsPose__fini(msg);
    return false;
  }
  return true;
}

void
op3_online_walking_module_msgs__msg__KinematicsPose__fini(op3_online_walking_module_msgs__msg__KinematicsPose * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mov_time
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
op3_online_walking_module_msgs__msg__KinematicsPose__are_equal(const op3_online_walking_module_msgs__msg__KinematicsPose * lhs, const op3_online_walking_module_msgs__msg__KinematicsPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // mov_time
  if (lhs->mov_time != rhs->mov_time) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__KinematicsPose__copy(
  const op3_online_walking_module_msgs__msg__KinematicsPose * input,
  op3_online_walking_module_msgs__msg__KinematicsPose * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // mov_time
  output->mov_time = input->mov_time;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

op3_online_walking_module_msgs__msg__KinematicsPose *
op3_online_walking_module_msgs__msg__KinematicsPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__KinematicsPose * msg = (op3_online_walking_module_msgs__msg__KinematicsPose *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__KinematicsPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__KinematicsPose));
  bool success = op3_online_walking_module_msgs__msg__KinematicsPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__KinematicsPose__destroy(op3_online_walking_module_msgs__msg__KinematicsPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__KinematicsPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__init(op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__KinematicsPose * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__KinematicsPose *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__KinematicsPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__KinematicsPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__KinematicsPose__fini(&data[i - 1]);
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
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__fini(op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * array)
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
      op3_online_walking_module_msgs__msg__KinematicsPose__fini(&array->data[i]);
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

op3_online_walking_module_msgs__msg__KinematicsPose__Sequence *
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * array = (op3_online_walking_module_msgs__msg__KinematicsPose__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__KinematicsPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__destroy(op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__are_equal(const op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * lhs, const op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__KinematicsPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__KinematicsPose__Sequence__copy(
  const op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * input,
  op3_online_walking_module_msgs__msg__KinematicsPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__KinematicsPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__KinematicsPose * data =
      (op3_online_walking_module_msgs__msg__KinematicsPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__KinematicsPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__KinematicsPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__KinematicsPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
