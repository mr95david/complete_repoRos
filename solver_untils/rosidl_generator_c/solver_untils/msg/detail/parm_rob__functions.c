// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from solver_untils:msg/ParmRob.idl
// generated code does not contain a copyright notice
#include "solver_untils/msg/detail/parm_rob__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
solver_untils__msg__ParmRob__init(solver_untils__msg__ParmRob * msg)
{
  if (!msg) {
    return false;
  }
  // speed_mr
  // speed_ml
  // encoder_mr
  // encoder_ml
  return true;
}

void
solver_untils__msg__ParmRob__fini(solver_untils__msg__ParmRob * msg)
{
  if (!msg) {
    return;
  }
  // speed_mr
  // speed_ml
  // encoder_mr
  // encoder_ml
}

bool
solver_untils__msg__ParmRob__are_equal(const solver_untils__msg__ParmRob * lhs, const solver_untils__msg__ParmRob * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_mr
  if (lhs->speed_mr != rhs->speed_mr) {
    return false;
  }
  // speed_ml
  if (lhs->speed_ml != rhs->speed_ml) {
    return false;
  }
  // encoder_mr
  if (lhs->encoder_mr != rhs->encoder_mr) {
    return false;
  }
  // encoder_ml
  if (lhs->encoder_ml != rhs->encoder_ml) {
    return false;
  }
  return true;
}

bool
solver_untils__msg__ParmRob__copy(
  const solver_untils__msg__ParmRob * input,
  solver_untils__msg__ParmRob * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_mr
  output->speed_mr = input->speed_mr;
  // speed_ml
  output->speed_ml = input->speed_ml;
  // encoder_mr
  output->encoder_mr = input->encoder_mr;
  // encoder_ml
  output->encoder_ml = input->encoder_ml;
  return true;
}

solver_untils__msg__ParmRob *
solver_untils__msg__ParmRob__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__ParmRob * msg = (solver_untils__msg__ParmRob *)allocator.allocate(sizeof(solver_untils__msg__ParmRob), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(solver_untils__msg__ParmRob));
  bool success = solver_untils__msg__ParmRob__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
solver_untils__msg__ParmRob__destroy(solver_untils__msg__ParmRob * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    solver_untils__msg__ParmRob__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
solver_untils__msg__ParmRob__Sequence__init(solver_untils__msg__ParmRob__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__ParmRob * data = NULL;

  if (size) {
    data = (solver_untils__msg__ParmRob *)allocator.zero_allocate(size, sizeof(solver_untils__msg__ParmRob), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = solver_untils__msg__ParmRob__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        solver_untils__msg__ParmRob__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
solver_untils__msg__ParmRob__Sequence__fini(solver_untils__msg__ParmRob__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      solver_untils__msg__ParmRob__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

solver_untils__msg__ParmRob__Sequence *
solver_untils__msg__ParmRob__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  solver_untils__msg__ParmRob__Sequence * array = (solver_untils__msg__ParmRob__Sequence *)allocator.allocate(sizeof(solver_untils__msg__ParmRob__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = solver_untils__msg__ParmRob__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
solver_untils__msg__ParmRob__Sequence__destroy(solver_untils__msg__ParmRob__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    solver_untils__msg__ParmRob__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
solver_untils__msg__ParmRob__Sequence__are_equal(const solver_untils__msg__ParmRob__Sequence * lhs, const solver_untils__msg__ParmRob__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!solver_untils__msg__ParmRob__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
solver_untils__msg__ParmRob__Sequence__copy(
  const solver_untils__msg__ParmRob__Sequence * input,
  solver_untils__msg__ParmRob__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(solver_untils__msg__ParmRob);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    solver_untils__msg__ParmRob * data =
      (solver_untils__msg__ParmRob *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!solver_untils__msg__ParmRob__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          solver_untils__msg__ParmRob__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!solver_untils__msg__ParmRob__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
