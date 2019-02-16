# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.93
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTNotice(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'location_infos': 'list[BTLocationInfo]',
        'message': 'str',
        'stack_trace': 'list[BTLocationInfo]',
        'type': 'str',
        'level': 'str',
        'parameter_id': 'str',
        'changeable_child_field_indices': 'list[int]',
        'first_child_field': 'int',
        'child_list_indices': 'list[int]',
        'try_node': 'BTNodeReference',
        'node_id': 'str',
        'child_map_indices': 'list[int]',
        'atomic_child_indices': 'list[int]',
        'node_id_raw': 'BTObjectId',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'location_infos': 'locationInfos',
        'message': 'message',
        'stack_trace': 'stackTrace',
        'type': 'type',
        'level': 'level',
        'parameter_id': 'parameterId',
        'changeable_child_field_indices': 'changeableChildFieldIndices',
        'first_child_field': 'firstChildField',
        'child_list_indices': 'childListIndices',
        'try_node': 'tryNode',
        'node_id': 'nodeId',
        'child_map_indices': 'childMapIndices',
        'atomic_child_indices': 'atomicChildIndices',
        'node_id_raw': 'nodeIdRaw',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, location_infos=None, message=None, stack_trace=None, type=None, level=None, parameter_id=None, changeable_child_field_indices=None, first_child_field=None, child_list_indices=None, try_node=None, node_id=None, child_map_indices=None, atomic_child_indices=None, node_id_raw=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTNotice - a model defined in OpenAPI"""  # noqa: E501

        self._location_infos = None
        self._message = None
        self._stack_trace = None
        self._type = None
        self._level = None
        self._parameter_id = None
        self._changeable_child_field_indices = None
        self._first_child_field = None
        self._child_list_indices = None
        self._try_node = None
        self._node_id = None
        self._child_map_indices = None
        self._atomic_child_indices = None
        self._node_id_raw = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if location_infos is not None:
            self.location_infos = location_infos
        if message is not None:
            self.message = message
        if stack_trace is not None:
            self.stack_trace = stack_trace
        if type is not None:
            self.type = type
        if level is not None:
            self.level = level
        if parameter_id is not None:
            self.parameter_id = parameter_id
        if changeable_child_field_indices is not None:
            self.changeable_child_field_indices = changeable_child_field_indices
        if first_child_field is not None:
            self.first_child_field = first_child_field
        if child_list_indices is not None:
            self.child_list_indices = child_list_indices
        if try_node is not None:
            self.try_node = try_node
        if node_id is not None:
            self.node_id = node_id
        if child_map_indices is not None:
            self.child_map_indices = child_map_indices
        if atomic_child_indices is not None:
            self.atomic_child_indices = atomic_child_indices
        if node_id_raw is not None:
            self.node_id_raw = node_id_raw
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def location_infos(self):
        """Gets the location_infos of this BTNotice.  # noqa: E501


        :return: The location_infos of this BTNotice.  # noqa: E501
        :rtype: list[BTLocationInfo]
        """
        return self._location_infos

    @location_infos.setter
    def location_infos(self, location_infos):
        """Sets the location_infos of this BTNotice.


        :param location_infos: The location_infos of this BTNotice.  # noqa: E501
        :type: list[BTLocationInfo]
        """

        self._location_infos = location_infos

    @property
    def message(self):
        """Gets the message of this BTNotice.  # noqa: E501


        :return: The message of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._message

    @message.setter
    def message(self, message):
        """Sets the message of this BTNotice.


        :param message: The message of this BTNotice.  # noqa: E501
        :type: str
        """

        self._message = message

    @property
    def stack_trace(self):
        """Gets the stack_trace of this BTNotice.  # noqa: E501


        :return: The stack_trace of this BTNotice.  # noqa: E501
        :rtype: list[BTLocationInfo]
        """
        return self._stack_trace

    @stack_trace.setter
    def stack_trace(self, stack_trace):
        """Sets the stack_trace of this BTNotice.


        :param stack_trace: The stack_trace of this BTNotice.  # noqa: E501
        :type: list[BTLocationInfo]
        """

        self._stack_trace = stack_trace

    @property
    def type(self):
        """Gets the type of this BTNotice.  # noqa: E501


        :return: The type of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTNotice.


        :param type: The type of this BTNotice.  # noqa: E501
        :type: str
        """
        allowed_values = ["PARSE", "SEMANTIC", "EXECUTION", "GEOMETRY", "TEST", "OTHER", "UNKNOWN"]  # noqa: E501
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"  # noqa: E501
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def level(self):
        """Gets the level of this BTNotice.  # noqa: E501


        :return: The level of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._level

    @level.setter
    def level(self, level):
        """Sets the level of this BTNotice.


        :param level: The level of this BTNotice.  # noqa: E501
        :type: str
        """
        allowed_values = ["INTERNAL", "ERROR", "WARNING", "INFO", "UNKNOWN"]  # noqa: E501
        if level not in allowed_values:
            raise ValueError(
                "Invalid value for `level` ({0}), must be one of {1}"  # noqa: E501
                .format(level, allowed_values)
            )

        self._level = level

    @property
    def parameter_id(self):
        """Gets the parameter_id of this BTNotice.  # noqa: E501


        :return: The parameter_id of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._parameter_id

    @parameter_id.setter
    def parameter_id(self, parameter_id):
        """Sets the parameter_id of this BTNotice.


        :param parameter_id: The parameter_id of this BTNotice.  # noqa: E501
        :type: str
        """

        self._parameter_id = parameter_id

    @property
    def changeable_child_field_indices(self):
        """Gets the changeable_child_field_indices of this BTNotice.  # noqa: E501


        :return: The changeable_child_field_indices of this BTNotice.  # noqa: E501
        :rtype: list[int]
        """
        return self._changeable_child_field_indices

    @changeable_child_field_indices.setter
    def changeable_child_field_indices(self, changeable_child_field_indices):
        """Sets the changeable_child_field_indices of this BTNotice.


        :param changeable_child_field_indices: The changeable_child_field_indices of this BTNotice.  # noqa: E501
        :type: list[int]
        """

        self._changeable_child_field_indices = changeable_child_field_indices

    @property
    def first_child_field(self):
        """Gets the first_child_field of this BTNotice.  # noqa: E501


        :return: The first_child_field of this BTNotice.  # noqa: E501
        :rtype: int
        """
        return self._first_child_field

    @first_child_field.setter
    def first_child_field(self, first_child_field):
        """Sets the first_child_field of this BTNotice.


        :param first_child_field: The first_child_field of this BTNotice.  # noqa: E501
        :type: int
        """

        self._first_child_field = first_child_field

    @property
    def child_list_indices(self):
        """Gets the child_list_indices of this BTNotice.  # noqa: E501


        :return: The child_list_indices of this BTNotice.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_list_indices

    @child_list_indices.setter
    def child_list_indices(self, child_list_indices):
        """Sets the child_list_indices of this BTNotice.


        :param child_list_indices: The child_list_indices of this BTNotice.  # noqa: E501
        :type: list[int]
        """

        self._child_list_indices = child_list_indices

    @property
    def try_node(self):
        """Gets the try_node of this BTNotice.  # noqa: E501


        :return: The try_node of this BTNotice.  # noqa: E501
        :rtype: BTNodeReference
        """
        return self._try_node

    @try_node.setter
    def try_node(self, try_node):
        """Sets the try_node of this BTNotice.


        :param try_node: The try_node of this BTNotice.  # noqa: E501
        :type: BTNodeReference
        """

        self._try_node = try_node

    @property
    def node_id(self):
        """Gets the node_id of this BTNotice.  # noqa: E501


        :return: The node_id of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTNotice.


        :param node_id: The node_id of this BTNotice.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def child_map_indices(self):
        """Gets the child_map_indices of this BTNotice.  # noqa: E501


        :return: The child_map_indices of this BTNotice.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_map_indices

    @child_map_indices.setter
    def child_map_indices(self, child_map_indices):
        """Sets the child_map_indices of this BTNotice.


        :param child_map_indices: The child_map_indices of this BTNotice.  # noqa: E501
        :type: list[int]
        """

        self._child_map_indices = child_map_indices

    @property
    def atomic_child_indices(self):
        """Gets the atomic_child_indices of this BTNotice.  # noqa: E501


        :return: The atomic_child_indices of this BTNotice.  # noqa: E501
        :rtype: list[int]
        """
        return self._atomic_child_indices

    @atomic_child_indices.setter
    def atomic_child_indices(self, atomic_child_indices):
        """Sets the atomic_child_indices of this BTNotice.


        :param atomic_child_indices: The atomic_child_indices of this BTNotice.  # noqa: E501
        :type: list[int]
        """

        self._atomic_child_indices = atomic_child_indices

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTNotice.  # noqa: E501


        :return: The node_id_raw of this BTNotice.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTNotice.


        :param node_id_raw: The node_id_raw of this BTNotice.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

    @property
    def type_id(self):
        """Gets the type_id of this BTNotice.  # noqa: E501


        :return: The type_id of this BTNotice.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTNotice.


        :param type_id: The type_id of this BTNotice.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTNotice.  # noqa: E501


        :return: The export_type_name of this BTNotice.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTNotice.


        :param export_type_name: The export_type_name of this BTNotice.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTNotice.  # noqa: E501


        :return: The connection_source of this BTNotice.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTNotice.


        :param connection_source: The connection_source of this BTNotice.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTNotice.  # noqa: E501


        :return: The unknown_class of this BTNotice.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTNotice.


        :param unknown_class: The unknown_class of this BTNotice.  # noqa: E501
        :type: bool
        """

        self._unknown_class = unknown_class

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTNotice):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
