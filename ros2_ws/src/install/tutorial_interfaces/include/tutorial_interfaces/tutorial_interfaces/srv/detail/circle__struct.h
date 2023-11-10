// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Circle_Request
{
  geometry_msgs__msg__Point point;
  double linear_vel;
  double radius;
} tutorial_interfaces__srv__Circle_Request;

// Struct for a sequence of tutorial_interfaces__srv__Circle_Request.
typedef struct tutorial_interfaces__srv__Circle_Request__Sequence
{
  tutorial_interfaces__srv__Circle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Circle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__Circle_Response
{
  double drawn_rad;
} tutorial_interfaces__srv__Circle_Response;

// Struct for a sequence of tutorial_interfaces__srv__Circle_Response.
typedef struct tutorial_interfaces__srv__Circle_Response__Sequence
{
  tutorial_interfaces__srv__Circle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__Circle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__CIRCLE__STRUCT_H_
