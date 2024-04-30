# generated from rosidl_generator_py/resource/_idl.py.em
# with input from solver_untils:msg/ParmRob.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParmRob(type):
    """Metaclass of message 'ParmRob'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('solver_untils')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'solver_untils.msg.ParmRob')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parm_rob
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parm_rob
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parm_rob
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parm_rob
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parm_rob

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParmRob(metaclass=Metaclass_ParmRob):
    """Message class 'ParmRob'."""

    __slots__ = [
        '_speed_mr',
        '_speed_ml',
        '_encoder_mr',
        '_encoder_ml',
    ]

    _fields_and_field_types = {
        'speed_mr': 'int16',
        'speed_ml': 'int16',
        'encoder_mr': 'int64',
        'encoder_ml': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_mr = kwargs.get('speed_mr', int())
        self.speed_ml = kwargs.get('speed_ml', int())
        self.encoder_mr = kwargs.get('encoder_mr', int())
        self.encoder_ml = kwargs.get('encoder_ml', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.speed_mr != other.speed_mr:
            return False
        if self.speed_ml != other.speed_ml:
            return False
        if self.encoder_mr != other.encoder_mr:
            return False
        if self.encoder_ml != other.encoder_ml:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_mr(self):
        """Message field 'speed_mr'."""
        return self._speed_mr

    @speed_mr.setter
    def speed_mr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_mr' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'speed_mr' field must be an integer in [-32768, 32767]"
        self._speed_mr = value

    @builtins.property
    def speed_ml(self):
        """Message field 'speed_ml'."""
        return self._speed_ml

    @speed_ml.setter
    def speed_ml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_ml' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'speed_ml' field must be an integer in [-32768, 32767]"
        self._speed_ml = value

    @builtins.property
    def encoder_mr(self):
        """Message field 'encoder_mr'."""
        return self._encoder_mr

    @encoder_mr.setter
    def encoder_mr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encoder_mr' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'encoder_mr' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._encoder_mr = value

    @builtins.property
    def encoder_ml(self):
        """Message field 'encoder_ml'."""
        return self._encoder_ml

    @encoder_ml.setter
    def encoder_ml(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encoder_ml' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'encoder_ml' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._encoder_ml = value
