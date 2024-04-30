# generated from rosidl_generator_py/resource/_idl.py.em
# with input from solver_untils:msg/RobotGeneralP.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotGeneralP(type):
    """Metaclass of message 'RobotGeneralP'."""

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
                'solver_untils.msg.RobotGeneralP')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_general_p
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_general_p
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_general_p
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_general_p
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_general_p

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotGeneralP(metaclass=Metaclass_RobotGeneralP):
    """Message class 'RobotGeneralP'."""

    __slots__ = [
        '_statedata',
        '_version',
        '_mode',
        '_aceleration',
        '_regulatorstate',
        '_voltage',
    ]

    _fields_and_field_types = {
        'statedata': 'string',
        'version': 'int16',
        'mode': 'int16',
        'aceleration': 'int16',
        'regulatorstate': 'string',
        'voltage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.statedata = kwargs.get('statedata', str())
        self.version = kwargs.get('version', int())
        self.mode = kwargs.get('mode', int())
        self.aceleration = kwargs.get('aceleration', int())
        self.regulatorstate = kwargs.get('regulatorstate', str())
        self.voltage = kwargs.get('voltage', float())

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
        if self.statedata != other.statedata:
            return False
        if self.version != other.version:
            return False
        if self.mode != other.mode:
            return False
        if self.aceleration != other.aceleration:
            return False
        if self.regulatorstate != other.regulatorstate:
            return False
        if self.voltage != other.voltage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def statedata(self):
        """Message field 'statedata'."""
        return self._statedata

    @statedata.setter
    def statedata(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'statedata' field must be of type 'str'"
        self._statedata = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'version' field must be an integer in [-32768, 32767]"
        self._version = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'mode' field must be an integer in [-32768, 32767]"
        self._mode = value

    @builtins.property
    def aceleration(self):
        """Message field 'aceleration'."""
        return self._aceleration

    @aceleration.setter
    def aceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aceleration' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'aceleration' field must be an integer in [-32768, 32767]"
        self._aceleration = value

    @builtins.property
    def regulatorstate(self):
        """Message field 'regulatorstate'."""
        return self._regulatorstate

    @regulatorstate.setter
    def regulatorstate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'regulatorstate' field must be of type 'str'"
        self._regulatorstate = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage = value
