// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
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
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__struct.h"
#include "op3_camera_setting_tool_msgs/msg/detail/camera_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool op3_camera_setting_tool_msgs__msg__camera_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("op3_camera_setting_tool_msgs.msg._camera_params.CameraParams", full_classname_dest, 60) == 0);
  }
  op3_camera_setting_tool_msgs__msg__CameraParams * ros_message = _ros_message;
  {  // brightness
    PyObject * field = PyObject_GetAttrString(_pymsg, "brightness");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brightness = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // contrast
    PyObject * field = PyObject_GetAttrString(_pymsg, "contrast");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contrast = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // saturation
    PyObject * field = PyObject_GetAttrString(_pymsg, "saturation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->saturation = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sharpness
    PyObject * field = PyObject_GetAttrString(_pymsg, "sharpness");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sharpness = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gain = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // focus_automatic_continuous
    PyObject * field = PyObject_GetAttrString(_pymsg, "focus_automatic_continuous");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->focus_automatic_continuous = (Py_True == field);
    Py_DECREF(field);
  }
  {  // focus_absolute
    PyObject * field = PyObject_GetAttrString(_pymsg, "focus_absolute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->focus_absolute = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // auto_exposure
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_exposure");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_exposure = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // exposure_time_absolute
    PyObject * field = PyObject_GetAttrString(_pymsg, "exposure_time_absolute");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exposure_time_absolute = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // white_balance_automatic
    PyObject * field = PyObject_GetAttrString(_pymsg, "white_balance_automatic");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->white_balance_automatic = (Py_True == field);
    Py_DECREF(field);
  }
  {  // white_balance_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "white_balance_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->white_balance_temperature = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_camera_setting_tool_msgs__msg__camera_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CameraParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_camera_setting_tool_msgs.msg._camera_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  op3_camera_setting_tool_msgs__msg__CameraParams * ros_message = (op3_camera_setting_tool_msgs__msg__CameraParams *)raw_ros_message;
  {  // brightness
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brightness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brightness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contrast
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->contrast);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contrast", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // saturation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->saturation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "saturation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sharpness
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sharpness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sharpness", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // focus_automatic_continuous
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->focus_automatic_continuous ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "focus_automatic_continuous", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // focus_absolute
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->focus_absolute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "focus_absolute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_exposure
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_exposure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_exposure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exposure_time_absolute
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exposure_time_absolute);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exposure_time_absolute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // white_balance_automatic
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->white_balance_automatic ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "white_balance_automatic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // white_balance_temperature
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->white_balance_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "white_balance_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
