// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objective_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/MoveRobot in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__MoveRobot_Request
{
  geometry_msgs__msg__Point objective_point;
} tutorial_interfaces__srv__MoveRobot_Request;

// Struct for a sequence of tutorial_interfaces__srv__MoveRobot_Request.
typedef struct tutorial_interfaces__srv__MoveRobot_Request__Sequence
{
  tutorial_interfaces__srv__MoveRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__MoveRobot_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveRobot in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__MoveRobot_Response
{
  double proximity;
} tutorial_interfaces__srv__MoveRobot_Response;

// Struct for a sequence of tutorial_interfaces__srv__MoveRobot_Response.
typedef struct tutorial_interfaces__srv__MoveRobot_Response__Sequence
{
  tutorial_interfaces__srv__MoveRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__MoveRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
