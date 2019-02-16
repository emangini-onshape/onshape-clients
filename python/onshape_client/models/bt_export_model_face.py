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


class BTExportModelFace(object):
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
        'id': 'str',
        'orientation': 'bool',
        'area': 'float',
        'surface': 'BTSurfaceDescription',
        'loops': 'list[BTExportModelLoop]',
        'box': 'BTBoundingBox',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'id': 'id',
        'orientation': 'orientation',
        'area': 'area',
        'surface': 'surface',
        'loops': 'loops',
        'box': 'box',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, id=None, orientation=None, area=None, surface=None, loops=None, box=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTExportModelFace - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._orientation = None
        self._area = None
        self._surface = None
        self._loops = None
        self._box = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if orientation is not None:
            self.orientation = orientation
        if area is not None:
            self.area = area
        if surface is not None:
            self.surface = surface
        if loops is not None:
            self.loops = loops
        if box is not None:
            self.box = box
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def id(self):
        """Gets the id of this BTExportModelFace.  # noqa: E501


        :return: The id of this BTExportModelFace.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTExportModelFace.


        :param id: The id of this BTExportModelFace.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def orientation(self):
        """Gets the orientation of this BTExportModelFace.  # noqa: E501


        :return: The orientation of this BTExportModelFace.  # noqa: E501
        :rtype: bool
        """
        return self._orientation

    @orientation.setter
    def orientation(self, orientation):
        """Sets the orientation of this BTExportModelFace.


        :param orientation: The orientation of this BTExportModelFace.  # noqa: E501
        :type: bool
        """

        self._orientation = orientation

    @property
    def area(self):
        """Gets the area of this BTExportModelFace.  # noqa: E501


        :return: The area of this BTExportModelFace.  # noqa: E501
        :rtype: float
        """
        return self._area

    @area.setter
    def area(self, area):
        """Sets the area of this BTExportModelFace.


        :param area: The area of this BTExportModelFace.  # noqa: E501
        :type: float
        """

        self._area = area

    @property
    def surface(self):
        """Gets the surface of this BTExportModelFace.  # noqa: E501


        :return: The surface of this BTExportModelFace.  # noqa: E501
        :rtype: BTSurfaceDescription
        """
        return self._surface

    @surface.setter
    def surface(self, surface):
        """Sets the surface of this BTExportModelFace.


        :param surface: The surface of this BTExportModelFace.  # noqa: E501
        :type: BTSurfaceDescription
        """

        self._surface = surface

    @property
    def loops(self):
        """Gets the loops of this BTExportModelFace.  # noqa: E501


        :return: The loops of this BTExportModelFace.  # noqa: E501
        :rtype: list[BTExportModelLoop]
        """
        return self._loops

    @loops.setter
    def loops(self, loops):
        """Sets the loops of this BTExportModelFace.


        :param loops: The loops of this BTExportModelFace.  # noqa: E501
        :type: list[BTExportModelLoop]
        """

        self._loops = loops

    @property
    def box(self):
        """Gets the box of this BTExportModelFace.  # noqa: E501


        :return: The box of this BTExportModelFace.  # noqa: E501
        :rtype: BTBoundingBox
        """
        return self._box

    @box.setter
    def box(self, box):
        """Sets the box of this BTExportModelFace.


        :param box: The box of this BTExportModelFace.  # noqa: E501
        :type: BTBoundingBox
        """

        self._box = box

    @property
    def type_id(self):
        """Gets the type_id of this BTExportModelFace.  # noqa: E501


        :return: The type_id of this BTExportModelFace.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTExportModelFace.


        :param type_id: The type_id of this BTExportModelFace.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTExportModelFace.  # noqa: E501


        :return: The export_type_name of this BTExportModelFace.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTExportModelFace.


        :param export_type_name: The export_type_name of this BTExportModelFace.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTExportModelFace.  # noqa: E501


        :return: The connection_source of this BTExportModelFace.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTExportModelFace.


        :param connection_source: The connection_source of this BTExportModelFace.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTExportModelFace.  # noqa: E501


        :return: The unknown_class of this BTExportModelFace.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTExportModelFace.


        :param unknown_class: The unknown_class of this BTExportModelFace.  # noqa: E501
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
        if not isinstance(other, BTExportModelFace):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
