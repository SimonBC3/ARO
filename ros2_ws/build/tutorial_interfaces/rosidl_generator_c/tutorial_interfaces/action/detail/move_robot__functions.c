// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:action/MoveRobot.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/action/detail/move_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"
// Member `objective_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tutorial_interfaces__action__MoveRobot_Goal__init(tutorial_interfaces__action__MoveRobot_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    tutorial_interfaces__action__MoveRobot_Goal__fini(msg);
    return false;
  }
  // objective_point
  if (!geometry_msgs__msg__Point__init(&msg->objective_point)) {
    tutorial_interfaces__action__MoveRobot_Goal__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Goal__fini(tutorial_interfaces__action__MoveRobot_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // objective_point
  geometry_msgs__msg__Point__fini(&msg->objective_point);
}

bool
tutorial_interfaces__action__MoveRobot_Goal__are_equal(const tutorial_interfaces__action__MoveRobot_Goal * lhs, const tutorial_interfaces__action__MoveRobot_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // objective_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->objective_point), &(rhs->objective_point)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Goal__copy(
  const tutorial_interfaces__action__MoveRobot_Goal * input,
  tutorial_interfaces__action__MoveRobot_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // objective_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->objective_point), &(output->objective_point)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_Goal *
tutorial_interfaces__action__MoveRobot_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Goal * msg = (tutorial_interfaces__action__MoveRobot_Goal *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_Goal));
  bool success = tutorial_interfaces__action__MoveRobot_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_Goal__destroy(tutorial_interfaces__action__MoveRobot_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_Goal__Sequence__init(tutorial_interfaces__action__MoveRobot_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Goal * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_Goal *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Goal__Sequence__fini(tutorial_interfaces__action__MoveRobot_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_Goal__Sequence *
tutorial_interfaces__action__MoveRobot_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Goal__Sequence * array = (tutorial_interfaces__action__MoveRobot_Goal__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_Goal__Sequence__destroy(tutorial_interfaces__action__MoveRobot_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_Goal__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_Goal__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Goal__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_Goal__Sequence * input,
  tutorial_interfaces__action__MoveRobot_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_Goal * data =
      (tutorial_interfaces__action__MoveRobot_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `answer`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
tutorial_interfaces__action__MoveRobot_Result__init(tutorial_interfaces__action__MoveRobot_Result * msg)
{
  if (!msg) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    tutorial_interfaces__action__MoveRobot_Result__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Result__fini(tutorial_interfaces__action__MoveRobot_Result * msg)
{
  if (!msg) {
    return;
  }
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
}

bool
tutorial_interfaces__action__MoveRobot_Result__are_equal(const tutorial_interfaces__action__MoveRobot_Result * lhs, const tutorial_interfaces__action__MoveRobot_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer), &(rhs->answer)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Result__copy(
  const tutorial_interfaces__action__MoveRobot_Result * input,
  tutorial_interfaces__action__MoveRobot_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__copy(
      &(input->answer), &(output->answer)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_Result *
tutorial_interfaces__action__MoveRobot_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Result * msg = (tutorial_interfaces__action__MoveRobot_Result *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_Result));
  bool success = tutorial_interfaces__action__MoveRobot_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_Result__destroy(tutorial_interfaces__action__MoveRobot_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_Result__Sequence__init(tutorial_interfaces__action__MoveRobot_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Result * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_Result *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Result__Sequence__fini(tutorial_interfaces__action__MoveRobot_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_Result__Sequence *
tutorial_interfaces__action__MoveRobot_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Result__Sequence * array = (tutorial_interfaces__action__MoveRobot_Result__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_Result__Sequence__destroy(tutorial_interfaces__action__MoveRobot_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_Result__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_Result__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Result__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_Result__Sequence * input,
  tutorial_interfaces__action__MoveRobot_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_Result * data =
      (tutorial_interfaces__action__MoveRobot_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_point`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"

bool
tutorial_interfaces__action__MoveRobot_Feedback__init(tutorial_interfaces__action__MoveRobot_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_point
  if (!geometry_msgs__msg__Point__init(&msg->current_point)) {
    tutorial_interfaces__action__MoveRobot_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Feedback__fini(tutorial_interfaces__action__MoveRobot_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_point
  geometry_msgs__msg__Point__fini(&msg->current_point);
}

bool
tutorial_interfaces__action__MoveRobot_Feedback__are_equal(const tutorial_interfaces__action__MoveRobot_Feedback * lhs, const tutorial_interfaces__action__MoveRobot_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->current_point), &(rhs->current_point)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Feedback__copy(
  const tutorial_interfaces__action__MoveRobot_Feedback * input,
  tutorial_interfaces__action__MoveRobot_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->current_point), &(output->current_point)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_Feedback *
tutorial_interfaces__action__MoveRobot_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Feedback * msg = (tutorial_interfaces__action__MoveRobot_Feedback *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_Feedback));
  bool success = tutorial_interfaces__action__MoveRobot_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_Feedback__destroy(tutorial_interfaces__action__MoveRobot_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__init(tutorial_interfaces__action__MoveRobot_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Feedback * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_Feedback *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__fini(tutorial_interfaces__action__MoveRobot_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_Feedback__Sequence *
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_Feedback__Sequence * array = (tutorial_interfaces__action__MoveRobot_Feedback__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__destroy(tutorial_interfaces__action__MoveRobot_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_Feedback__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_Feedback__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_Feedback__Sequence * input,
  tutorial_interfaces__action__MoveRobot_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_Feedback * data =
      (tutorial_interfaces__action__MoveRobot_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "tutorial_interfaces/action/detail/move_robot__functions.h"

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__init(tutorial_interfaces__action__MoveRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!tutorial_interfaces__action__MoveRobot_Goal__init(&msg->goal)) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(tutorial_interfaces__action__MoveRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  tutorial_interfaces__action__MoveRobot_Goal__fini(&msg->goal);
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__are_equal(const tutorial_interfaces__action__MoveRobot_SendGoal_Request * lhs, const tutorial_interfaces__action__MoveRobot_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!tutorial_interfaces__action__MoveRobot_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__copy(
  const tutorial_interfaces__action__MoveRobot_SendGoal_Request * input,
  tutorial_interfaces__action__MoveRobot_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!tutorial_interfaces__action__MoveRobot_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_SendGoal_Request *
tutorial_interfaces__action__MoveRobot_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Request * msg = (tutorial_interfaces__action__MoveRobot_SendGoal_Request *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Request));
  bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Request__destroy(tutorial_interfaces__action__MoveRobot_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__init(tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Request * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_SendGoal_Request *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__fini(tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence *
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * array = (tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__destroy(tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * input,
  tutorial_interfaces__action__MoveRobot_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_SendGoal_Request * data =
      (tutorial_interfaces__action__MoveRobot_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__init(tutorial_interfaces__action__MoveRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(tutorial_interfaces__action__MoveRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__are_equal(const tutorial_interfaces__action__MoveRobot_SendGoal_Response * lhs, const tutorial_interfaces__action__MoveRobot_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__copy(
  const tutorial_interfaces__action__MoveRobot_SendGoal_Response * input,
  tutorial_interfaces__action__MoveRobot_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_SendGoal_Response *
tutorial_interfaces__action__MoveRobot_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Response * msg = (tutorial_interfaces__action__MoveRobot_SendGoal_Response *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Response));
  bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Response__destroy(tutorial_interfaces__action__MoveRobot_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__init(tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Response * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_SendGoal_Response *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__fini(tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence *
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * array = (tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__destroy(tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * input,
  tutorial_interfaces__action__MoveRobot_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_SendGoal_Response * data =
      (tutorial_interfaces__action__MoveRobot_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__init(tutorial_interfaces__action__MoveRobot_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(tutorial_interfaces__action__MoveRobot_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__are_equal(const tutorial_interfaces__action__MoveRobot_GetResult_Request * lhs, const tutorial_interfaces__action__MoveRobot_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__copy(
  const tutorial_interfaces__action__MoveRobot_GetResult_Request * input,
  tutorial_interfaces__action__MoveRobot_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_GetResult_Request *
tutorial_interfaces__action__MoveRobot_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Request * msg = (tutorial_interfaces__action__MoveRobot_GetResult_Request *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Request));
  bool success = tutorial_interfaces__action__MoveRobot_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Request__destroy(tutorial_interfaces__action__MoveRobot_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__init(tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Request * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_GetResult_Request *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__fini(tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence *
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * array = (tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__destroy(tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * input,
  tutorial_interfaces__action__MoveRobot_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_GetResult_Request * data =
      (tutorial_interfaces__action__MoveRobot_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "tutorial_interfaces/action/detail/move_robot__functions.h"

bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__init(tutorial_interfaces__action__MoveRobot_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!tutorial_interfaces__action__MoveRobot_Result__init(&msg->result)) {
    tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(tutorial_interfaces__action__MoveRobot_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  tutorial_interfaces__action__MoveRobot_Result__fini(&msg->result);
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__are_equal(const tutorial_interfaces__action__MoveRobot_GetResult_Response * lhs, const tutorial_interfaces__action__MoveRobot_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!tutorial_interfaces__action__MoveRobot_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__copy(
  const tutorial_interfaces__action__MoveRobot_GetResult_Response * input,
  tutorial_interfaces__action__MoveRobot_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!tutorial_interfaces__action__MoveRobot_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_GetResult_Response *
tutorial_interfaces__action__MoveRobot_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Response * msg = (tutorial_interfaces__action__MoveRobot_GetResult_Response *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Response));
  bool success = tutorial_interfaces__action__MoveRobot_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Response__destroy(tutorial_interfaces__action__MoveRobot_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__init(tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Response * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_GetResult_Response *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__fini(tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence *
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * array = (tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__destroy(tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * input,
  tutorial_interfaces__action__MoveRobot_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_GetResult_Response * data =
      (tutorial_interfaces__action__MoveRobot_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "tutorial_interfaces/action/detail/move_robot__functions.h"

bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__init(tutorial_interfaces__action__MoveRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!tutorial_interfaces__action__MoveRobot_Feedback__init(&msg->feedback)) {
    tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(tutorial_interfaces__action__MoveRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  tutorial_interfaces__action__MoveRobot_Feedback__fini(&msg->feedback);
}

bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__are_equal(const tutorial_interfaces__action__MoveRobot_FeedbackMessage * lhs, const tutorial_interfaces__action__MoveRobot_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tutorial_interfaces__action__MoveRobot_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__copy(
  const tutorial_interfaces__action__MoveRobot_FeedbackMessage * input,
  tutorial_interfaces__action__MoveRobot_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!tutorial_interfaces__action__MoveRobot_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__action__MoveRobot_FeedbackMessage *
tutorial_interfaces__action__MoveRobot_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_FeedbackMessage * msg = (tutorial_interfaces__action__MoveRobot_FeedbackMessage *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__action__MoveRobot_FeedbackMessage));
  bool success = tutorial_interfaces__action__MoveRobot_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__action__MoveRobot_FeedbackMessage__destroy(tutorial_interfaces__action__MoveRobot_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__init(tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_FeedbackMessage * data = NULL;

  if (size) {
    data = (tutorial_interfaces__action__MoveRobot_FeedbackMessage *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__action__MoveRobot_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__action__MoveRobot_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__fini(tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence *
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * array = (tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__destroy(tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__are_equal(const tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * lhs, const tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence__copy(
  const tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * input,
  tutorial_interfaces__action__MoveRobot_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__action__MoveRobot_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__action__MoveRobot_FeedbackMessage * data =
      (tutorial_interfaces__action__MoveRobot_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__action__MoveRobot_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__action__MoveRobot_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__action__MoveRobot_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
