// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:action/ComputeSum.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__STRUCT_H_
#define TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_Goal
{
  int64_t a;
  int64_t b;
  int64_t c;
} tutorial_interfaces__action__ComputeSum_Goal;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_Goal.
typedef struct tutorial_interfaces__action__ComputeSum_Goal__Sequence
{
  tutorial_interfaces__action__ComputeSum_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_Result
{
  int64_t sum;
} tutorial_interfaces__action__ComputeSum_Result;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_Result.
typedef struct tutorial_interfaces__action__ComputeSum_Result__Sequence
{
  tutorial_interfaces__action__ComputeSum_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_Feedback
{
  double percent_complete;
} tutorial_interfaces__action__ComputeSum_Feedback;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_Feedback.
typedef struct tutorial_interfaces__action__ComputeSum_Feedback__Sequence
{
  tutorial_interfaces__action__ComputeSum_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tutorial_interfaces/action/detail/compute_sum__struct.h"

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__ComputeSum_Goal goal;
} tutorial_interfaces__action__ComputeSum_SendGoal_Request;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_SendGoal_Request.
typedef struct tutorial_interfaces__action__ComputeSum_SendGoal_Request__Sequence
{
  tutorial_interfaces__action__ComputeSum_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tutorial_interfaces__action__ComputeSum_SendGoal_Response;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_SendGoal_Response.
typedef struct tutorial_interfaces__action__ComputeSum_SendGoal_Response__Sequence
{
  tutorial_interfaces__action__ComputeSum_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tutorial_interfaces__action__ComputeSum_GetResult_Request;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_GetResult_Request.
typedef struct tutorial_interfaces__action__ComputeSum_GetResult_Request__Sequence
{
  tutorial_interfaces__action__ComputeSum_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_GetResult_Response
{
  int8_t status;
  tutorial_interfaces__action__ComputeSum_Result result;
} tutorial_interfaces__action__ComputeSum_GetResult_Response;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_GetResult_Response.
typedef struct tutorial_interfaces__action__ComputeSum_GetResult_Response__Sequence
{
  tutorial_interfaces__action__ComputeSum_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tutorial_interfaces/action/detail/compute_sum__struct.h"

/// Struct defined in action/ComputeSum in the package tutorial_interfaces.
typedef struct tutorial_interfaces__action__ComputeSum_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tutorial_interfaces__action__ComputeSum_Feedback feedback;
} tutorial_interfaces__action__ComputeSum_FeedbackMessage;

// Struct for a sequence of tutorial_interfaces__action__ComputeSum_FeedbackMessage.
typedef struct tutorial_interfaces__action__ComputeSum_FeedbackMessage__Sequence
{
  tutorial_interfaces__action__ComputeSum_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__action__ComputeSum_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__ACTION__DETAIL__COMPUTE_SUM__STRUCT_H_
