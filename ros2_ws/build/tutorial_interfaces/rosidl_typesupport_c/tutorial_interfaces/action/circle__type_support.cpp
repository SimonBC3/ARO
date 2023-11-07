// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:action/Circle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_interfaces/action/detail/circle__struct.h"
#include "tutorial_interfaces/action/detail/circle__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_Goal_type_support_ids_t;

static const _Circle_Goal_type_support_ids_t _Circle_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_Goal_type_support_symbol_names_t _Circle_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_Goal)),
  }
};

typedef struct _Circle_Goal_type_support_data_t
{
  void * data[2];
} _Circle_Goal_type_support_data_t;

static _Circle_Goal_type_support_data_t _Circle_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_Goal_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_Goal)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_Result_type_support_ids_t;

static const _Circle_Result_type_support_ids_t _Circle_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_Result_type_support_symbol_names_t _Circle_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_Result)),
  }
};

typedef struct _Circle_Result_type_support_data_t
{
  void * data[2];
} _Circle_Result_type_support_data_t;

static _Circle_Result_type_support_data_t _Circle_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_Result_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_Result)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_Feedback_type_support_ids_t;

static const _Circle_Feedback_type_support_ids_t _Circle_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_Feedback_type_support_symbol_names_t _Circle_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_Feedback)),
  }
};

typedef struct _Circle_Feedback_type_support_data_t
{
  void * data[2];
} _Circle_Feedback_type_support_data_t;

static _Circle_Feedback_type_support_data_t _Circle_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_Feedback_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_Feedback)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_SendGoal_Request_type_support_ids_t;

static const _Circle_SendGoal_Request_type_support_ids_t _Circle_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_SendGoal_Request_type_support_symbol_names_t _Circle_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_SendGoal_Request)),
  }
};

typedef struct _Circle_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Circle_SendGoal_Request_type_support_data_t;

static _Circle_SendGoal_Request_type_support_data_t _Circle_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_SendGoal_Request_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_SendGoal_Request)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_SendGoal_Response_type_support_ids_t;

static const _Circle_SendGoal_Response_type_support_ids_t _Circle_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_SendGoal_Response_type_support_symbol_names_t _Circle_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_SendGoal_Response)),
  }
};

typedef struct _Circle_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Circle_SendGoal_Response_type_support_data_t;

static _Circle_SendGoal_Response_type_support_data_t _Circle_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_SendGoal_Response_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_SendGoal_Response)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_SendGoal_type_support_ids_t;

static const _Circle_SendGoal_type_support_ids_t _Circle_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_SendGoal_type_support_symbol_names_t _Circle_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_SendGoal)),
  }
};

typedef struct _Circle_SendGoal_type_support_data_t
{
  void * data[2];
} _Circle_SendGoal_type_support_data_t;

static _Circle_SendGoal_type_support_data_t _Circle_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_SendGoal_service_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Circle_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Circle_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Circle_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_SendGoal)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_GetResult_Request_type_support_ids_t;

static const _Circle_GetResult_Request_type_support_ids_t _Circle_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_GetResult_Request_type_support_symbol_names_t _Circle_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_GetResult_Request)),
  }
};

typedef struct _Circle_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Circle_GetResult_Request_type_support_data_t;

static _Circle_GetResult_Request_type_support_data_t _Circle_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_GetResult_Request_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_GetResult_Request)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_GetResult_Response_type_support_ids_t;

static const _Circle_GetResult_Response_type_support_ids_t _Circle_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_GetResult_Response_type_support_symbol_names_t _Circle_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_GetResult_Response)),
  }
};

typedef struct _Circle_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Circle_GetResult_Response_type_support_data_t;

static _Circle_GetResult_Response_type_support_data_t _Circle_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_GetResult_Response_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_GetResult_Response)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_GetResult_type_support_ids_t;

static const _Circle_GetResult_type_support_ids_t _Circle_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_GetResult_type_support_symbol_names_t _Circle_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_GetResult)),
  }
};

typedef struct _Circle_GetResult_type_support_data_t
{
  void * data[2];
} _Circle_GetResult_type_support_data_t;

static _Circle_GetResult_type_support_data_t _Circle_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_GetResult_service_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Circle_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Circle_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Circle_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_GetResult)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__struct.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Circle_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Circle_FeedbackMessage_type_support_ids_t;

static const _Circle_FeedbackMessage_type_support_ids_t _Circle_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Circle_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Circle_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Circle_FeedbackMessage_type_support_symbol_names_t _Circle_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, action, Circle_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, action, Circle_FeedbackMessage)),
  }
};

typedef struct _Circle_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Circle_FeedbackMessage_type_support_data_t;

static _Circle_FeedbackMessage_type_support_data_t _Circle_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Circle_FeedbackMessage_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_Circle_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Circle_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Circle_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Circle_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Circle_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, action, Circle_FeedbackMessage)() {
  return &::tutorial_interfaces::action::rosidl_typesupport_c::Circle_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "tutorial_interfaces/action/circle.h"
// already included above
// #include "tutorial_interfaces/action/detail/circle__type_support.h"

static rosidl_action_type_support_t _tutorial_interfaces__action__Circle__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, tutorial_interfaces, action, Circle)()
{
  // Thread-safe by always writing the same values to the static struct
  _tutorial_interfaces__action__Circle__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, Circle_SendGoal)();
  _tutorial_interfaces__action__Circle__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, Circle_GetResult)();
  _tutorial_interfaces__action__Circle__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _tutorial_interfaces__action__Circle__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, tutorial_interfaces, action, Circle_FeedbackMessage)();
  _tutorial_interfaces__action__Circle__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_tutorial_interfaces__action__Circle__typesupport_c;
}

#ifdef __cplusplus
}
#endif
