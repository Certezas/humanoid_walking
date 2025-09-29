// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
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
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__struct.h"
#include "op3_ball_detector_msgs/msg/detail/ball_detector_params__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool op3_ball_detector_msgs__msg__ball_detector_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("op3_ball_detector_msgs.msg._ball_detector_params.BallDetectorParams", full_classname_dest, 67) == 0);
  }
  op3_ball_detector_msgs__msg__BallDetectorParams * ros_message = _ros_message;
  {  // gaussian_blur_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "gaussian_blur_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gaussian_blur_size = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gaussian_blur_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "gaussian_blur_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gaussian_blur_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // canny_edge_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "canny_edge_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->canny_edge_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hough_accum_resolution
    PyObject * field = PyObject_GetAttrString(_pymsg, "hough_accum_resolution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hough_accum_resolution = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hough_accum_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "hough_accum_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hough_accum_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_circle_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_circle_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_circle_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_radius = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_radius");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_radius = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_h_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_h_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_h_min = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_h_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_h_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_h_max = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_s_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_s_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_s_min = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_s_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_s_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_s_max = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_v_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_v_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_v_min = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filter_v_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_v_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_v_max = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ellipse_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "ellipse_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ellipse_size = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_ball_detector_msgs__msg__ball_detector_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BallDetectorParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_ball_detector_msgs.msg._ball_detector_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BallDetectorParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  op3_ball_detector_msgs__msg__BallDetectorParams * ros_message = (op3_ball_detector_msgs__msg__BallDetectorParams *)raw_ros_message;
  {  // gaussian_blur_size
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gaussian_blur_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gaussian_blur_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gaussian_blur_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gaussian_blur_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gaussian_blur_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // canny_edge_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->canny_edge_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "canny_edge_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hough_accum_resolution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hough_accum_resolution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hough_accum_resolution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hough_accum_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hough_accum_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hough_accum_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_circle_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_circle_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_circle_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_radius
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_radius
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_h_min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_h_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_h_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_h_max
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_h_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_h_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_s_min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_s_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_s_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_s_max
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_s_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_s_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_v_min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_v_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_v_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_v_max
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_v_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_v_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ellipse_size
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ellipse_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ellipse_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
