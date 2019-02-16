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


class BTPNode(object):
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
        'short_descriptor': 'str',
        'atomic': 'bool',
        'start_source_location': 'int',
        'end_source_location': 'int',
        'documentation_type': 'str',
        'space_before': 'BTPSpace',
        'changeable_child_field_indices': 'list[int]',
        'first_child_field': 'int',
        'space_after': 'BTPSpace',
        'space_default': 'bool',
        'node_id': 'str',
        'child_map_indices': 'list[int]',
        'atomic_child_indices': 'list[int]',
        'node_id_raw': 'BTObjectId',
        'child_list_indices': 'list[int]',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'short_descriptor': 'shortDescriptor',
        'atomic': 'atomic',
        'start_source_location': 'startSourceLocation',
        'end_source_location': 'endSourceLocation',
        'documentation_type': 'documentationType',
        'space_before': 'spaceBefore',
        'changeable_child_field_indices': 'changeableChildFieldIndices',
        'first_child_field': 'firstChildField',
        'space_after': 'spaceAfter',
        'space_default': 'spaceDefault',
        'node_id': 'nodeId',
        'child_map_indices': 'childMapIndices',
        'atomic_child_indices': 'atomicChildIndices',
        'node_id_raw': 'nodeIdRaw',
        'child_list_indices': 'childListIndices',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, short_descriptor=None, atomic=None, start_source_location=None, end_source_location=None, documentation_type=None, space_before=None, changeable_child_field_indices=None, first_child_field=None, space_after=None, space_default=None, node_id=None, child_map_indices=None, atomic_child_indices=None, node_id_raw=None, child_list_indices=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTPNode - a model defined in OpenAPI"""  # noqa: E501

        self._short_descriptor = None
        self._atomic = None
        self._start_source_location = None
        self._end_source_location = None
        self._documentation_type = None
        self._space_before = None
        self._changeable_child_field_indices = None
        self._first_child_field = None
        self._space_after = None
        self._space_default = None
        self._node_id = None
        self._child_map_indices = None
        self._atomic_child_indices = None
        self._node_id_raw = None
        self._child_list_indices = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if short_descriptor is not None:
            self.short_descriptor = short_descriptor
        if atomic is not None:
            self.atomic = atomic
        if start_source_location is not None:
            self.start_source_location = start_source_location
        if end_source_location is not None:
            self.end_source_location = end_source_location
        if documentation_type is not None:
            self.documentation_type = documentation_type
        if space_before is not None:
            self.space_before = space_before
        if changeable_child_field_indices is not None:
            self.changeable_child_field_indices = changeable_child_field_indices
        if first_child_field is not None:
            self.first_child_field = first_child_field
        if space_after is not None:
            self.space_after = space_after
        if space_default is not None:
            self.space_default = space_default
        if node_id is not None:
            self.node_id = node_id
        if child_map_indices is not None:
            self.child_map_indices = child_map_indices
        if atomic_child_indices is not None:
            self.atomic_child_indices = atomic_child_indices
        if node_id_raw is not None:
            self.node_id_raw = node_id_raw
        if child_list_indices is not None:
            self.child_list_indices = child_list_indices
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def short_descriptor(self):
        """Gets the short_descriptor of this BTPNode.  # noqa: E501


        :return: The short_descriptor of this BTPNode.  # noqa: E501
        :rtype: str
        """
        return self._short_descriptor

    @short_descriptor.setter
    def short_descriptor(self, short_descriptor):
        """Sets the short_descriptor of this BTPNode.


        :param short_descriptor: The short_descriptor of this BTPNode.  # noqa: E501
        :type: str
        """

        self._short_descriptor = short_descriptor

    @property
    def atomic(self):
        """Gets the atomic of this BTPNode.  # noqa: E501


        :return: The atomic of this BTPNode.  # noqa: E501
        :rtype: bool
        """
        return self._atomic

    @atomic.setter
    def atomic(self, atomic):
        """Sets the atomic of this BTPNode.


        :param atomic: The atomic of this BTPNode.  # noqa: E501
        :type: bool
        """

        self._atomic = atomic

    @property
    def start_source_location(self):
        """Gets the start_source_location of this BTPNode.  # noqa: E501


        :return: The start_source_location of this BTPNode.  # noqa: E501
        :rtype: int
        """
        return self._start_source_location

    @start_source_location.setter
    def start_source_location(self, start_source_location):
        """Sets the start_source_location of this BTPNode.


        :param start_source_location: The start_source_location of this BTPNode.  # noqa: E501
        :type: int
        """

        self._start_source_location = start_source_location

    @property
    def end_source_location(self):
        """Gets the end_source_location of this BTPNode.  # noqa: E501


        :return: The end_source_location of this BTPNode.  # noqa: E501
        :rtype: int
        """
        return self._end_source_location

    @end_source_location.setter
    def end_source_location(self, end_source_location):
        """Sets the end_source_location of this BTPNode.


        :param end_source_location: The end_source_location of this BTPNode.  # noqa: E501
        :type: int
        """

        self._end_source_location = end_source_location

    @property
    def documentation_type(self):
        """Gets the documentation_type of this BTPNode.  # noqa: E501


        :return: The documentation_type of this BTPNode.  # noqa: E501
        :rtype: str
        """
        return self._documentation_type

    @documentation_type.setter
    def documentation_type(self, documentation_type):
        """Sets the documentation_type of this BTPNode.


        :param documentation_type: The documentation_type of this BTPNode.  # noqa: E501
        :type: str
        """
        allowed_values = ["FUNCTION", "PREDICATE", "CONSTANT", "ENUM", "USER_TYPE", "FEATURE_DEFINITION", "FILE_HEADER", "UNDOCUMENTABLE", "UNKNOWN"]  # noqa: E501
        if documentation_type not in allowed_values:
            raise ValueError(
                "Invalid value for `documentation_type` ({0}), must be one of {1}"  # noqa: E501
                .format(documentation_type, allowed_values)
            )

        self._documentation_type = documentation_type

    @property
    def space_before(self):
        """Gets the space_before of this BTPNode.  # noqa: E501


        :return: The space_before of this BTPNode.  # noqa: E501
        :rtype: BTPSpace
        """
        return self._space_before

    @space_before.setter
    def space_before(self, space_before):
        """Sets the space_before of this BTPNode.


        :param space_before: The space_before of this BTPNode.  # noqa: E501
        :type: BTPSpace
        """

        self._space_before = space_before

    @property
    def changeable_child_field_indices(self):
        """Gets the changeable_child_field_indices of this BTPNode.  # noqa: E501


        :return: The changeable_child_field_indices of this BTPNode.  # noqa: E501
        :rtype: list[int]
        """
        return self._changeable_child_field_indices

    @changeable_child_field_indices.setter
    def changeable_child_field_indices(self, changeable_child_field_indices):
        """Sets the changeable_child_field_indices of this BTPNode.


        :param changeable_child_field_indices: The changeable_child_field_indices of this BTPNode.  # noqa: E501
        :type: list[int]
        """

        self._changeable_child_field_indices = changeable_child_field_indices

    @property
    def first_child_field(self):
        """Gets the first_child_field of this BTPNode.  # noqa: E501


        :return: The first_child_field of this BTPNode.  # noqa: E501
        :rtype: int
        """
        return self._first_child_field

    @first_child_field.setter
    def first_child_field(self, first_child_field):
        """Sets the first_child_field of this BTPNode.


        :param first_child_field: The first_child_field of this BTPNode.  # noqa: E501
        :type: int
        """

        self._first_child_field = first_child_field

    @property
    def space_after(self):
        """Gets the space_after of this BTPNode.  # noqa: E501


        :return: The space_after of this BTPNode.  # noqa: E501
        :rtype: BTPSpace
        """
        return self._space_after

    @space_after.setter
    def space_after(self, space_after):
        """Sets the space_after of this BTPNode.


        :param space_after: The space_after of this BTPNode.  # noqa: E501
        :type: BTPSpace
        """

        self._space_after = space_after

    @property
    def space_default(self):
        """Gets the space_default of this BTPNode.  # noqa: E501


        :return: The space_default of this BTPNode.  # noqa: E501
        :rtype: bool
        """
        return self._space_default

    @space_default.setter
    def space_default(self, space_default):
        """Sets the space_default of this BTPNode.


        :param space_default: The space_default of this BTPNode.  # noqa: E501
        :type: bool
        """

        self._space_default = space_default

    @property
    def node_id(self):
        """Gets the node_id of this BTPNode.  # noqa: E501


        :return: The node_id of this BTPNode.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTPNode.


        :param node_id: The node_id of this BTPNode.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def child_map_indices(self):
        """Gets the child_map_indices of this BTPNode.  # noqa: E501


        :return: The child_map_indices of this BTPNode.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_map_indices

    @child_map_indices.setter
    def child_map_indices(self, child_map_indices):
        """Sets the child_map_indices of this BTPNode.


        :param child_map_indices: The child_map_indices of this BTPNode.  # noqa: E501
        :type: list[int]
        """

        self._child_map_indices = child_map_indices

    @property
    def atomic_child_indices(self):
        """Gets the atomic_child_indices of this BTPNode.  # noqa: E501


        :return: The atomic_child_indices of this BTPNode.  # noqa: E501
        :rtype: list[int]
        """
        return self._atomic_child_indices

    @atomic_child_indices.setter
    def atomic_child_indices(self, atomic_child_indices):
        """Sets the atomic_child_indices of this BTPNode.


        :param atomic_child_indices: The atomic_child_indices of this BTPNode.  # noqa: E501
        :type: list[int]
        """

        self._atomic_child_indices = atomic_child_indices

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTPNode.  # noqa: E501


        :return: The node_id_raw of this BTPNode.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTPNode.


        :param node_id_raw: The node_id_raw of this BTPNode.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

    @property
    def child_list_indices(self):
        """Gets the child_list_indices of this BTPNode.  # noqa: E501


        :return: The child_list_indices of this BTPNode.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_list_indices

    @child_list_indices.setter
    def child_list_indices(self, child_list_indices):
        """Sets the child_list_indices of this BTPNode.


        :param child_list_indices: The child_list_indices of this BTPNode.  # noqa: E501
        :type: list[int]
        """

        self._child_list_indices = child_list_indices

    @property
    def type_id(self):
        """Gets the type_id of this BTPNode.  # noqa: E501


        :return: The type_id of this BTPNode.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTPNode.


        :param type_id: The type_id of this BTPNode.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTPNode.  # noqa: E501


        :return: The export_type_name of this BTPNode.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTPNode.


        :param export_type_name: The export_type_name of this BTPNode.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTPNode.  # noqa: E501


        :return: The connection_source of this BTPNode.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTPNode.


        :param connection_source: The connection_source of this BTPNode.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTPNode.  # noqa: E501


        :return: The unknown_class of this BTPNode.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTPNode.


        :param unknown_class: The unknown_class of this BTPNode.  # noqa: E501
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
        if not isinstance(other, BTPNode):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
