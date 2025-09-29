# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_walking_module_msgs:msg/WalkingParam.idl
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
            module = import_type_support('op3_walking_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_walking_module_msgs.msg.WalkingParam')
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
        '_init_x_offset',
        '_init_y_offset',
        '_init_z_offset',
        '_init_roll_offset',
        '_init_pitch_offset',
        '_init_yaw_offset',
        '_period_time',
        '_dsp_ratio',
        '_step_fb_ratio',
        '_x_move_amplitude',
        '_y_move_amplitude',
        '_z_move_amplitude',
        '_angle_move_amplitude',
        '_move_aim_on',
        '_balance_enable',
        '_balance_hip_roll_gain',
        '_balance_knee_gain',
        '_balance_ankle_roll_gain',
        '_balance_ankle_pitch_gain',
        '_y_swap_amplitude',
        '_z_swap_amplitude',
        '_arm_swing_gain',
        '_pelvis_offset',
        '_hip_pitch_offset',
        '_p_gain',
        '_i_gain',
        '_d_gain',
    ]

    _fields_and_field_types = {
        'init_x_offset': 'float',
        'init_y_offset': 'float',
        'init_z_offset': 'float',
        'init_roll_offset': 'float',
        'init_pitch_offset': 'float',
        'init_yaw_offset': 'float',
        'period_time': 'float',
        'dsp_ratio': 'float',
        'step_fb_ratio': 'float',
        'x_move_amplitude': 'float',
        'y_move_amplitude': 'float',
        'z_move_amplitude': 'float',
        'angle_move_amplitude': 'float',
        'move_aim_on': 'boolean',
        'balance_enable': 'boolean',
        'balance_hip_roll_gain': 'float',
        'balance_knee_gain': 'float',
        'balance_ankle_roll_gain': 'float',
        'balance_ankle_pitch_gain': 'float',
        'y_swap_amplitude': 'float',
        'z_swap_amplitude': 'float',
        'arm_swing_gain': 'float',
        'pelvis_offset': 'float',
        'hip_pitch_offset': 'float',
        'p_gain': 'int32',
        'i_gain': 'int32',
        'd_gain': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.init_x_offset = kwargs.get('init_x_offset', float())
        self.init_y_offset = kwargs.get('init_y_offset', float())
        self.init_z_offset = kwargs.get('init_z_offset', float())
        self.init_roll_offset = kwargs.get('init_roll_offset', float())
        self.init_pitch_offset = kwargs.get('init_pitch_offset', float())
        self.init_yaw_offset = kwargs.get('init_yaw_offset', float())
        self.period_time = kwargs.get('period_time', float())
        self.dsp_ratio = kwargs.get('dsp_ratio', float())
        self.step_fb_ratio = kwargs.get('step_fb_ratio', float())
        self.x_move_amplitude = kwargs.get('x_move_amplitude', float())
        self.y_move_amplitude = kwargs.get('y_move_amplitude', float())
        self.z_move_amplitude = kwargs.get('z_move_amplitude', float())
        self.angle_move_amplitude = kwargs.get('angle_move_amplitude', float())
        self.move_aim_on = kwargs.get('move_aim_on', bool())
        self.balance_enable = kwargs.get('balance_enable', bool())
        self.balance_hip_roll_gain = kwargs.get('balance_hip_roll_gain', float())
        self.balance_knee_gain = kwargs.get('balance_knee_gain', float())
        self.balance_ankle_roll_gain = kwargs.get('balance_ankle_roll_gain', float())
        self.balance_ankle_pitch_gain = kwargs.get('balance_ankle_pitch_gain', float())
        self.y_swap_amplitude = kwargs.get('y_swap_amplitude', float())
        self.z_swap_amplitude = kwargs.get('z_swap_amplitude', float())
        self.arm_swing_gain = kwargs.get('arm_swing_gain', float())
        self.pelvis_offset = kwargs.get('pelvis_offset', float())
        self.hip_pitch_offset = kwargs.get('hip_pitch_offset', float())
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
        if self.init_x_offset != other.init_x_offset:
            return False
        if self.init_y_offset != other.init_y_offset:
            return False
        if self.init_z_offset != other.init_z_offset:
            return False
        if self.init_roll_offset != other.init_roll_offset:
            return False
        if self.init_pitch_offset != other.init_pitch_offset:
            return False
        if self.init_yaw_offset != other.init_yaw_offset:
            return False
        if self.period_time != other.period_time:
            return False
        if self.dsp_ratio != other.dsp_ratio:
            return False
        if self.step_fb_ratio != other.step_fb_ratio:
            return False
        if self.x_move_amplitude != other.x_move_amplitude:
            return False
        if self.y_move_amplitude != other.y_move_amplitude:
            return False
        if self.z_move_amplitude != other.z_move_amplitude:
            return False
        if self.angle_move_amplitude != other.angle_move_amplitude:
            return False
        if self.move_aim_on != other.move_aim_on:
            return False
        if self.balance_enable != other.balance_enable:
            return False
        if self.balance_hip_roll_gain != other.balance_hip_roll_gain:
            return False
        if self.balance_knee_gain != other.balance_knee_gain:
            return False
        if self.balance_ankle_roll_gain != other.balance_ankle_roll_gain:
            return False
        if self.balance_ankle_pitch_gain != other.balance_ankle_pitch_gain:
            return False
        if self.y_swap_amplitude != other.y_swap_amplitude:
            return False
        if self.z_swap_amplitude != other.z_swap_amplitude:
            return False
        if self.arm_swing_gain != other.arm_swing_gain:
            return False
        if self.pelvis_offset != other.pelvis_offset:
            return False
        if self.hip_pitch_offset != other.hip_pitch_offset:
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
    def init_x_offset(self):
        """Message field 'init_x_offset'."""
        return self._init_x_offset

    @init_x_offset.setter
    def init_x_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_x_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_x_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_x_offset = value

    @builtins.property
    def init_y_offset(self):
        """Message field 'init_y_offset'."""
        return self._init_y_offset

    @init_y_offset.setter
    def init_y_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_y_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_y_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_y_offset = value

    @builtins.property
    def init_z_offset(self):
        """Message field 'init_z_offset'."""
        return self._init_z_offset

    @init_z_offset.setter
    def init_z_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_z_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_z_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_z_offset = value

    @builtins.property
    def init_roll_offset(self):
        """Message field 'init_roll_offset'."""
        return self._init_roll_offset

    @init_roll_offset.setter
    def init_roll_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_roll_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_roll_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_roll_offset = value

    @builtins.property
    def init_pitch_offset(self):
        """Message field 'init_pitch_offset'."""
        return self._init_pitch_offset

    @init_pitch_offset.setter
    def init_pitch_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_pitch_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_pitch_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_pitch_offset = value

    @builtins.property
    def init_yaw_offset(self):
        """Message field 'init_yaw_offset'."""
        return self._init_yaw_offset

    @init_yaw_offset.setter
    def init_yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_yaw_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_yaw_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_yaw_offset = value

    @builtins.property
    def period_time(self):
        """Message field 'period_time'."""
        return self._period_time

    @period_time.setter
    def period_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'period_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._period_time = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dsp_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dsp_ratio = value

    @builtins.property
    def step_fb_ratio(self):
        """Message field 'step_fb_ratio'."""
        return self._step_fb_ratio

    @step_fb_ratio.setter
    def step_fb_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'step_fb_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'step_fb_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._step_fb_ratio = value

    @builtins.property
    def x_move_amplitude(self):
        """Message field 'x_move_amplitude'."""
        return self._x_move_amplitude

    @x_move_amplitude.setter
    def x_move_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_move_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_move_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_move_amplitude = value

    @builtins.property
    def y_move_amplitude(self):
        """Message field 'y_move_amplitude'."""
        return self._y_move_amplitude

    @y_move_amplitude.setter
    def y_move_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_move_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_move_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_move_amplitude = value

    @builtins.property
    def z_move_amplitude(self):
        """Message field 'z_move_amplitude'."""
        return self._z_move_amplitude

    @z_move_amplitude.setter
    def z_move_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_move_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_move_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_move_amplitude = value

    @builtins.property
    def angle_move_amplitude(self):
        """Message field 'angle_move_amplitude'."""
        return self._angle_move_amplitude

    @angle_move_amplitude.setter
    def angle_move_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_move_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_move_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_move_amplitude = value

    @builtins.property
    def move_aim_on(self):
        """Message field 'move_aim_on'."""
        return self._move_aim_on

    @move_aim_on.setter
    def move_aim_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'move_aim_on' field must be of type 'bool'"
        self._move_aim_on = value

    @builtins.property
    def balance_enable(self):
        """Message field 'balance_enable'."""
        return self._balance_enable

    @balance_enable.setter
    def balance_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'balance_enable' field must be of type 'bool'"
        self._balance_enable = value

    @builtins.property
    def balance_hip_roll_gain(self):
        """Message field 'balance_hip_roll_gain'."""
        return self._balance_hip_roll_gain

    @balance_hip_roll_gain.setter
    def balance_hip_roll_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_hip_roll_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_hip_roll_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_hip_roll_gain = value

    @builtins.property
    def balance_knee_gain(self):
        """Message field 'balance_knee_gain'."""
        return self._balance_knee_gain

    @balance_knee_gain.setter
    def balance_knee_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_knee_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_knee_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_knee_gain = value

    @builtins.property
    def balance_ankle_roll_gain(self):
        """Message field 'balance_ankle_roll_gain'."""
        return self._balance_ankle_roll_gain

    @balance_ankle_roll_gain.setter
    def balance_ankle_roll_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_ankle_roll_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_ankle_roll_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_ankle_roll_gain = value

    @builtins.property
    def balance_ankle_pitch_gain(self):
        """Message field 'balance_ankle_pitch_gain'."""
        return self._balance_ankle_pitch_gain

    @balance_ankle_pitch_gain.setter
    def balance_ankle_pitch_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'balance_ankle_pitch_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'balance_ankle_pitch_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._balance_ankle_pitch_gain = value

    @builtins.property
    def y_swap_amplitude(self):
        """Message field 'y_swap_amplitude'."""
        return self._y_swap_amplitude

    @y_swap_amplitude.setter
    def y_swap_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_swap_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_swap_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_swap_amplitude = value

    @builtins.property
    def z_swap_amplitude(self):
        """Message field 'z_swap_amplitude'."""
        return self._z_swap_amplitude

    @z_swap_amplitude.setter
    def z_swap_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_swap_amplitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_swap_amplitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_swap_amplitude = value

    @builtins.property
    def arm_swing_gain(self):
        """Message field 'arm_swing_gain'."""
        return self._arm_swing_gain

    @arm_swing_gain.setter
    def arm_swing_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'arm_swing_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'arm_swing_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._arm_swing_gain = value

    @builtins.property
    def pelvis_offset(self):
        """Message field 'pelvis_offset'."""
        return self._pelvis_offset

    @pelvis_offset.setter
    def pelvis_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pelvis_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pelvis_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pelvis_offset = value

    @builtins.property
    def hip_pitch_offset(self):
        """Message field 'hip_pitch_offset'."""
        return self._hip_pitch_offset

    @hip_pitch_offset.setter
    def hip_pitch_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hip_pitch_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hip_pitch_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hip_pitch_offset = value

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
