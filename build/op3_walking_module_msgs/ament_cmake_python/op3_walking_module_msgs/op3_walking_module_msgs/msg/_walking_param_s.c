// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_walking_module_msgs:msg/WalkingParam.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "op3_walking_module_msgs/msg/detail/walking_param__struct.h"
#include "op3_walking_module_msgs/msg/detail/walking_param__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool op3_walking_module_msgs__msg__walking_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("op3_walking_module_msgs.msg._walking_param.WalkingParam", full_classname_dest, 55) == 0);
  }
  op3_walking_module_msgs__msg__WalkingParam * ros_message = _ros_message;
  {  // init_x_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_x_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_x_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // init_y_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_y_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_y_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // init_z_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_z_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_z_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // init_roll_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_roll_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_roll_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // init_pitch_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_pitch_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_pitch_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // init_yaw_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_yaw_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->init_yaw_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dsp_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dsp_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_fb_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_fb_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_fb_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_move_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_move_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_move_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_move_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_move_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_move_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_move_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_move_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_move_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_move_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_move_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_move_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // move_aim_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_aim_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->move_aim_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // balance_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->balance_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // balance_hip_roll_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_hip_roll_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->balance_hip_roll_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // balance_knee_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_knee_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->balance_knee_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // balance_ankle_roll_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_ankle_roll_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->balance_ankle_roll_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // balance_ankle_pitch_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "balance_ankle_pitch_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->balance_ankle_pitch_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_swap_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_swap_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_swap_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_swap_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_swap_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_swap_amplitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // arm_swing_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_swing_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->arm_swing_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pelvis_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "pelvis_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pelvis_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hip_pitch_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "hip_pitch_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hip_pitch_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->p_gain = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // i_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_gain = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // d_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d_gain = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_walking_module_msgs__msg__walking_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WalkingParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_walking_module_msgs.msg._walking_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WalkingParam");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  op3_walking_module_msgs__msg__WalkingParam * ros_message = (op3_walking_module_msgs__msg__WalkingParam *)raw_ros_message;
  {  // init_x_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_x_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_x_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_y_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_y_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_y_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_z_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_z_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_z_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_roll_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_roll_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_roll_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_pitch_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_pitch_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_pitch_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_yaw_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->init_yaw_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_yaw_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dsp_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_fb_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_fb_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_fb_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_move_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_move_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_move_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_move_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_move_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_move_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_move_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_move_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_move_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_move_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_move_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_move_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_aim_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->move_aim_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_aim_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->balance_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_hip_roll_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->balance_hip_roll_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_hip_roll_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_knee_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->balance_knee_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_knee_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_ankle_roll_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->balance_ankle_roll_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_ankle_roll_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // balance_ankle_pitch_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->balance_ankle_pitch_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "balance_ankle_pitch_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_swap_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_swap_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_swap_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_swap_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_swap_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_swap_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_swing_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->arm_swing_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_swing_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pelvis_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pelvis_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pelvis_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hip_pitch_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hip_pitch_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hip_pitch_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_gain
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->p_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_gain
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->i_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_gain
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->d_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
