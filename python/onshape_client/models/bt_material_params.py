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


class BTMaterialParams(object):
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
        'properties': 'list[BTMaterialPropertyParams]',
        'id': 'str',
        'display_name': 'str',
        'library_name': 'str',
        'library_reference': 'BTExternalElementReferenceInfo'
    }

    attribute_map = {
        'properties': 'properties',
        'id': 'id',
        'display_name': 'displayName',
        'library_name': 'libraryName',
        'library_reference': 'libraryReference'
    }

    def __init__(self, properties=None, id=None, display_name=None, library_name=None, library_reference=None):  # noqa: E501
        """BTMaterialParams - a model defined in OpenAPI"""  # noqa: E501

        self._properties = None
        self._id = None
        self._display_name = None
        self._library_name = None
        self._library_reference = None
        self.discriminator = None

        if properties is not None:
            self.properties = properties
        if id is not None:
            self.id = id
        if display_name is not None:
            self.display_name = display_name
        if library_name is not None:
            self.library_name = library_name
        if library_reference is not None:
            self.library_reference = library_reference

    @property
    def properties(self):
        """Gets the properties of this BTMaterialParams.  # noqa: E501


        :return: The properties of this BTMaterialParams.  # noqa: E501
        :rtype: list[BTMaterialPropertyParams]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this BTMaterialParams.


        :param properties: The properties of this BTMaterialParams.  # noqa: E501
        :type: list[BTMaterialPropertyParams]
        """

        self._properties = properties

    @property
    def id(self):
        """Gets the id of this BTMaterialParams.  # noqa: E501


        :return: The id of this BTMaterialParams.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTMaterialParams.


        :param id: The id of this BTMaterialParams.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def display_name(self):
        """Gets the display_name of this BTMaterialParams.  # noqa: E501


        :return: The display_name of this BTMaterialParams.  # noqa: E501
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """Sets the display_name of this BTMaterialParams.


        :param display_name: The display_name of this BTMaterialParams.  # noqa: E501
        :type: str
        """

        self._display_name = display_name

    @property
    def library_name(self):
        """Gets the library_name of this BTMaterialParams.  # noqa: E501


        :return: The library_name of this BTMaterialParams.  # noqa: E501
        :rtype: str
        """
        return self._library_name

    @library_name.setter
    def library_name(self, library_name):
        """Sets the library_name of this BTMaterialParams.


        :param library_name: The library_name of this BTMaterialParams.  # noqa: E501
        :type: str
        """

        self._library_name = library_name

    @property
    def library_reference(self):
        """Gets the library_reference of this BTMaterialParams.  # noqa: E501


        :return: The library_reference of this BTMaterialParams.  # noqa: E501
        :rtype: BTExternalElementReferenceInfo
        """
        return self._library_reference

    @library_reference.setter
    def library_reference(self, library_reference):
        """Sets the library_reference of this BTMaterialParams.


        :param library_reference: The library_reference of this BTMaterialParams.  # noqa: E501
        :type: BTExternalElementReferenceInfo
        """

        self._library_reference = library_reference

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
        if not isinstance(other, BTMaterialParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
