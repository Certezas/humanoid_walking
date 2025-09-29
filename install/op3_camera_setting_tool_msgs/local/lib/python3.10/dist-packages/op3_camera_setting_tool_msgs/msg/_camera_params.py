# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_camera_setting_tool_msgs:msg/CameraParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraParams(type):
    """Metaclass of message 'CameraParams'."""

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
            module = import_type_support('op3_camera_setting_tool_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_camera_setting_tool_msgs.msg.CameraParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraParams(metaclass=Metaclass_CameraParams):
    """Message class 'CameraParams'."""

    __slots__ = [
        '_brightness',
        '_contrast',
        '_saturation',
        '_sharpness',
        '_gain',
        '_focus_automatic_continuous',
        '_focus_absolute',
        '_auto_exposure',
        '_exposure_time_absolute',
        '_white_balance_automatic',
        '_white_balance_temperature',
    ]

    _fields_and_field_types = {
        'brightness': 'uint32',
        'contrast': 'uint32',
        'saturation': 'uint32',
        'sharpness': 'uint32',
        'gain': 'uint32',
        'focus_automatic_continuous': 'boolean',
        'focus_absolute': 'int32',
        'auto_exposure': 'uint32',
        'exposure_time_absolute': 'uint32',
        'white_balance_automatic': 'boolean',
        'white_balance_temperature': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brightness = kwargs.get('brightness', int())
        self.contrast = kwargs.get('contrast', int())
        self.saturation = kwargs.get('saturation', int())
        self.sharpness = kwargs.get('sharpness', int())
        self.gain = kwargs.get('gain', int())
        self.focus_automatic_continuous = kwargs.get('focus_automatic_continuous', bool())
        self.focus_absolute = kwargs.get('focus_absolute', int())
        self.auto_exposure = kwargs.get('auto_exposure', int())
        self.exposure_time_absolute = kwargs.get('exposure_time_absolute', int())
        self.white_balance_automatic = kwargs.get('white_balance_automatic', bool())
        self.white_balance_temperature = kwargs.get('white_balance_temperature', int())

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
        if self.brightness != other.brightness:
            return False
        if self.contrast != other.contrast:
            return False
        if self.saturation != other.saturation:
            return False
        if self.sharpness != other.sharpness:
            return False
        if self.gain != other.gain:
            return False
        if self.focus_automatic_continuous != other.focus_automatic_continuous:
            return False
        if self.focus_absolute != other.focus_absolute:
            return False
        if self.auto_exposure != other.auto_exposure:
            return False
        if self.exposure_time_absolute != other.exposure_time_absolute:
            return False
        if self.white_balance_automatic != other.white_balance_automatic:
            return False
        if self.white_balance_temperature != other.white_balance_temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brightness' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'brightness' field must be an unsigned integer in [0, 4294967295]"
        self._brightness = value

    @builtins.property
    def contrast(self):
        """Message field 'contrast'."""
        return self._contrast

    @contrast.setter
    def contrast(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contrast' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'contrast' field must be an unsigned integer in [0, 4294967295]"
        self._contrast = value

    @builtins.property
    def saturation(self):
        """Message field 'saturation'."""
        return self._saturation

    @saturation.setter
    def saturation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'saturation' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'saturation' field must be an unsigned integer in [0, 4294967295]"
        self._saturation = value

    @builtins.property
    def sharpness(self):
        """Message field 'sharpness'."""
        return self._sharpness

    @sharpness.setter
    def sharpness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sharpness' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sharpness' field must be an unsigned integer in [0, 4294967295]"
        self._sharpness = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gain' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gain' field must be an unsigned integer in [0, 4294967295]"
        self._gain = value

    @builtins.property
    def focus_automatic_continuous(self):
        """Message field 'focus_automatic_continuous'."""
        return self._focus_automatic_continuous

    @focus_automatic_continuous.setter
    def focus_automatic_continuous(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'focus_automatic_continuous' field must be of type 'bool'"
        self._focus_automatic_continuous = value

    @builtins.property
    def focus_absolute(self):
        """Message field 'focus_absolute'."""
        return self._focus_absolute

    @focus_absolute.setter
    def focus_absolute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'focus_absolute' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'focus_absolute' field must be an integer in [-2147483648, 2147483647]"
        self._focus_absolute = value

    @builtins.property
    def auto_exposure(self):
        """Message field 'auto_exposure'."""
        return self._auto_exposure

    @auto_exposure.setter
    def auto_exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_exposure' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'auto_exposure' field must be an unsigned integer in [0, 4294967295]"
        self._auto_exposure = value

    @builtins.property
    def exposure_time_absolute(self):
        """Message field 'exposure_time_absolute'."""
        return self._exposure_time_absolute

    @exposure_time_absolute.setter
    def exposure_time_absolute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exposure_time_absolute' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'exposure_time_absolute' field must be an unsigned integer in [0, 4294967295]"
        self._exposure_time_absolute = value

    @builtins.property
    def white_balance_automatic(self):
        """Message field 'white_balance_automatic'."""
        return self._white_balance_automatic

    @white_balance_automatic.setter
    def white_balance_automatic(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'white_balance_automatic' field must be of type 'bool'"
        self._white_balance_automatic = value

    @builtins.property
    def white_balance_temperature(self):
        """Message field 'white_balance_temperature'."""
        return self._white_balance_temperature

    @white_balance_temperature.setter
    def white_balance_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'white_balance_temperature' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'white_balance_temperature' field must be an unsigned integer in [0, 4294967295]"
        self._white_balance_temperature = value
