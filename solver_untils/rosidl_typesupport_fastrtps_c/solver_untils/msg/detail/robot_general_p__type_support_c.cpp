// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/robot_general_p__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "solver_untils/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "solver_untils/msg/detail/robot_general_p__struct.h"
#include "solver_untils/msg/detail/robot_general_p__functions.h"
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

#include "rosidl_runtime_c/string.h"  // regulatorstate, statedata
#include "rosidl_runtime_c/string_functions.h"  // regulatorstate, statedata

// forward declare type support functions


using _RobotGeneralP__ros_msg_type = solver_untils__msg__RobotGeneralP;

static bool _RobotGeneralP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotGeneralP__ros_msg_type * ros_message = static_cast<const _RobotGeneralP__ros_msg_type *>(untyped_ros_message);
  // Field name: statedata
  {
    const rosidl_runtime_c__String * str = &ros_message->statedata;
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

  // Field name: version
  {
    cdr << ros_message->version;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: aceleration
  {
    cdr << ros_message->aceleration;
  }

  // Field name: regulatorstate
  {
    const rosidl_runtime_c__String * str = &ros_message->regulatorstate;
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

  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  return true;
}

static bool _RobotGeneralP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotGeneralP__ros_msg_type * ros_message = static_cast<_RobotGeneralP__ros_msg_type *>(untyped_ros_message);
  // Field name: statedata
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->statedata.data) {
      rosidl_runtime_c__String__init(&ros_message->statedata);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->statedata,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'statedata'\n");
      return false;
    }
  }

  // Field name: version
  {
    cdr >> ros_message->version;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: aceleration
  {
    cdr >> ros_message->aceleration;
  }

  // Field name: regulatorstate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->regulatorstate.data) {
      rosidl_runtime_c__String__init(&ros_message->regulatorstate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->regulatorstate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'regulatorstate'\n");
      return false;
    }
  }

  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_solver_untils
size_t get_serialized_size_solver_untils__msg__RobotGeneralP(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotGeneralP__ros_msg_type * ros_message = static_cast<const _RobotGeneralP__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name statedata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->statedata.size + 1);
  // field.name version
  {
    size_t item_size = sizeof(ros_message->version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aceleration
  {
    size_t item_size = sizeof(ros_message->aceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name regulatorstate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->regulatorstate.size + 1);
  // field.name voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotGeneralP__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_solver_untils__msg__RobotGeneralP(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_solver_untils
size_t max_serialized_size_solver_untils__msg__RobotGeneralP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: statedata
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
  // member: version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: regulatorstate
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
  // member: voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = solver_untils__msg__RobotGeneralP;
    is_plain =
      (
      offsetof(DataType, voltage) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotGeneralP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_solver_untils__msg__RobotGeneralP(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotGeneralP = {
  "solver_untils::msg",
  "RobotGeneralP",
  _RobotGeneralP__cdr_serialize,
  _RobotGeneralP__cdr_deserialize,
  _RobotGeneralP__get_serialized_size,
  _RobotGeneralP__max_serialized_size
};

static rosidl_message_type_support_t _RobotGeneralP__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotGeneralP,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, solver_untils, msg, RobotGeneralP)() {
  return &_RobotGeneralP__type_support;
}

#if defined(__cplusplus)
}
#endif
