// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from solver_untils:msg/RobotGeneralP.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_H_
#define SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'statedata'
// Member 'regulatorstate'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotGeneralP in the package solver_untils.
/**
  * Interfaz para publicacion de estado actual de robot
 */
typedef struct solver_untils__msg__RobotGeneralP
{
  rosidl_runtime_c__String statedata;
  int16_t version;
  int16_t mode;
  int16_t aceleration;
  rosidl_runtime_c__String regulatorstate;
  float voltage;
} solver_untils__msg__RobotGeneralP;

// Struct for a sequence of solver_untils__msg__RobotGeneralP.
typedef struct solver_untils__msg__RobotGeneralP__Sequence
{
  solver_untils__msg__RobotGeneralP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} solver_untils__msg__RobotGeneralP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__ROBOT_GENERAL_P__STRUCT_H_
