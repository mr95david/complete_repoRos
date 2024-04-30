#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "solver_untils::solver_untils__rosidl_generator_py" for configuration ""
set_property(TARGET solver_untils::solver_untils__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(solver_untils::solver_untils__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsolver_untils__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libsolver_untils__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS solver_untils::solver_untils__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_solver_untils::solver_untils__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libsolver_untils__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
