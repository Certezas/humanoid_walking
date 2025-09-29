# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_action_module_msgs:srv/IsRunning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IsRunning_Request(type):
    """Metaclass of message 'IsRunning_Request'."""

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
            module = import_type_support('op3_action_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_action_module_msgs.srv.IsRunning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_running__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_running__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_running__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_running__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_running__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsRunning_Request(metaclass=Metaclass_IsRunning_Request):
    """Message class 'IsRunning_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_IsRunning_Response(type):
    """Metaclass of message 'IsRunning_Response'."""

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
            module = import_type_support('op3_action_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_action_module_msgs.srv.IsRunning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__is_running__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__is_running__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__is_running__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__is_running__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__is_running__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IsRunning_Response(metaclass=Metaclass_IsRunning_Response):
    """Message class 'IsRunning_Response'."""

    __slots__ = [
        '_is_running',
    ]

    _fields_and_field_types = {
        'is_running': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_running = kwargs.get('is_running', bool())

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
        if self.is_running != other.is_running:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_running(self):
        """Message field 'is_running'."""
        return self._is_running

    @is_running.setter
    def is_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_running' field must be of type 'bool'"
        self._is_running = value


class Metaclass_IsRunning(type):
    """Metaclass of service 'IsRunning'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('op3_action_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_action_module_msgs.srv.IsRunning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__is_running

            from op3_action_module_msgs.srv import _is_running
            if _is_running.Metaclass_IsRunning_Request._TYPE_SUPPORT is None:
                _is_running.Metaclass_IsRunning_Request.__import_type_support__()
            if _is_running.Metaclass_IsRunning_Response._TYPE_SUPPORT is None:
                _is_running.Metaclass_IsRunning_Response.__import_type_support__()


class IsRunning(metaclass=Metaclass_IsRunning):
    from op3_action_module_msgs.srv._is_running import IsRunning_Request as Request
    from op3_action_module_msgs.srv._is_running import IsRunning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
