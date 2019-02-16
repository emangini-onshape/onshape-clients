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


class BTMassProperties(object):
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
        'has_mass': 'bool',
        'mass_missing_count': 'int',
        'mass': 'list[float]',
        'volume': 'list[float]',
        'periphery': 'list[float]',
        'centroid': 'list[float]',
        'inertia': 'list[float]',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'has_mass': 'hasMass',
        'mass_missing_count': 'massMissingCount',
        'mass': 'mass',
        'volume': 'volume',
        'periphery': 'periphery',
        'centroid': 'centroid',
        'inertia': 'inertia',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, has_mass=None, mass_missing_count=None, mass=None, volume=None, periphery=None, centroid=None, inertia=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTMassProperties - a model defined in OpenAPI"""  # noqa: E501

        self._has_mass = None
        self._mass_missing_count = None
        self._mass = None
        self._volume = None
        self._periphery = None
        self._centroid = None
        self._inertia = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if has_mass is not None:
            self.has_mass = has_mass
        if mass_missing_count is not None:
            self.mass_missing_count = mass_missing_count
        if mass is not None:
            self.mass = mass
        if volume is not None:
            self.volume = volume
        if periphery is not None:
            self.periphery = periphery
        if centroid is not None:
            self.centroid = centroid
        if inertia is not None:
            self.inertia = inertia
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def has_mass(self):
        """Gets the has_mass of this BTMassProperties.  # noqa: E501


        :return: The has_mass of this BTMassProperties.  # noqa: E501
        :rtype: bool
        """
        return self._has_mass

    @has_mass.setter
    def has_mass(self, has_mass):
        """Sets the has_mass of this BTMassProperties.


        :param has_mass: The has_mass of this BTMassProperties.  # noqa: E501
        :type: bool
        """

        self._has_mass = has_mass

    @property
    def mass_missing_count(self):
        """Gets the mass_missing_count of this BTMassProperties.  # noqa: E501


        :return: The mass_missing_count of this BTMassProperties.  # noqa: E501
        :rtype: int
        """
        return self._mass_missing_count

    @mass_missing_count.setter
    def mass_missing_count(self, mass_missing_count):
        """Sets the mass_missing_count of this BTMassProperties.


        :param mass_missing_count: The mass_missing_count of this BTMassProperties.  # noqa: E501
        :type: int
        """

        self._mass_missing_count = mass_missing_count

    @property
    def mass(self):
        """Gets the mass of this BTMassProperties.  # noqa: E501


        :return: The mass of this BTMassProperties.  # noqa: E501
        :rtype: list[float]
        """
        return self._mass

    @mass.setter
    def mass(self, mass):
        """Sets the mass of this BTMassProperties.


        :param mass: The mass of this BTMassProperties.  # noqa: E501
        :type: list[float]
        """

        self._mass = mass

    @property
    def volume(self):
        """Gets the volume of this BTMassProperties.  # noqa: E501


        :return: The volume of this BTMassProperties.  # noqa: E501
        :rtype: list[float]
        """
        return self._volume

    @volume.setter
    def volume(self, volume):
        """Sets the volume of this BTMassProperties.


        :param volume: The volume of this BTMassProperties.  # noqa: E501
        :type: list[float]
        """

        self._volume = volume

    @property
    def periphery(self):
        """Gets the periphery of this BTMassProperties.  # noqa: E501


        :return: The periphery of this BTMassProperties.  # noqa: E501
        :rtype: list[float]
        """
        return self._periphery

    @periphery.setter
    def periphery(self, periphery):
        """Sets the periphery of this BTMassProperties.


        :param periphery: The periphery of this BTMassProperties.  # noqa: E501
        :type: list[float]
        """

        self._periphery = periphery

    @property
    def centroid(self):
        """Gets the centroid of this BTMassProperties.  # noqa: E501


        :return: The centroid of this BTMassProperties.  # noqa: E501
        :rtype: list[float]
        """
        return self._centroid

    @centroid.setter
    def centroid(self, centroid):
        """Sets the centroid of this BTMassProperties.


        :param centroid: The centroid of this BTMassProperties.  # noqa: E501
        :type: list[float]
        """

        self._centroid = centroid

    @property
    def inertia(self):
        """Gets the inertia of this BTMassProperties.  # noqa: E501


        :return: The inertia of this BTMassProperties.  # noqa: E501
        :rtype: list[float]
        """
        return self._inertia

    @inertia.setter
    def inertia(self, inertia):
        """Sets the inertia of this BTMassProperties.


        :param inertia: The inertia of this BTMassProperties.  # noqa: E501
        :type: list[float]
        """

        self._inertia = inertia

    @property
    def type_id(self):
        """Gets the type_id of this BTMassProperties.  # noqa: E501


        :return: The type_id of this BTMassProperties.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTMassProperties.


        :param type_id: The type_id of this BTMassProperties.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTMassProperties.  # noqa: E501


        :return: The export_type_name of this BTMassProperties.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTMassProperties.


        :param export_type_name: The export_type_name of this BTMassProperties.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTMassProperties.  # noqa: E501


        :return: The connection_source of this BTMassProperties.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTMassProperties.


        :param connection_source: The connection_source of this BTMassProperties.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTMassProperties.  # noqa: E501


        :return: The unknown_class of this BTMassProperties.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTMassProperties.


        :param unknown_class: The unknown_class of this BTMassProperties.  # noqa: E501
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
        if not isinstance(other, BTMassProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
