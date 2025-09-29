# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robotis_controller_msgs:msg/WriteControlTable.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WriteControlTable(type):
    """Metaclass of message 'WriteControlTable'."""

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
            module = import_type_support('robotis_controller_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robotis_controller_msgs.msg.WriteControlTable')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__write_control_table
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__write_control_table
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__write_control_table
            cls._TYPE_SUPPORT = module.type_support_msg__msg__write_control_table
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__write_control_table

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WriteControlTable(metaclass=Metaclass_WriteControlTable):
    """Message class 'WriteControlTable'."""

    __slots__ = [
        '_joint_name',
        '_start_item_name',
        '_data_length',
        '_data',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'start_item_name': 'string',
        'data_length': 'uint16',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.start_item_name = kwargs.get('start_item_name', str())
        self.data_length = kwargs.get('data_length', int())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.start_item_name != other.start_item_name:
            return False
        if self.data_length != other.data_length:
            return False
        if self.data != other.data:
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
    def start_item_name(self):
        """Message field 'start_item_name'."""
        return self._start_item_name

    @start_item_name.setter
    def start_item_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'start_item_name' field must be of type 'str'"
        self._start_item_name = value

    @builtins.property
    def data_length(self):
        """Message field 'data_length'."""
        return self._data_length

    @data_length.setter
    def data_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_length' field must be an unsigned integer in [0, 65535]"
        self._data_length = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
