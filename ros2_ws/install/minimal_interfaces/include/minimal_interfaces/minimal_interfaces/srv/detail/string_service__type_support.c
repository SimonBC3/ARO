// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "minimal_interfaces/srv/detail/string_service__rosidl_typesupport_introspection_c.h"
#include "minimal_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "minimal_interfaces/srv/detail/string_service__functions.h"
#include "minimal_interfaces/srv/detail/string_service__struct.h"


// Include directives for member types
// Member `figura`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  minimal_interfaces__srv__StringService_Request__init(message_memory);
}

void minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_fini_function(void * message_memory)
{
  minimal_interfaces__srv__StringService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_member_array[1] = {
  {
    "figura",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(minimal_interfaces__srv__StringService_Request, figura),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_members = {
  "minimal_interfaces__srv",  // message namespace
  "StringService_Request",  // message name
  1,  // number of fields
  sizeof(minimal_interfaces__srv__StringService_Request),
  minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_member_array,  // message members
  minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_type_support_handle = {
  0,
  &minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_minimal_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Request)() {
  if (!minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_type_support_handle.typesupport_identifier) {
    minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &minimal_interfaces__srv__StringService_Request__rosidl_typesupport_introspection_c__StringService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "minimal_interfaces/srv/detail/string_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "minimal_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "minimal_interfaces/srv/detail/string_service__functions.h"
// already included above
// #include "minimal_interfaces/srv/detail/string_service__struct.h"


// Include directives for member types
// Member `respuesta`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  minimal_interfaces__srv__StringService_Response__init(message_memory);
}

void minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_fini_function(void * message_memory)
{
  minimal_interfaces__srv__StringService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_member_array[1] = {
  {
    "respuesta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(minimal_interfaces__srv__StringService_Response, respuesta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_members = {
  "minimal_interfaces__srv",  // message namespace
  "StringService_Response",  // message name
  1,  // number of fields
  sizeof(minimal_interfaces__srv__StringService_Response),
  minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_member_array,  // message members
  minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_type_support_handle = {
  0,
  &minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_minimal_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Response)() {
  if (!minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_type_support_handle.typesupport_identifier) {
    minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &minimal_interfaces__srv__StringService_Response__rosidl_typesupport_introspection_c__StringService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "minimal_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "minimal_interfaces/srv/detail/string_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_members = {
  "minimal_interfaces__srv",  // service namespace
  "StringService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_Request_message_type_support_handle,
  NULL  // response message
  // minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_Response_message_type_support_handle
};

static rosidl_service_type_support_t minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_type_support_handle = {
  0,
  &minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_minimal_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService)() {
  if (!minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_type_support_handle.typesupport_identifier) {
    minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minimal_interfaces, srv, StringService_Response)()->data;
  }

  return &minimal_interfaces__srv__detail__string_service__rosidl_typesupport_introspection_c__StringService_service_type_support_handle;
}
