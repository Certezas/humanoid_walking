# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_online_walking_module_msgs:msg/Step2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Step2D(type):
    """Metaclass of message 'Step2D'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LEFT_FOOT_SWING': 1,
        'RIGHT_FOOT_SWING': 2,
        'STANDING': 3,
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
                'op3_online_walking_module_msgs.msg.Step2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__step2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__step2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__step2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__step2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__step2_d

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LEFT_FOOT_SWING': cls.__constants['LEFT_FOOT_SWING'],
            'RIGHT_FOOT_SWING': cls.__constants['RIGHT_FOOT_SWING'],
            'STANDING': cls.__constants['STANDING'],
        }

    @property
    def LEFT_FOOT_SWING(self):
        """Message constant 'LEFT_FOOT_SWING'."""
        return Metaclass_Step2D.__constants['LEFT_FOOT_SWING']

    @property
    def RIGHT_FOOT_SWING(self):
        """Message constant 'RIGHT_FOOT_SWING'."""
        return Metaclass_Step2D.__constants['RIGHT_FOOT_SWING']

    @property
    def STANDING(self):
        """Message constant 'STANDING'."""
        return Metaclass_Step2D.__constants['STANDING']


class Step2D(metaclass=Metaclass_Step2D):
    """
    Message class 'Step2D'.

    Constants:
      LEFT_FOOT_SWING
      RIGHT_FOOT_SWING
      STANDING
    """

    __slots__ = [
        '_step2d',
        '_moving_foot',
    ]

    _fields_and_field_types = {
        'step2d': 'geometry_msgs/Pose2D',
        'moving_foot': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose2D
        self.step2d = kwargs.get('step2d', Pose2D())
        self.moving_foot = kwargs.get('moving_foot', int())

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
        if self.step2d != other.step2d:
            return False
        if self.moving_foot != other.moving_foot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def step2d(self):
        """Message field 'step2d'."""
        return self._step2d

    @step2d.setter
    def step2d(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'step2d' field must be a sub message of type 'Pose2D'"
        self._step2d = value

    @builtins.property
    def moving_foot(self):
        """Message field 'moving_foot'."""
        return self._moving_foot

    @moving_foot.setter
    def moving_foot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'moving_foot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'moving_foot' field must be an unsigned integer in [0, 255]"
        self._moving_foot = value
