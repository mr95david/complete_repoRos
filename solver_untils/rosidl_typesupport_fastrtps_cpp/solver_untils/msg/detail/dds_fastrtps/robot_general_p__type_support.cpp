// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/robot_general_p__rosidl_typesupport_fastrtps_cpp.hpp"
#include "solver_untils/msg/detail/robot_general_p__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace solver_untils
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
cdr_serialize(
  const solver_untils::msg::RobotGeneralP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: statedata
  cdr << ros_message.statedata;
  // Member: version
  cdr << ros_message.version;
  // Member: mode
  cdr << ros_message.mode;
  // Member: aceleration
  cdr << ros_message.aceleration;
  // Member: regulatorstate
  cdr << ros_message.regulatorstate;
  // Member: voltage
  cdr << ros_message.voltage;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  solver_untils::msg::RobotGeneralP & ros_message)
{
  // Member: statedata
  cdr >> ros_message.statedata;

  // Member: version
  cdr >> ros_message.version;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: aceleration
  cdr >> ros_message.aceleration;

  // Member: regulatorstate
  cdr >> ros_message.regulatorstate;

  // Member: voltage
  cdr >> ros_message.voltage;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
get_serialized_size(
  const solver_untils::msg::RobotGeneralP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: statedata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.statedata.size() + 1);
  // Member: version
  {
    size_t item_size = sizeof(ros_message.version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aceleration
  {
    size_t item_size = sizeof(ros_message.aceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: regulatorstate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.regulatorstate.size() + 1);
  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
max_serialized_size_RobotGeneralP(
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


  // Member: statedata
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

  // Member: version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: aceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: regulatorstate
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

  // Member: voltage
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
    using DataType = solver_untils::msg::RobotGeneralP;
    is_plain =
      (
      offsetof(DataType, voltage) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotGeneralP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const solver_untils::msg::RobotGeneralP *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotGeneralP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<solver_untils::msg::RobotGeneralP *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotGeneralP__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const solver_untils::msg::RobotGeneralP *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotGeneralP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotGeneralP(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotGeneralP__callbacks = {
  "solver_untils::msg",
  "RobotGeneralP",
  _RobotGeneralP__cdr_serialize,
  _RobotGeneralP__cdr_deserialize,
  _RobotGeneralP__get_serialized_size,
  _RobotGeneralP__max_serialized_size
};

static rosidl_message_type_support_t _RobotGeneralP__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotGeneralP__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace solver_untils

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_solver_untils
const rosidl_message_type_support_t *
get_message_type_support_handle<solver_untils::msg::RobotGeneralP>()
{
  return &solver_untils::msg::typesupport_fastrtps_cpp::_RobotGeneralP__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, solver_untils, msg, RobotGeneralP)() {
  return &solver_untils::msg::typesupport_fastrtps_cpp::_RobotGeneralP__handle;
}

#ifdef __cplusplus
}
#endif
