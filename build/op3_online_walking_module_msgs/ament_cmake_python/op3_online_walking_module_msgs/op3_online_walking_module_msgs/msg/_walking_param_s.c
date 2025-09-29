// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
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
#include "op3_online_walking_module_msgs/msg/detail/walking_param__struct.h"
#include "op3_online_walking_module_msgs/msg/detail/walking_param__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool op3_online_walking_module_msgs__msg__walking_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("op3_online_walking_module_msgs.msg._walking_param.WalkingParam", full_classname_dest, 62) == 0);
  }
  op3_online_walking_module_msgs__msg__WalkingParam * ros_message = _ros_message;
  {  // dsp_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dsp_ratio = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lipm_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "lipm_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lipm_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // foot_height_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_height_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->foot_height_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zmp_offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "zmp_offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zmp_offset_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zmp_offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "zmp_offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zmp_offset_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_online_walking_module_msgs__msg__walking_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WalkingParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_online_walking_module_msgs.msg._walking_param");
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
  op3_online_walking_module_msgs__msg__WalkingParam * ros_message = (op3_online_walking_module_msgs__msg__WalkingParam *)raw_ros_message;
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
  {  // lipm_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lipm_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lipm_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_height_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->foot_height_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_height_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zmp_offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zmp_offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zmp_offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zmp_offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zmp_offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zmp_offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
