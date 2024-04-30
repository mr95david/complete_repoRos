// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from solver_untils:msg/MotorOrder.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/motor_order__rosidl_typesupport_fastrtps_cpp.hpp"
#include "solver_untils/msg/detail/motor_order__struct.hpp"

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
  const solver_untils::msg::MotorOrder & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: m_value_1
  cdr << ros_message.m_value_1;
  // Member: m_value_2
  cdr << ros_message.m_value_2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  solver_untils::msg::MotorOrder & ros_message)
{
  // Member: m_value_1
  cdr >> ros_message.m_value_1;

  // Member: m_value_2
  cdr >> ros_message.m_value_2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
get_serialized_size(
  const solver_untils::msg::MotorOrder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: m_value_1
  {
    size_t item_size = sizeof(ros_message.m_value_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: m_value_2
  {
    size_t item_size = sizeof(ros_message.m_value_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_solver_untils
max_serialized_size_MotorOrder(
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


  // Member: m_value_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: m_value_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = solver_untils::msg::MotorOrder;
    is_plain =
      (
      offsetof(DataType, m_value_2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorOrder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const solver_untils::msg::MotorOrder *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorOrder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<solver_untils::msg::MotorOrder *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorOrder__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const solver_untils::msg::MotorOrder *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorOrder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorOrder(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorOrder__callbacks = {
  "solver_untils::msg",
  "MotorOrder",
  _MotorOrder__cdr_serialize,
  _MotorOrder__cdr_deserialize,
  _MotorOrder__get_serialized_size,
  _MotorOrder__max_serialized_size
};

static rosidl_message_type_support_t _MotorOrder__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorOrder__callbacks,
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
get_message_type_support_handle<solver_untils::msg::MotorOrder>()
{
  return &solver_untils::msg::typesupport_fastrtps_cpp::_MotorOrder__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, solver_untils, msg, MotorOrder)() {
  return &solver_untils::msg::typesupport_fastrtps_cpp::_MotorOrder__handle;
}

#ifdef __cplusplus
}
#endif
