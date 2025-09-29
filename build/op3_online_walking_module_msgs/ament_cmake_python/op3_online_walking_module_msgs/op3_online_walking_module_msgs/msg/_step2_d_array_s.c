// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from op3_online_walking_module_msgs:msg/Step2DArray.idl
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
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__struct.h"
#include "op3_online_walking_module_msgs/msg/detail/step2_d_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "op3_online_walking_module_msgs/msg/detail/step2_d__functions.h"
// end nested array functions include
bool op3_online_walking_module_msgs__msg__step2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * op3_online_walking_module_msgs__msg__step2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool op3_online_walking_module_msgs__msg__step2_d_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("op3_online_walking_module_msgs.msg._step2_d_array.Step2DArray", full_classname_dest, 61) == 0);
  }
  op3_online_walking_module_msgs__msg__Step2DArray * ros_message = _ros_message;
  {  // step_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->step_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // footsteps_2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "footsteps_2d");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'footsteps_2d'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!op3_online_walking_module_msgs__msg__Step2D__Sequence__init(&(ros_message->footsteps_2d), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create op3_online_walking_module_msgs__msg__Step2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    op3_online_walking_module_msgs__msg__Step2D * dest = ros_message->footsteps_2d.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!op3_online_walking_module_msgs__msg__step2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * op3_online_walking_module_msgs__msg__step2_d_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Step2DArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("op3_online_walking_module_msgs.msg._step2_d_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Step2DArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  op3_online_walking_module_msgs__msg__Step2DArray * ros_message = (op3_online_walking_module_msgs__msg__Step2DArray *)raw_ros_message;
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
  {  // footsteps_2d
    PyObject * field = NULL;
    size_t size = ros_message->footsteps_2d.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    op3_online_walking_module_msgs__msg__Step2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->footsteps_2d.data[i]);
      PyObject * pyitem = op3_online_walking_module_msgs__msg__step2_d__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "footsteps_2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
