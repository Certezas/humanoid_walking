# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_offset_tuner_msgs:msg/JointOffsetPositionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointOffsetPositionData(type):
    """Metaclass of message 'JointOffsetPositionData'."""

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
            module = import_type_support('op3_offset_tuner_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_offset_tuner_msgs.msg.JointOffsetPositionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_offset_position_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_offset_position_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_offset_position_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_offset_position_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_offset_position_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointOffsetPositionData(metaclass=Metaclass_JointOffsetPositionData):
    """Message class 'JointOffsetPositionData'."""

    __slots__ = [
        '_joint_name',
        '_goal_value',
        '_offset_value',
        '_present_value',
        '_p_gain',
        '_i_gain',
        '_d_gain',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'goal_value': 'double',
        'offset_value': 'double',
        'present_value': 'double',
        'p_gain': 'int32',
        'i_gain': 'int32',
        'd_gain': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.goal_value = kwargs.get('goal_value', float())
        self.offset_value = kwargs.get('offset_value', float())
        self.present_value = kwargs.get('present_value', float())
        self.p_gain = kwargs.get('p_gain', int())
        self.i_gain = kwargs.get('i_gain', int())
        self.d_gain = kwargs.get('d_gain', int())

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
        if self.joint_name != other.joint_name:
            return False
        if self.goal_value != other.goal_value:
            return False
        if self.offset_value != other.offset_value:
            return False
        if self.present_value != other.present_value:
            return False
        if self.p_gain != other.p_gain:
            return False
        if self.i_gain != other.i_gain:
            return False
        if self.d_gain != other.d_gain:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @builtins.property
    def goal_value(self):
        """Message field 'goal_value'."""
        return self._goal_value

    @goal_value.setter
    def goal_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'goal_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._goal_value = value

    @builtins.property
    def offset_value(self):
        """Message field 'offset_value'."""
        return self._offset_value

    @offset_value.setter
    def offset_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_value = value

    @builtins.property
    def present_value(self):
        """Message field 'present_value'."""
        return self._present_value

    @present_value.setter
    def present_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'present_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'present_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._present_value = value

    @builtins.property
    def p_gain(self):
        """Message field 'p_gain'."""
        return self._p_gain

    @p_gain.setter
    def p_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'p_gain' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'p_gain' field must be an integer in [-2147483648, 2147483647]"
        self._p_gain = value

    @builtins.property
    def i_gain(self):
        """Message field 'i_gain'."""
        return self._i_gain

    @i_gain.setter
    def i_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i_gain' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'i_gain' field must be an integer in [-2147483648, 2147483647]"
        self._i_gain = value

    @builtins.property
    def d_gain(self):
        """Message field 'd_gain'."""
        return self._d_gain

    @d_gain.setter
    def d_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'd_gain' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'd_gain' field must be an integer in [-2147483648, 2147483647]"
        self._d_gain = value
