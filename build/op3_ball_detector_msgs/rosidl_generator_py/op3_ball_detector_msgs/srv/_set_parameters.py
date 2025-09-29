# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_ball_detector_msgs:srv/SetParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetParameters_Request(type):
    """Metaclass of message 'SetParameters_Request'."""

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
            module = import_type_support('op3_ball_detector_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_ball_detector_msgs.srv.SetParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_parameters__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_parameters__request

            from op3_ball_detector_msgs.msg import BallDetectorParams
            if BallDetectorParams.__class__._TYPE_SUPPORT is None:
                BallDetectorParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetParameters_Request(metaclass=Metaclass_SetParameters_Request):
    """Message class 'SetParameters_Request'."""

    __slots__ = [
        '_params',
    ]

    _fields_and_field_types = {
        'params': 'op3_ball_detector_msgs/BallDetectorParams',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['op3_ball_detector_msgs', 'msg'], 'BallDetectorParams'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from op3_ball_detector_msgs.msg import BallDetectorParams
        self.params = kwargs.get('params', BallDetectorParams())

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
        if self.params != other.params:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def params(self):
        """Message field 'params'."""
        return self._params

    @params.setter
    def params(self, value):
        if __debug__:
            from op3_ball_detector_msgs.msg import BallDetectorParams
            assert \
                isinstance(value, BallDetectorParams), \
                "The 'params' field must be a sub message of type 'BallDetectorParams'"
        self._params = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetParameters_Response(type):
    """Metaclass of message 'SetParameters_Response'."""

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
            module = import_type_support('op3_ball_detector_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_ball_detector_msgs.srv.SetParameters_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_parameters__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_parameters__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_parameters__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_parameters__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_parameters__response

            from op3_ball_detector_msgs.msg import BallDetectorParams
            if BallDetectorParams.__class__._TYPE_SUPPORT is None:
                BallDetectorParams.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetParameters_Response(metaclass=Metaclass_SetParameters_Response):
    """Message class 'SetParameters_Response'."""

    __slots__ = [
        '_returns',
    ]

    _fields_and_field_types = {
        'returns': 'op3_ball_detector_msgs/BallDetectorParams',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['op3_ball_detector_msgs', 'msg'], 'BallDetectorParams'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from op3_ball_detector_msgs.msg import BallDetectorParams
        self.returns = kwargs.get('returns', BallDetectorParams())

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
        if self.returns != other.returns:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def returns(self):
        """Message field 'returns'."""
        return self._returns

    @returns.setter
    def returns(self, value):
        if __debug__:
            from op3_ball_detector_msgs.msg import BallDetectorParams
            assert \
                isinstance(value, BallDetectorParams), \
                "The 'returns' field must be a sub message of type 'BallDetectorParams'"
        self._returns = value


class Metaclass_SetParameters(type):
    """Metaclass of service 'SetParameters'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('op3_ball_detector_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_ball_detector_msgs.srv.SetParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_parameters

            from op3_ball_detector_msgs.srv import _set_parameters
            if _set_parameters.Metaclass_SetParameters_Request._TYPE_SUPPORT is None:
                _set_parameters.Metaclass_SetParameters_Request.__import_type_support__()
            if _set_parameters.Metaclass_SetParameters_Response._TYPE_SUPPORT is None:
                _set_parameters.Metaclass_SetParameters_Response.__import_type_support__()


class SetParameters(metaclass=Metaclass_SetParameters):
    from op3_ball_detector_msgs.srv._set_parameters import SetParameters_Request as Request
    from op3_ball_detector_msgs.srv._set_parameters import SetParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
