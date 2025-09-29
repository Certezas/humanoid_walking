# generated from rosidl_generator_py/resource/_idl.py.em
# with input from op3_ball_detector_msgs:msg/BallDetectorParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BallDetectorParams(type):
    """Metaclass of message 'BallDetectorParams'."""

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
                'op3_ball_detector_msgs.msg.BallDetectorParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ball_detector_params
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ball_detector_params
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ball_detector_params
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ball_detector_params
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ball_detector_params

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BallDetectorParams(metaclass=Metaclass_BallDetectorParams):
    """Message class 'BallDetectorParams'."""

    __slots__ = [
        '_gaussian_blur_size',
        '_gaussian_blur_sigma',
        '_canny_edge_th',
        '_hough_accum_resolution',
        '_hough_accum_th',
        '_min_circle_dist',
        '_min_radius',
        '_max_radius',
        '_filter_h_min',
        '_filter_h_max',
        '_filter_s_min',
        '_filter_s_max',
        '_filter_v_min',
        '_filter_v_max',
        '_ellipse_size',
    ]

    _fields_and_field_types = {
        'gaussian_blur_size': 'uint32',
        'gaussian_blur_sigma': 'float',
        'canny_edge_th': 'float',
        'hough_accum_resolution': 'float',
        'hough_accum_th': 'float',
        'min_circle_dist': 'float',
        'min_radius': 'uint32',
        'max_radius': 'uint32',
        'filter_h_min': 'uint32',
        'filter_h_max': 'uint32',
        'filter_s_min': 'uint32',
        'filter_s_max': 'uint32',
        'filter_v_min': 'uint32',
        'filter_v_max': 'uint32',
        'ellipse_size': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gaussian_blur_size = kwargs.get('gaussian_blur_size', int())
        self.gaussian_blur_sigma = kwargs.get('gaussian_blur_sigma', float())
        self.canny_edge_th = kwargs.get('canny_edge_th', float())
        self.hough_accum_resolution = kwargs.get('hough_accum_resolution', float())
        self.hough_accum_th = kwargs.get('hough_accum_th', float())
        self.min_circle_dist = kwargs.get('min_circle_dist', float())
        self.min_radius = kwargs.get('min_radius', int())
        self.max_radius = kwargs.get('max_radius', int())
        self.filter_h_min = kwargs.get('filter_h_min', int())
        self.filter_h_max = kwargs.get('filter_h_max', int())
        self.filter_s_min = kwargs.get('filter_s_min', int())
        self.filter_s_max = kwargs.get('filter_s_max', int())
        self.filter_v_min = kwargs.get('filter_v_min', int())
        self.filter_v_max = kwargs.get('filter_v_max', int())
        self.ellipse_size = kwargs.get('ellipse_size', int())

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
        if self.gaussian_blur_size != other.gaussian_blur_size:
            return False
        if self.gaussian_blur_sigma != other.gaussian_blur_sigma:
            return False
        if self.canny_edge_th != other.canny_edge_th:
            return False
        if self.hough_accum_resolution != other.hough_accum_resolution:
            return False
        if self.hough_accum_th != other.hough_accum_th:
            return False
        if self.min_circle_dist != other.min_circle_dist:
            return False
        if self.min_radius != other.min_radius:
            return False
        if self.max_radius != other.max_radius:
            return False
        if self.filter_h_min != other.filter_h_min:
            return False
        if self.filter_h_max != other.filter_h_max:
            return False
        if self.filter_s_min != other.filter_s_min:
            return False
        if self.filter_s_max != other.filter_s_max:
            return False
        if self.filter_v_min != other.filter_v_min:
            return False
        if self.filter_v_max != other.filter_v_max:
            return False
        if self.ellipse_size != other.ellipse_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gaussian_blur_size(self):
        """Message field 'gaussian_blur_size'."""
        return self._gaussian_blur_size

    @gaussian_blur_size.setter
    def gaussian_blur_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gaussian_blur_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gaussian_blur_size' field must be an unsigned integer in [0, 4294967295]"
        self._gaussian_blur_size = value

    @builtins.property
    def gaussian_blur_sigma(self):
        """Message field 'gaussian_blur_sigma'."""
        return self._gaussian_blur_sigma

    @gaussian_blur_sigma.setter
    def gaussian_blur_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gaussian_blur_sigma' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gaussian_blur_sigma' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gaussian_blur_sigma = value

    @builtins.property
    def canny_edge_th(self):
        """Message field 'canny_edge_th'."""
        return self._canny_edge_th

    @canny_edge_th.setter
    def canny_edge_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'canny_edge_th' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'canny_edge_th' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._canny_edge_th = value

    @builtins.property
    def hough_accum_resolution(self):
        """Message field 'hough_accum_resolution'."""
        return self._hough_accum_resolution

    @hough_accum_resolution.setter
    def hough_accum_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hough_accum_resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hough_accum_resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hough_accum_resolution = value

    @builtins.property
    def hough_accum_th(self):
        """Message field 'hough_accum_th'."""
        return self._hough_accum_th

    @hough_accum_th.setter
    def hough_accum_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hough_accum_th' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hough_accum_th' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hough_accum_th = value

    @builtins.property
    def min_circle_dist(self):
        """Message field 'min_circle_dist'."""
        return self._min_circle_dist

    @min_circle_dist.setter
    def min_circle_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_circle_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_circle_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_circle_dist = value

    @builtins.property
    def min_radius(self):
        """Message field 'min_radius'."""
        return self._min_radius

    @min_radius.setter
    def min_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_radius' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'min_radius' field must be an unsigned integer in [0, 4294967295]"
        self._min_radius = value

    @builtins.property
    def max_radius(self):
        """Message field 'max_radius'."""
        return self._max_radius

    @max_radius.setter
    def max_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_radius' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_radius' field must be an unsigned integer in [0, 4294967295]"
        self._max_radius = value

    @builtins.property
    def filter_h_min(self):
        """Message field 'filter_h_min'."""
        return self._filter_h_min

    @filter_h_min.setter
    def filter_h_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_h_min' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_h_min' field must be an unsigned integer in [0, 4294967295]"
        self._filter_h_min = value

    @builtins.property
    def filter_h_max(self):
        """Message field 'filter_h_max'."""
        return self._filter_h_max

    @filter_h_max.setter
    def filter_h_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_h_max' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_h_max' field must be an unsigned integer in [0, 4294967295]"
        self._filter_h_max = value

    @builtins.property
    def filter_s_min(self):
        """Message field 'filter_s_min'."""
        return self._filter_s_min

    @filter_s_min.setter
    def filter_s_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_s_min' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_s_min' field must be an unsigned integer in [0, 4294967295]"
        self._filter_s_min = value

    @builtins.property
    def filter_s_max(self):
        """Message field 'filter_s_max'."""
        return self._filter_s_max

    @filter_s_max.setter
    def filter_s_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_s_max' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_s_max' field must be an unsigned integer in [0, 4294967295]"
        self._filter_s_max = value

    @builtins.property
    def filter_v_min(self):
        """Message field 'filter_v_min'."""
        return self._filter_v_min

    @filter_v_min.setter
    def filter_v_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_v_min' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_v_min' field must be an unsigned integer in [0, 4294967295]"
        self._filter_v_min = value

    @builtins.property
    def filter_v_max(self):
        """Message field 'filter_v_max'."""
        return self._filter_v_max

    @filter_v_max.setter
    def filter_v_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_v_max' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_v_max' field must be an unsigned integer in [0, 4294967295]"
        self._filter_v_max = value

    @builtins.property
    def ellipse_size(self):
        """Message field 'ellipse_size'."""
        return self._ellipse_size

    @ellipse_size.setter
    def ellipse_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ellipse_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ellipse_size' field must be an unsigned integer in [0, 4294967295]"
        self._ellipse_size = value
