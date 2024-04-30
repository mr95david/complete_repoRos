// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice

#ifndef SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__FUNCTIONS_H_
#define SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "solver_untils/msg/rosidl_generator_c__visibility_control.h"

#include "solver_untils/msg/detail/parm_rob__struct.h"

/// Initialize msg/ParmRob message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * solver_untils__msg__ParmRob
 * )) before or use
 * solver_untils__msg__ParmRob__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__init(solver_untils__msg__ParmRob * msg);

/// Finalize msg/ParmRob message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__ParmRob__fini(solver_untils__msg__ParmRob * msg);

/// Create msg/ParmRob message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * solver_untils__msg__ParmRob__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
solver_untils__msg__ParmRob *
solver_untils__msg__ParmRob__create();

/// Destroy msg/ParmRob message.
/**
 * It calls
 * solver_untils__msg__ParmRob__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__ParmRob__destroy(solver_untils__msg__ParmRob * msg);

/// Check for msg/ParmRob message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__are_equal(const solver_untils__msg__ParmRob * lhs, const solver_untils__msg__ParmRob * rhs);

/// Copy a msg/ParmRob message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__copy(
  const solver_untils__msg__ParmRob * input,
  solver_untils__msg__ParmRob * output);

/// Initialize array of msg/ParmRob messages.
/**
 * It allocates the memory for the number of elements and calls
 * solver_untils__msg__ParmRob__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__Sequence__init(solver_untils__msg__ParmRob__Sequence * array, size_t size);

/// Finalize array of msg/ParmRob messages.
/**
 * It calls
 * solver_untils__msg__ParmRob__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__ParmRob__Sequence__fini(solver_untils__msg__ParmRob__Sequence * array);

/// Create array of msg/ParmRob messages.
/**
 * It allocates the memory for the array and calls
 * solver_untils__msg__ParmRob__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
solver_untils__msg__ParmRob__Sequence *
solver_untils__msg__ParmRob__Sequence__create(size_t size);

/// Destroy array of msg/ParmRob messages.
/**
 * It calls
 * solver_untils__msg__ParmRob__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
void
solver_untils__msg__ParmRob__Sequence__destroy(solver_untils__msg__ParmRob__Sequence * array);

/// Check for msg/ParmRob message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__Sequence__are_equal(const solver_untils__msg__ParmRob__Sequence * lhs, const solver_untils__msg__ParmRob__Sequence * rhs);

/// Copy an array of msg/ParmRob messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_solver_untils
bool
solver_untils__msg__ParmRob__Sequence__copy(
  const solver_untils__msg__ParmRob__Sequence * input,
  solver_untils__msg__ParmRob__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOLVER_UNTILS__MSG__DETAIL__PARM_ROB__FUNCTIONS_H_
