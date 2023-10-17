// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice
#include "minimal_interfaces/srv/detail/string_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `figura`
#include "rosidl_runtime_c/string_functions.h"

bool
minimal_interfaces__srv__StringService_Request__init(minimal_interfaces__srv__StringService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // figura
  if (!rosidl_runtime_c__String__init(&msg->figura)) {
    minimal_interfaces__srv__StringService_Request__fini(msg);
    return false;
  }
  return true;
}

void
minimal_interfaces__srv__StringService_Request__fini(minimal_interfaces__srv__StringService_Request * msg)
{
  if (!msg) {
    return;
  }
  // figura
  rosidl_runtime_c__String__fini(&msg->figura);
}

bool
minimal_interfaces__srv__StringService_Request__are_equal(const minimal_interfaces__srv__StringService_Request * lhs, const minimal_interfaces__srv__StringService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // figura
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->figura), &(rhs->figura)))
  {
    return false;
  }
  return true;
}

bool
minimal_interfaces__srv__StringService_Request__copy(
  const minimal_interfaces__srv__StringService_Request * input,
  minimal_interfaces__srv__StringService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // figura
  if (!rosidl_runtime_c__String__copy(
      &(input->figura), &(output->figura)))
  {
    return false;
  }
  return true;
}

minimal_interfaces__srv__StringService_Request *
minimal_interfaces__srv__StringService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Request * msg = (minimal_interfaces__srv__StringService_Request *)allocator.allocate(sizeof(minimal_interfaces__srv__StringService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(minimal_interfaces__srv__StringService_Request));
  bool success = minimal_interfaces__srv__StringService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
minimal_interfaces__srv__StringService_Request__destroy(minimal_interfaces__srv__StringService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    minimal_interfaces__srv__StringService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
minimal_interfaces__srv__StringService_Request__Sequence__init(minimal_interfaces__srv__StringService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Request * data = NULL;

  if (size) {
    data = (minimal_interfaces__srv__StringService_Request *)allocator.zero_allocate(size, sizeof(minimal_interfaces__srv__StringService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = minimal_interfaces__srv__StringService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        minimal_interfaces__srv__StringService_Request__fini(&data[i - 1]);
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
minimal_interfaces__srv__StringService_Request__Sequence__fini(minimal_interfaces__srv__StringService_Request__Sequence * array)
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
      minimal_interfaces__srv__StringService_Request__fini(&array->data[i]);
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

minimal_interfaces__srv__StringService_Request__Sequence *
minimal_interfaces__srv__StringService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Request__Sequence * array = (minimal_interfaces__srv__StringService_Request__Sequence *)allocator.allocate(sizeof(minimal_interfaces__srv__StringService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = minimal_interfaces__srv__StringService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
minimal_interfaces__srv__StringService_Request__Sequence__destroy(minimal_interfaces__srv__StringService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    minimal_interfaces__srv__StringService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
minimal_interfaces__srv__StringService_Request__Sequence__are_equal(const minimal_interfaces__srv__StringService_Request__Sequence * lhs, const minimal_interfaces__srv__StringService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!minimal_interfaces__srv__StringService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
minimal_interfaces__srv__StringService_Request__Sequence__copy(
  const minimal_interfaces__srv__StringService_Request__Sequence * input,
  minimal_interfaces__srv__StringService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(minimal_interfaces__srv__StringService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    minimal_interfaces__srv__StringService_Request * data =
      (minimal_interfaces__srv__StringService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!minimal_interfaces__srv__StringService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          minimal_interfaces__srv__StringService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!minimal_interfaces__srv__StringService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `respuesta`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
minimal_interfaces__srv__StringService_Response__init(minimal_interfaces__srv__StringService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // respuesta
  if (!rosidl_runtime_c__String__init(&msg->respuesta)) {
    minimal_interfaces__srv__StringService_Response__fini(msg);
    return false;
  }
  return true;
}

void
minimal_interfaces__srv__StringService_Response__fini(minimal_interfaces__srv__StringService_Response * msg)
{
  if (!msg) {
    return;
  }
  // respuesta
  rosidl_runtime_c__String__fini(&msg->respuesta);
}

bool
minimal_interfaces__srv__StringService_Response__are_equal(const minimal_interfaces__srv__StringService_Response * lhs, const minimal_interfaces__srv__StringService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // respuesta
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->respuesta), &(rhs->respuesta)))
  {
    return false;
  }
  return true;
}

bool
minimal_interfaces__srv__StringService_Response__copy(
  const minimal_interfaces__srv__StringService_Response * input,
  minimal_interfaces__srv__StringService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // respuesta
  if (!rosidl_runtime_c__String__copy(
      &(input->respuesta), &(output->respuesta)))
  {
    return false;
  }
  return true;
}

minimal_interfaces__srv__StringService_Response *
minimal_interfaces__srv__StringService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Response * msg = (minimal_interfaces__srv__StringService_Response *)allocator.allocate(sizeof(minimal_interfaces__srv__StringService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(minimal_interfaces__srv__StringService_Response));
  bool success = minimal_interfaces__srv__StringService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
minimal_interfaces__srv__StringService_Response__destroy(minimal_interfaces__srv__StringService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    minimal_interfaces__srv__StringService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
minimal_interfaces__srv__StringService_Response__Sequence__init(minimal_interfaces__srv__StringService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Response * data = NULL;

  if (size) {
    data = (minimal_interfaces__srv__StringService_Response *)allocator.zero_allocate(size, sizeof(minimal_interfaces__srv__StringService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = minimal_interfaces__srv__StringService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        minimal_interfaces__srv__StringService_Response__fini(&data[i - 1]);
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
minimal_interfaces__srv__StringService_Response__Sequence__fini(minimal_interfaces__srv__StringService_Response__Sequence * array)
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
      minimal_interfaces__srv__StringService_Response__fini(&array->data[i]);
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

minimal_interfaces__srv__StringService_Response__Sequence *
minimal_interfaces__srv__StringService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  minimal_interfaces__srv__StringService_Response__Sequence * array = (minimal_interfaces__srv__StringService_Response__Sequence *)allocator.allocate(sizeof(minimal_interfaces__srv__StringService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = minimal_interfaces__srv__StringService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
minimal_interfaces__srv__StringService_Response__Sequence__destroy(minimal_interfaces__srv__StringService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    minimal_interfaces__srv__StringService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
minimal_interfaces__srv__StringService_Response__Sequence__are_equal(const minimal_interfaces__srv__StringService_Response__Sequence * lhs, const minimal_interfaces__srv__StringService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!minimal_interfaces__srv__StringService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
minimal_interfaces__srv__StringService_Response__Sequence__copy(
  const minimal_interfaces__srv__StringService_Response__Sequence * input,
  minimal_interfaces__srv__StringService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(minimal_interfaces__srv__StringService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    minimal_interfaces__srv__StringService_Response * data =
      (minimal_interfaces__srv__StringService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!minimal_interfaces__srv__StringService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          minimal_interfaces__srv__StringService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!minimal_interfaces__srv__StringService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
