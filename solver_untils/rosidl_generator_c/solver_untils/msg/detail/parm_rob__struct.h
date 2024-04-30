// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_H_
#define SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ParmRob in the package solver_untils.
/**
  * Interfaz para publicar los parametros de velocidad y encoders obtenidos por el robot #
 */
typedef struct solver_untils__msg__ParmRob
{
  int16_t speed_mr;
  int16_t speed_ml;
  int64_t encoder_mr;
  int64_t encoder_ml;
} solver_untils__msg__ParmRob;

// Struct for a sequence of solver_untils__msg__ParmRob.
typedef struct solver_untils__msg__ParmRob__Sequence
{
  solver_untils__msg__ParmRob * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} solver_untils__msg__ParmRob__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__STRUCT_H_
