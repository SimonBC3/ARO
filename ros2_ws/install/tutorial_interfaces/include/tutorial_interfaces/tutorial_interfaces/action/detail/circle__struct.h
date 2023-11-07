// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:action/Circle.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__STRUCT_H_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__STRUCT_H_

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

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_Goal
{
  geometry_msgs__msg__Point point;
  double linear_vel;
  double radius;
} tutorial_interfaces__action__Circle_Goal;

// Struct for a sequence of tutorial_interfaces__action__Circle_Goal.
typedef struct tutorial_interfaces__action__Circle_Goal__Sequence
{
  tutorial_interfaces__action__Circle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_Result
{
  double drawn_rad;
} tutorial_interfaces__action__Circle_Result;

// Struct for a sequence of tutorial_interfaces__action__Circle_Result.
typedef struct tutorial_interfaces__action__Circle_Result__Sequence
{
  tutorial_interfaces__action__Circle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_point'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_Feedback
{
  geometry_msgs__msg__Point current_point;
} tutorial_interfaces__action__Circle_Feedback;

// Struct for a sequence of tutorial_interfaces__action__Circle_Feedback.
typedef struct tutorial_interfaces__action__Circle_Feedback__Sequence
{
  tutorial_interfaces__action__Circle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tutorial_interfaces/action/detail/circle__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__Circle_Goal goal;
} tutorial_interfaces__action__Circle_SendGoal_Request;

// Struct for a sequence of tutorial_interfaces__action__Circle_SendGoal_Request.
typedef struct tutorial_interfaces__action__Circle_SendGoal_Request__Sequence
{
  tutorial_interfaces__action__Circle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tutorial_interfaces__action__Circle_SendGoal_Response;

// Struct for a sequence of tutorial_interfaces__action__Circle_SendGoal_Response.
typedef struct tutorial_interfaces__action__Circle_SendGoal_Response__Sequence
{
  tutorial_interfaces__action__Circle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tutorial_interfaces__action__Circle_GetResult_Request;

// Struct for a sequence of tutorial_interfaces__action__Circle_GetResult_Request.
typedef struct tutorial_interfaces__action__Circle_GetResult_Request__Sequence
{
  tutorial_interfaces__action__Circle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_GetResult_Response
{
  int8_t status;
  tutorial_interfaces__action__Circle_Result result;
} tutorial_interfaces__action__Circle_GetResult_Response;

// Struct for a sequence of tutorial_interfaces__action__Circle_GetResult_Response.
typedef struct tutorial_interfaces__action__Circle_GetResult_Response__Sequence
{
  tutorial_interfaces__action__Circle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"

/// Struct defined in action/Circle in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__Circle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__Circle_Feedback feedback;
} tutorial_interfaces__action__Circle_FeedbackMessage;

// Struct for a sequence of tutorial_interfaces__action__Circle_FeedbackMessage.
typedef struct tutorial_interfaces__action__Circle_FeedbackMessage__Sequence
{
  tutorial_interfaces__action__Circle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__Circle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__CIRCLE__STRUCT_H_
