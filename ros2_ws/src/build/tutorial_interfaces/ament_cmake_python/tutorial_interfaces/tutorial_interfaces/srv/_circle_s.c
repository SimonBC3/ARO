// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tutorial_interfaces:srv/Circle.idl
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
#include "tutorial_interfaces/srv/detail/circle__struct.h"
#include "tutorial_interfaces/srv/detail/circle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tutorial_interfaces__srv__circle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("tutorial_interfaces.srv._circle.Circle_Request", full_classname_dest, 46) == 0);
  }
  tutorial_interfaces__srv__Circle_Request * ros_message = _ros_message;
  {  // point
    PyObject * field = PyObject_GetAttrString(_pymsg, "point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // linear_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tutorial_interfaces__srv__circle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Circle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tutorial_interfaces.srv._circle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Circle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tutorial_interfaces__srv__Circle_Request * ros_message = (tutorial_interfaces__srv__Circle_Request *)raw_ros_message;
  {  // point
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tutorial_interfaces/srv/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/circle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tutorial_interfaces__srv__circle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("tutorial_interfaces.srv._circle.Circle_Response", full_classname_dest, 47) == 0);
  }
  tutorial_interfaces__srv__Circle_Response * ros_message = _ros_message;
  {  // drawn_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "drawn_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drawn_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tutorial_interfaces__srv__circle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Circle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tutorial_interfaces.srv._circle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Circle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tutorial_interfaces__srv__Circle_Response * ros_message = (tutorial_interfaces__srv__Circle_Response *)raw_ros_message;
  {  // drawn_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drawn_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drawn_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
