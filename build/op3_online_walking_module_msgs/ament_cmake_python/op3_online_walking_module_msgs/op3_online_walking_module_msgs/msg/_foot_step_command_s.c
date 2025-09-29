// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_online_walking_module_msgs:msg/FootStepCommand.idl
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
#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__struct.h"
#include "op3_online_walking_module_msgs/msg/detail/foot_step_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool op3_online_walking_module_msgs__msg__foot_step_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("op3_online_walking_module_msgs.msg._foot_step_command.FootStepCommand", full_classname_dest, 69) == 0);
  }
  op3_online_walking_module_msgs__msg__FootStepCommand * ros_message = _ros_message;
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->command, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // start_leg
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_leg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->start_leg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // step_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // step_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // side_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "side_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->side_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // step_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_online_walking_module_msgs__msg__foot_step_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FootStepCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_online_walking_module_msgs.msg._foot_step_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FootStepCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  op3_online_walking_module_msgs__msg__FootStepCommand * ros_message = (op3_online_walking_module_msgs__msg__FootStepCommand *)raw_ros_message;
  {  // command
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->command.data,
      strlen(ros_message->command.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_leg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->start_leg.data,
      strlen(ros_message->start_leg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_leg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->step_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // side_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->side_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "side_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // step_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->step_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
