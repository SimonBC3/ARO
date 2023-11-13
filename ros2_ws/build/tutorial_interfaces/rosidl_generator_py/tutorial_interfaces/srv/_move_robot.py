# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/MoveRobot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveRobot_Request(type):
    """Metaclass of message 'MoveRobot_Request'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.MoveRobot_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_robot__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_robot__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_robot__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_robot__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_robot__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRobot_Request(metaclass=Metaclass_MoveRobot_Request):
    """Message class 'MoveRobot_Request'."""

    __slots__ = [
        '_objective_point',
    ]

    _fields_and_field_types = {
        'objective_point': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.objective_point = kwargs.get('objective_point', Point())

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
        if self.objective_point != other.objective_point:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def objective_point(self):
        """Message field 'objective_point'."""
        return self._objective_point

    @objective_point.setter
    def objective_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'objective_point' field must be a sub message of type 'Point'"
        self._objective_point = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveRobot_Response(type):
    """Metaclass of message 'MoveRobot_Response'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.MoveRobot_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_robot__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_robot__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_robot__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_robot__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_robot__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveRobot_Response(metaclass=Metaclass_MoveRobot_Response):
    """Message class 'MoveRobot_Response'."""

    __slots__ = [
        '_proximity',
    ]

    _fields_and_field_types = {
        'proximity': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.proximity = kwargs.get('proximity', float())

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
        if self.proximity != other.proximity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def proximity(self):
        """Message field 'proximity'."""
        return self._proximity

    @proximity.setter
    def proximity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'proximity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'proximity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._proximity = value


class Metaclass_MoveRobot(type):
    """Metaclass of service 'MoveRobot'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.MoveRobot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_robot

            from tutorial_interfaces.srv import _move_robot
            if _move_robot.Metaclass_MoveRobot_Request._TYPE_SUPPORT is None:
                _move_robot.Metaclass_MoveRobot_Request.__import_type_support__()
            if _move_robot.Metaclass_MoveRobot_Response._TYPE_SUPPORT is None:
                _move_robot.Metaclass_MoveRobot_Response.__import_type_support__()


class MoveRobot(metaclass=Metaclass_MoveRobot):
    from tutorial_interfaces.srv._move_robot import MoveRobot_Request as Request
    from tutorial_interfaces.srv._move_robot import MoveRobot_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
