# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_online_walking_module_msgs:srv/GetPreviewMatrix.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPreviewMatrix_Request(type):
    """Metaclass of message 'GetPreviewMatrix_Request'."""

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
                'op3_online_walking_module_msgs.srv.GetPreviewMatrix_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_preview_matrix__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_preview_matrix__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_preview_matrix__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_preview_matrix__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_preview_matrix__request

            from op3_online_walking_module_msgs.msg import PreviewRequest
            if PreviewRequest.__class__._TYPE_SUPPORT is None:
                PreviewRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPreviewMatrix_Request(metaclass=Metaclass_GetPreviewMatrix_Request):
    """Message class 'GetPreviewMatrix_Request'."""

    __slots__ = [
        '_req',
    ]

    _fields_and_field_types = {
        'req': 'op3_online_walking_module_msgs/PreviewRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['op3_online_walking_module_msgs', 'msg'], 'PreviewRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from op3_online_walking_module_msgs.msg import PreviewRequest
        self.req = kwargs.get('req', PreviewRequest())

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
        if self.req != other.req:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def req(self):
        """Message field 'req'."""
        return self._req

    @req.setter
    def req(self, value):
        if __debug__:
            from op3_online_walking_module_msgs.msg import PreviewRequest
            assert \
                isinstance(value, PreviewRequest), \
                "The 'req' field must be a sub message of type 'PreviewRequest'"
        self._req = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPreviewMatrix_Response(type):
    """Metaclass of message 'GetPreviewMatrix_Response'."""

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
                'op3_online_walking_module_msgs.srv.GetPreviewMatrix_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_preview_matrix__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_preview_matrix__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_preview_matrix__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_preview_matrix__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_preview_matrix__response

            from op3_online_walking_module_msgs.msg import PreviewResponse
            if PreviewResponse.__class__._TYPE_SUPPORT is None:
                PreviewResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPreviewMatrix_Response(metaclass=Metaclass_GetPreviewMatrix_Response):
    """Message class 'GetPreviewMatrix_Response'."""

    __slots__ = [
        '_res',
    ]

    _fields_and_field_types = {
        'res': 'op3_online_walking_module_msgs/PreviewResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['op3_online_walking_module_msgs', 'msg'], 'PreviewResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from op3_online_walking_module_msgs.msg import PreviewResponse
        self.res = kwargs.get('res', PreviewResponse())

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
        if self.res != other.res:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if __debug__:
            from op3_online_walking_module_msgs.msg import PreviewResponse
            assert \
                isinstance(value, PreviewResponse), \
                "The 'res' field must be a sub message of type 'PreviewResponse'"
        self._res = value


class Metaclass_GetPreviewMatrix(type):
    """Metaclass of service 'GetPreviewMatrix'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('op3_online_walking_module_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'op3_online_walking_module_msgs.srv.GetPreviewMatrix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_preview_matrix

            from op3_online_walking_module_msgs.srv import _get_preview_matrix
            if _get_preview_matrix.Metaclass_GetPreviewMatrix_Request._TYPE_SUPPORT is None:
                _get_preview_matrix.Metaclass_GetPreviewMatrix_Request.__import_type_support__()
            if _get_preview_matrix.Metaclass_GetPreviewMatrix_Response._TYPE_SUPPORT is None:
                _get_preview_matrix.Metaclass_GetPreviewMatrix_Response.__import_type_support__()


class GetPreviewMatrix(metaclass=Metaclass_GetPreviewMatrix):
    from op3_online_walking_module_msgs.srv._get_preview_matrix import GetPreviewMatrix_Request as Request
    from op3_online_walking_module_msgs.srv._get_preview_matrix import GetPreviewMatrix_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
