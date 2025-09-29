# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_online_walking_module_msgs:msg/WalkingParam.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WalkingParam(type):
    """Metaclass of message 'WalkingParam'."""

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
            module = import_type_support('op3_online_walking_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_online_walking_module_msgs.msg.WalkingParam')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__walking_param
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__walking_param
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__walking_param
            cls._TYPE_SUPPORT = module.type_support_msg__msg__walking_param
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__walking_param

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WalkingParam(metaclass=Metaclass_WalkingParam):
    """Message class 'WalkingParam'."""

    __slots__ = [
        '_dsp_ratio',
        '_lipm_height',
        '_foot_height_max',
        '_zmp_offset_x',
        '_zmp_offset_y',
    ]

    _fields_and_field_types = {
        'dsp_ratio': 'double',
        'lipm_height': 'double',
        'foot_height_max': 'double',
        'zmp_offset_x': 'double',
        'zmp_offset_y': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dsp_ratio = kwargs.get('dsp_ratio', float())
        self.lipm_height = kwargs.get('lipm_height', float())
        self.foot_height_max = kwargs.get('foot_height_max', float())
        self.zmp_offset_x = kwargs.get('zmp_offset_x', float())
        self.zmp_offset_y = kwargs.get('zmp_offset_y', float())

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
        if self.dsp_ratio != other.dsp_ratio:
            return False
        if self.lipm_height != other.lipm_height:
            return False
        if self.foot_height_max != other.foot_height_max:
            return False
        if self.zmp_offset_x != other.zmp_offset_x:
            return False
        if self.zmp_offset_y != other.zmp_offset_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dsp_ratio(self):
        """Message field 'dsp_ratio'."""
        return self._dsp_ratio

    @dsp_ratio.setter
    def dsp_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dsp_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dsp_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dsp_ratio = value

    @builtins.property
    def lipm_height(self):
        """Message field 'lipm_height'."""
        return self._lipm_height

    @lipm_height.setter
    def lipm_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lipm_height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lipm_height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lipm_height = value

    @builtins.property
    def foot_height_max(self):
        """Message field 'foot_height_max'."""
        return self._foot_height_max

    @foot_height_max.setter
    def foot_height_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'foot_height_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'foot_height_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._foot_height_max = value

    @builtins.property
    def zmp_offset_x(self):
        """Message field 'zmp_offset_x'."""
        return self._zmp_offset_x

    @zmp_offset_x.setter
    def zmp_offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zmp_offset_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'zmp_offset_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._zmp_offset_x = value

    @builtins.property
    def zmp_offset_y(self):
        """Message field 'zmp_offset_y'."""
        return self._zmp_offset_y

    @zmp_offset_y.setter
    def zmp_offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'zmp_offset_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'zmp_offset_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._zmp_offset_y = value
