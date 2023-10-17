// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice

#ifndef MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_H_
#define MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'figura'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StringService in the package minimal_interfaces.
typedef struct minimal_interfaces__srv__StringService_Request
{
  rosidl_runtime_c__String figura;
} minimal_interfaces__srv__StringService_Request;

// Struct for a sequence of minimal_interfaces__srv__StringService_Request.
typedef struct minimal_interfaces__srv__StringService_Request__Sequence
{
  minimal_interfaces__srv__StringService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} minimal_interfaces__srv__StringService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'respuesta'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/StringService in the package minimal_interfaces.
typedef struct minimal_interfaces__srv__StringService_Response
{
  rosidl_runtime_c__String respuesta;
} minimal_interfaces__srv__StringService_Response;

// Struct for a sequence of minimal_interfaces__srv__StringService_Response.
typedef struct minimal_interfaces__srv__StringService_Response__Sequence
{
  minimal_interfaces__srv__StringService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} minimal_interfaces__srv__StringService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MINIMAL_INTERFACES__SRV__DETAIL__STRING_SERVICE__STRUCT_H_
