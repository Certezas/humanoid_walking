# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotis_controller_msgs:msg/StatusMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusMsg(type):
    """Metaclass of message 'StatusMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_UNKNOWN': 0,
        'STATUS_INFO': 1,
        'STATUS_WARN': 2,
        'STATUS_ERROR': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robotis_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotis_controller_msgs.msg.StatusMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status_msg

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_UNKNOWN': cls.__constants['STATUS_UNKNOWN'],
            'STATUS_INFO': cls.__constants['STATUS_INFO'],
            'STATUS_WARN': cls.__constants['STATUS_WARN'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
        }

    @property
    def STATUS_UNKNOWN(self):
        """Message constant 'STATUS_UNKNOWN'."""
        return Metaclass_StatusMsg.__constants['STATUS_UNKNOWN']

    @property
    def STATUS_INFO(self):
        """Message constant 'STATUS_INFO'."""
        return Metaclass_StatusMsg.__constants['STATUS_INFO']

    @property
    def STATUS_WARN(self):
        """Message constant 'STATUS_WARN'."""
        return Metaclass_StatusMsg.__constants['STATUS_WARN']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_StatusMsg.__constants['STATUS_ERROR']


class StatusMsg(metaclass=Metaclass_StatusMsg):
    """
    Message class 'StatusMsg'.

    Constants:
      STATUS_UNKNOWN
      STATUS_INFO
      STATUS_WARN
      STATUS_ERROR
    """

    __slots__ = [
        '_header',
        '_type',
        '_module_name',
        '_status_msg',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'type': 'uint8',
        'module_name': 'string',
        'status_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.type = kwargs.get('type', int())
        self.module_name = kwargs.get('module_name', str())
        self.status_msg = kwargs.get('status_msg', str())

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
        if self.header != other.header:
            return False
        if self.type != other.type:
            return False
        if self.module_name != other.module_name:
            return False
        if self.status_msg != other.status_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def module_name(self):
        """Message field 'module_name'."""
        return self._module_name

    @module_name.setter
    def module_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module_name' field must be of type 'str'"
        self._module_name = value

    @builtins.property
    def status_msg(self):
        """Message field 'status_msg'."""
        return self._status_msg

    @status_msg.setter
    def status_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_msg' field must be of type 'str'"
        self._status_msg = value
