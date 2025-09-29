// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_tuning_module_msgs:msg/JointTorqueOnOffArray.idl
// generated code does not contain a copyright notice
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `torque_enable_data`
#include "op3_tuning_module_msgs/msg/detail/joint_torque_on_off__functions.h"

bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__init(op3_tuning_module_msgs__msg__JointTorqueOnOffArray * msg)
{
  if (!msg) {
    return false;
  }
  // torque_enable_data
  if (!op3_tuning_module_msgs__msg__JointTorqueOnOff__Sequence__init(&msg->torque_enable_data, 0)) {
    op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(msg);
    return false;
  }
  return true;
}

void
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(op3_tuning_module_msgs__msg__JointTorqueOnOffArray * msg)
{
  if (!msg) {
    return;
  }
  // torque_enable_data
  op3_tuning_module_msgs__msg__JointTorqueOnOff__Sequence__fini(&msg->torque_enable_data);
}

bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__are_equal(const op3_tuning_module_msgs__msg__JointTorqueOnOffArray * lhs, const op3_tuning_module_msgs__msg__JointTorqueOnOffArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // torque_enable_data
  if (!op3_tuning_module_msgs__msg__JointTorqueOnOff__Sequence__are_equal(
      &(lhs->torque_enable_data), &(rhs->torque_enable_data)))
  {
    return false;
  }
  return true;
}

bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__copy(
  const op3_tuning_module_msgs__msg__JointTorqueOnOffArray * input,
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray * output)
{
  if (!input || !output) {
    return false;
  }
  // torque_enable_data
  if (!op3_tuning_module_msgs__msg__JointTorqueOnOff__Sequence__copy(
      &(input->torque_enable_data), &(output->torque_enable_data)))
  {
    return false;
  }
  return true;
}

op3_tuning_module_msgs__msg__JointTorqueOnOffArray *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray * msg = (op3_tuning_module_msgs__msg__JointTorqueOnOffArray *)allocator.allocate(sizeof(op3_tuning_module_msgs__msg__JointTorqueOnOffArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_tuning_module_msgs__msg__JointTorqueOnOffArray));
  bool success = op3_tuning_module_msgs__msg__JointTorqueOnOffArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__destroy(op3_tuning_module_msgs__msg__JointTorqueOnOffArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__init(op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray * data = NULL;

  if (size) {
    data = (op3_tuning_module_msgs__msg__JointTorqueOnOffArray *)allocator.zero_allocate(size, sizeof(op3_tuning_module_msgs__msg__JointTorqueOnOffArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_tuning_module_msgs__msg__JointTorqueOnOffArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(&data[i - 1]);
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
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__fini(op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * array)
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
      op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(&array->data[i]);
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

op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence *
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * array = (op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence *)allocator.allocate(sizeof(op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__destroy(op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__are_equal(const op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * lhs, const op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_tuning_module_msgs__msg__JointTorqueOnOffArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence__copy(
  const op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * input,
  op3_tuning_module_msgs__msg__JointTorqueOnOffArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_tuning_module_msgs__msg__JointTorqueOnOffArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_tuning_module_msgs__msg__JointTorqueOnOffArray * data =
      (op3_tuning_module_msgs__msg__JointTorqueOnOffArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_tuning_module_msgs__msg__JointTorqueOnOffArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_tuning_module_msgs__msg__JointTorqueOnOffArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_tuning_module_msgs__msg__JointTorqueOnOffArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
