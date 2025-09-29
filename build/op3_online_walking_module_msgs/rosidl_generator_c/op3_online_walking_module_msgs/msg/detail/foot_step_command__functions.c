// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
// generated code does not contain a copyright notice
#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `start_leg`
#include "rosidl_runtime_c/string_functions.h"

bool
op3_online_walking_module_msgs__msg__FootStepCommand__init(op3_online_walking_module_msgs__msg__FootStepCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    op3_online_walking_module_msgs__msg__FootStepCommand__fini(msg);
    return false;
  }
  // start_leg
  if (!rosidl_runtime_c__String__init(&msg->start_leg)) {
    op3_online_walking_module_msgs__msg__FootStepCommand__fini(msg);
    return false;
  }
  // step_num
  // step_time
  // step_length
  // side_length
  // step_angle
  return true;
}

void
op3_online_walking_module_msgs__msg__FootStepCommand__fini(op3_online_walking_module_msgs__msg__FootStepCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // start_leg
  rosidl_runtime_c__String__fini(&msg->start_leg);
  // step_num
  // step_time
  // step_length
  // side_length
  // step_angle
}

bool
op3_online_walking_module_msgs__msg__FootStepCommand__are_equal(const op3_online_walking_module_msgs__msg__FootStepCommand * lhs, const op3_online_walking_module_msgs__msg__FootStepCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // start_leg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->start_leg), &(rhs->start_leg)))
  {
    return false;
  }
  // step_num
  if (lhs->step_num != rhs->step_num) {
    return false;
  }
  // step_time
  if (lhs->step_time != rhs->step_time) {
    return false;
  }
  // step_length
  if (lhs->step_length != rhs->step_length) {
    return false;
  }
  // side_length
  if (lhs->side_length != rhs->side_length) {
    return false;
  }
  // step_angle
  if (lhs->step_angle != rhs->step_angle) {
    return false;
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__FootStepCommand__copy(
  const op3_online_walking_module_msgs__msg__FootStepCommand * input,
  op3_online_walking_module_msgs__msg__FootStepCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // start_leg
  if (!rosidl_runtime_c__String__copy(
      &(input->start_leg), &(output->start_leg)))
  {
    return false;
  }
  // step_num
  output->step_num = input->step_num;
  // step_time
  output->step_time = input->step_time;
  // step_length
  output->step_length = input->step_length;
  // side_length
  output->side_length = input->side_length;
  // step_angle
  output->step_angle = input->step_angle;
  return true;
}

op3_online_walking_module_msgs__msg__FootStepCommand *
op3_online_walking_module_msgs__msg__FootStepCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__FootStepCommand * msg = (op3_online_walking_module_msgs__msg__FootStepCommand *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__FootStepCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_online_walking_module_msgs__msg__FootStepCommand));
  bool success = op3_online_walking_module_msgs__msg__FootStepCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_online_walking_module_msgs__msg__FootStepCommand__destroy(op3_online_walking_module_msgs__msg__FootStepCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_online_walking_module_msgs__msg__FootStepCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__init(op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__FootStepCommand * data = NULL;

  if (size) {
    data = (op3_online_walking_module_msgs__msg__FootStepCommand *)allocator.zero_allocate(size, sizeof(op3_online_walking_module_msgs__msg__FootStepCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_online_walking_module_msgs__msg__FootStepCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_online_walking_module_msgs__msg__FootStepCommand__fini(&data[i - 1]);
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
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__fini(op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * array)
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
      op3_online_walking_module_msgs__msg__FootStepCommand__fini(&array->data[i]);
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

op3_online_walking_module_msgs__msg__FootStepCommand__Sequence *
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * array = (op3_online_walking_module_msgs__msg__FootStepCommand__Sequence *)allocator.allocate(sizeof(op3_online_walking_module_msgs__msg__FootStepCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__destroy(op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__are_equal(const op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * lhs, const op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__FootStepCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_online_walking_module_msgs__msg__FootStepCommand__Sequence__copy(
  const op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * input,
  op3_online_walking_module_msgs__msg__FootStepCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_online_walking_module_msgs__msg__FootStepCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_online_walking_module_msgs__msg__FootStepCommand * data =
      (op3_online_walking_module_msgs__msg__FootStepCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_online_walking_module_msgs__msg__FootStepCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_online_walking_module_msgs__msg__FootStepCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_online_walking_module_msgs__msg__FootStepCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
