# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_online_walking_module_msgs:msg/PreviewResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'k'
# Member 'p'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PreviewResponse(type):
    """Metaclass of message 'PreviewResponse'."""

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
                'op3_online_walking_module_msgs.msg.PreviewResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__preview_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__preview_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__preview_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__preview_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__preview_response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PreviewResponse(metaclass=Metaclass_PreviewResponse):
    """Message class 'PreviewResponse'."""

    __slots__ = [
        '_k_row',
        '_k_col',
        '_k',
        '_p_row',
        '_p_col',
        '_p',
    ]

    _fields_and_field_types = {
        'k_row': 'int32',
        'k_col': 'int32',
        'k': 'sequence<double>',
        'p_row': 'int32',
        'p_col': 'int32',
        'p': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.k_row = kwargs.get('k_row', int())
        self.k_col = kwargs.get('k_col', int())
        self.k = array.array('d', kwargs.get('k', []))
        self.p_row = kwargs.get('p_row', int())
        self.p_col = kwargs.get('p_col', int())
        self.p = array.array('d', kwargs.get('p', []))

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
        if self.k_row != other.k_row:
            return False
        if self.k_col != other.k_col:
            return False
        if self.k != other.k:
            return False
        if self.p_row != other.p_row:
            return False
        if self.p_col != other.p_col:
            return False
        if self.p != other.p:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def k_row(self):
        """Message field 'k_row'."""
        return self._k_row

    @k_row.setter
    def k_row(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k_row' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'k_row' field must be an integer in [-2147483648, 2147483647]"
        self._k_row = value

    @builtins.property
    def k_col(self):
        """Message field 'k_col'."""
        return self._k_col

    @k_col.setter
    def k_col(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'k_col' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'k_col' field must be an integer in [-2147483648, 2147483647]"
        self._k_col = value

    @builtins.property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'k' array.array() must have the type code of 'd'"
            self._k = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'k' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._k = array.array('d', value)

    @builtins.property
    def p_row(self):
        """Message field 'p_row'."""
        return self._p_row

    @p_row.setter
    def p_row(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'p_row' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'p_row' field must be an integer in [-2147483648, 2147483647]"
        self._p_row = value

    @builtins.property
    def p_col(self):
        """Message field 'p_col'."""
        return self._p_col

    @p_col.setter
    def p_col(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'p_col' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'p_col' field must be an integer in [-2147483648, 2147483647]"
        self._p_col = value

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'p' array.array() must have the type code of 'd'"
            self._p = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'p' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._p = array.array('d', value)
