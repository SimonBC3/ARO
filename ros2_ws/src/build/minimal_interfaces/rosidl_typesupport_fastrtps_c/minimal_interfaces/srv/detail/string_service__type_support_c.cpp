// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from minimal_interfaces:srv/StringService.idl
// generated code does not contain a copyright notice
#include "minimal_interfaces/srv/detail/string_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "minimal_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "minimal_interfaces/srv/detail/string_service__struct.h"
#include "minimal_interfaces/srv/detail/string_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // figura
#include "rosidl_runtime_c/string_functions.h"  // figura

// forward declare type support functions


using _StringService_Request__ros_msg_type = minimal_interfaces__srv__StringService_Request;

static bool _StringService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StringService_Request__ros_msg_type * ros_message = static_cast<const _StringService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: figura
  {
    const rosidl_runtime_c__String * str = &ros_message->figura;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _StringService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StringService_Request__ros_msg_type * ros_message = static_cast<_StringService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: figura
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->figura.data) {
      rosidl_runtime_c__String__init(&ros_message->figura);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->figura,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'figura'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_minimal_interfaces
size_t get_serialized_size_minimal_interfaces__srv__StringService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StringService_Request__ros_msg_type * ros_message = static_cast<const _StringService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name figura
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->figura.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _StringService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_minimal_interfaces__srv__StringService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_minimal_interfaces
size_t max_serialized_size_minimal_interfaces__srv__StringService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: figura
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StringService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_minimal_interfaces__srv__StringService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StringService_Request = {
  "minimal_interfaces::srv",
  "StringService_Request",
  _StringService_Request__cdr_serialize,
  _StringService_Request__cdr_deserialize,
  _StringService_Request__get_serialized_size,
  _StringService_Request__max_serialized_size
};

static rosidl_message_type_support_t _StringService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StringService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, minimal_interfaces, srv, StringService_Request)() {
  return &_StringService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "minimal_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "minimal_interfaces/srv/detail/string_service__struct.h"
// already included above
// #include "minimal_interfaces/srv/detail/string_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // respuesta
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // respuesta

// forward declare type support functions


using _StringService_Response__ros_msg_type = minimal_interfaces__srv__StringService_Response;

static bool _StringService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StringService_Response__ros_msg_type * ros_message = static_cast<const _StringService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: respuesta
  {
    const rosidl_runtime_c__String * str = &ros_message->respuesta;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _StringService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StringService_Response__ros_msg_type * ros_message = static_cast<_StringService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: respuesta
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->respuesta.data) {
      rosidl_runtime_c__String__init(&ros_message->respuesta);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->respuesta,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'respuesta'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_minimal_interfaces
size_t get_serialized_size_minimal_interfaces__srv__StringService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StringService_Response__ros_msg_type * ros_message = static_cast<const _StringService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name respuesta
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->respuesta.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _StringService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_minimal_interfaces__srv__StringService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_minimal_interfaces
size_t max_serialized_size_minimal_interfaces__srv__StringService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: respuesta
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _StringService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_minimal_interfaces__srv__StringService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StringService_Response = {
  "minimal_interfaces::srv",
  "StringService_Response",
  _StringService_Response__cdr_serialize,
  _StringService_Response__cdr_deserialize,
  _StringService_Response__get_serialized_size,
  _StringService_Response__max_serialized_size
};

static rosidl_message_type_support_t _StringService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StringService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, minimal_interfaces, srv, StringService_Response)() {
  return &_StringService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "minimal_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "minimal_interfaces/srv/string_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StringService__callbacks = {
  "minimal_interfaces::srv",
  "StringService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, minimal_interfaces, srv, StringService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, minimal_interfaces, srv, StringService_Response)(),
};

static rosidl_service_type_support_t StringService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StringService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, minimal_interfaces, srv, StringService)() {
  return &StringService__handle;
}

#if defined(__cplusplus)
}
#endif
