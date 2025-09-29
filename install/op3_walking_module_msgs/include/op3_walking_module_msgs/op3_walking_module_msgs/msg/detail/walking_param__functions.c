// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#include "op3_walking_module_msgs/msg/detail/walking_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
op3_walking_module_msgs__msg__WalkingParam__init(op3_walking_module_msgs__msg__WalkingParam * msg)
{
  if (!msg) {
    return false;
  }
  // init_x_offset
  // init_y_offset
  // init_z_offset
  // init_roll_offset
  // init_pitch_offset
  // init_yaw_offset
  // period_time
  // dsp_ratio
  // step_fb_ratio
  // x_move_amplitude
  // y_move_amplitude
  // z_move_amplitude
  // angle_move_amplitude
  // move_aim_on
  // balance_enable
  // balance_hip_roll_gain
  // balance_knee_gain
  // balance_ankle_roll_gain
  // balance_ankle_pitch_gain
  // y_swap_amplitude
  // z_swap_amplitude
  // arm_swing_gain
  // pelvis_offset
  // hip_pitch_offset
  // p_gain
  // i_gain
  // d_gain
  return true;
}

void
op3_walking_module_msgs__msg__WalkingParam__fini(op3_walking_module_msgs__msg__WalkingParam * msg)
{
  if (!msg) {
    return;
  }
  // init_x_offset
  // init_y_offset
  // init_z_offset
  // init_roll_offset
  // init_pitch_offset
  // init_yaw_offset
  // period_time
  // dsp_ratio
  // step_fb_ratio
  // x_move_amplitude
  // y_move_amplitude
  // z_move_amplitude
  // angle_move_amplitude
  // move_aim_on
  // balance_enable
  // balance_hip_roll_gain
  // balance_knee_gain
  // balance_ankle_roll_gain
  // balance_ankle_pitch_gain
  // y_swap_amplitude
  // z_swap_amplitude
  // arm_swing_gain
  // pelvis_offset
  // hip_pitch_offset
  // p_gain
  // i_gain
  // d_gain
}

bool
op3_walking_module_msgs__msg__WalkingParam__are_equal(const op3_walking_module_msgs__msg__WalkingParam * lhs, const op3_walking_module_msgs__msg__WalkingParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // init_x_offset
  if (lhs->init_x_offset != rhs->init_x_offset) {
    return false;
  }
  // init_y_offset
  if (lhs->init_y_offset != rhs->init_y_offset) {
    return false;
  }
  // init_z_offset
  if (lhs->init_z_offset != rhs->init_z_offset) {
    return false;
  }
  // init_roll_offset
  if (lhs->init_roll_offset != rhs->init_roll_offset) {
    return false;
  }
  // init_pitch_offset
  if (lhs->init_pitch_offset != rhs->init_pitch_offset) {
    return false;
  }
  // init_yaw_offset
  if (lhs->init_yaw_offset != rhs->init_yaw_offset) {
    return false;
  }
  // period_time
  if (lhs->period_time != rhs->period_time) {
    return false;
  }
  // dsp_ratio
  if (lhs->dsp_ratio != rhs->dsp_ratio) {
    return false;
  }
  // step_fb_ratio
  if (lhs->step_fb_ratio != rhs->step_fb_ratio) {
    return false;
  }
  // x_move_amplitude
  if (lhs->x_move_amplitude != rhs->x_move_amplitude) {
    return false;
  }
  // y_move_amplitude
  if (lhs->y_move_amplitude != rhs->y_move_amplitude) {
    return false;
  }
  // z_move_amplitude
  if (lhs->z_move_amplitude != rhs->z_move_amplitude) {
    return false;
  }
  // angle_move_amplitude
  if (lhs->angle_move_amplitude != rhs->angle_move_amplitude) {
    return false;
  }
  // move_aim_on
  if (lhs->move_aim_on != rhs->move_aim_on) {
    return false;
  }
  // balance_enable
  if (lhs->balance_enable != rhs->balance_enable) {
    return false;
  }
  // balance_hip_roll_gain
  if (lhs->balance_hip_roll_gain != rhs->balance_hip_roll_gain) {
    return false;
  }
  // balance_knee_gain
  if (lhs->balance_knee_gain != rhs->balance_knee_gain) {
    return false;
  }
  // balance_ankle_roll_gain
  if (lhs->balance_ankle_roll_gain != rhs->balance_ankle_roll_gain) {
    return false;
  }
  // balance_ankle_pitch_gain
  if (lhs->balance_ankle_pitch_gain != rhs->balance_ankle_pitch_gain) {
    return false;
  }
  // y_swap_amplitude
  if (lhs->y_swap_amplitude != rhs->y_swap_amplitude) {
    return false;
  }
  // z_swap_amplitude
  if (lhs->z_swap_amplitude != rhs->z_swap_amplitude) {
    return false;
  }
  // arm_swing_gain
  if (lhs->arm_swing_gain != rhs->arm_swing_gain) {
    return false;
  }
  // pelvis_offset
  if (lhs->pelvis_offset != rhs->pelvis_offset) {
    return false;
  }
  // hip_pitch_offset
  if (lhs->hip_pitch_offset != rhs->hip_pitch_offset) {
    return false;
  }
  // p_gain
  if (lhs->p_gain != rhs->p_gain) {
    return false;
  }
  // i_gain
  if (lhs->i_gain != rhs->i_gain) {
    return false;
  }
  // d_gain
  if (lhs->d_gain != rhs->d_gain) {
    return false;
  }
  return true;
}

bool
op3_walking_module_msgs__msg__WalkingParam__copy(
  const op3_walking_module_msgs__msg__WalkingParam * input,
  op3_walking_module_msgs__msg__WalkingParam * output)
{
  if (!input || !output) {
    return false;
  }
  // init_x_offset
  output->init_x_offset = input->init_x_offset;
  // init_y_offset
  output->init_y_offset = input->init_y_offset;
  // init_z_offset
  output->init_z_offset = input->init_z_offset;
  // init_roll_offset
  output->init_roll_offset = input->init_roll_offset;
  // init_pitch_offset
  output->init_pitch_offset = input->init_pitch_offset;
  // init_yaw_offset
  output->init_yaw_offset = input->init_yaw_offset;
  // period_time
  output->period_time = input->period_time;
  // dsp_ratio
  output->dsp_ratio = input->dsp_ratio;
  // step_fb_ratio
  output->step_fb_ratio = input->step_fb_ratio;
  // x_move_amplitude
  output->x_move_amplitude = input->x_move_amplitude;
  // y_move_amplitude
  output->y_move_amplitude = input->y_move_amplitude;
  // z_move_amplitude
  output->z_move_amplitude = input->z_move_amplitude;
  // angle_move_amplitude
  output->angle_move_amplitude = input->angle_move_amplitude;
  // move_aim_on
  output->move_aim_on = input->move_aim_on;
  // balance_enable
  output->balance_enable = input->balance_enable;
  // balance_hip_roll_gain
  output->balance_hip_roll_gain = input->balance_hip_roll_gain;
  // balance_knee_gain
  output->balance_knee_gain = input->balance_knee_gain;
  // balance_ankle_roll_gain
  output->balance_ankle_roll_gain = input->balance_ankle_roll_gain;
  // balance_ankle_pitch_gain
  output->balance_ankle_pitch_gain = input->balance_ankle_pitch_gain;
  // y_swap_amplitude
  output->y_swap_amplitude = input->y_swap_amplitude;
  // z_swap_amplitude
  output->z_swap_amplitude = input->z_swap_amplitude;
  // arm_swing_gain
  output->arm_swing_gain = input->arm_swing_gain;
  // pelvis_offset
  output->pelvis_offset = input->pelvis_offset;
  // hip_pitch_offset
  output->hip_pitch_offset = input->hip_pitch_offset;
  // p_gain
  output->p_gain = input->p_gain;
  // i_gain
  output->i_gain = input->i_gain;
  // d_gain
  output->d_gain = input->d_gain;
  return true;
}

op3_walking_module_msgs__msg__WalkingParam *
op3_walking_module_msgs__msg__WalkingParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_walking_module_msgs__msg__WalkingParam * msg = (op3_walking_module_msgs__msg__WalkingParam *)allocator.allocate(sizeof(op3_walking_module_msgs__msg__WalkingParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(op3_walking_module_msgs__msg__WalkingParam));
  bool success = op3_walking_module_msgs__msg__WalkingParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
op3_walking_module_msgs__msg__WalkingParam__destroy(op3_walking_module_msgs__msg__WalkingParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    op3_walking_module_msgs__msg__WalkingParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
op3_walking_module_msgs__msg__WalkingParam__Sequence__init(op3_walking_module_msgs__msg__WalkingParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_walking_module_msgs__msg__WalkingParam * data = NULL;

  if (size) {
    data = (op3_walking_module_msgs__msg__WalkingParam *)allocator.zero_allocate(size, sizeof(op3_walking_module_msgs__msg__WalkingParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = op3_walking_module_msgs__msg__WalkingParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        op3_walking_module_msgs__msg__WalkingParam__fini(&data[i - 1]);
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
op3_walking_module_msgs__msg__WalkingParam__Sequence__fini(op3_walking_module_msgs__msg__WalkingParam__Sequence * array)
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
      op3_walking_module_msgs__msg__WalkingParam__fini(&array->data[i]);
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

op3_walking_module_msgs__msg__WalkingParam__Sequence *
op3_walking_module_msgs__msg__WalkingParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  op3_walking_module_msgs__msg__WalkingParam__Sequence * array = (op3_walking_module_msgs__msg__WalkingParam__Sequence *)allocator.allocate(sizeof(op3_walking_module_msgs__msg__WalkingParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = op3_walking_module_msgs__msg__WalkingParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
op3_walking_module_msgs__msg__WalkingParam__Sequence__destroy(op3_walking_module_msgs__msg__WalkingParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    op3_walking_module_msgs__msg__WalkingParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
op3_walking_module_msgs__msg__WalkingParam__Sequence__are_equal(const op3_walking_module_msgs__msg__WalkingParam__Sequence * lhs, const op3_walking_module_msgs__msg__WalkingParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!op3_walking_module_msgs__msg__WalkingParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
op3_walking_module_msgs__msg__WalkingParam__Sequence__copy(
  const op3_walking_module_msgs__msg__WalkingParam__Sequence * input,
  op3_walking_module_msgs__msg__WalkingParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(op3_walking_module_msgs__msg__WalkingParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    op3_walking_module_msgs__msg__WalkingParam * data =
      (op3_walking_module_msgs__msg__WalkingParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!op3_walking_module_msgs__msg__WalkingParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          op3_walking_module_msgs__msg__WalkingParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!op3_walking_module_msgs__msg__WalkingParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
