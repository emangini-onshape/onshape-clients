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


class BTESDocumentHit(object):
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
        'name': 'str',
        'type': 'str',
        'document_id': 'str',
        'source_map': 'dict(str, object)',
        'highlighted_fields': 'dict(str, list[str])'
    }

    attribute_map = {
        'name': 'name',
        'type': 'type',
        'document_id': 'documentId',
        'source_map': 'sourceMap',
        'highlighted_fields': 'highlightedFields'
    }

    def __init__(self, name=None, type=None, document_id=None, source_map=None, highlighted_fields=None):  # noqa: E501
        """BTESDocumentHit - a model defined in OpenAPI"""  # noqa: E501

        self._name = None
        self._type = None
        self._document_id = None
        self._source_map = None
        self._highlighted_fields = None
        self.discriminator = None

        if name is not None:
            self.name = name
        if type is not None:
            self.type = type
        if document_id is not None:
            self.document_id = document_id
        if source_map is not None:
            self.source_map = source_map
        if highlighted_fields is not None:
            self.highlighted_fields = highlighted_fields

    @property
    def name(self):
        """Gets the name of this BTESDocumentHit.  # noqa: E501


        :return: The name of this BTESDocumentHit.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTESDocumentHit.


        :param name: The name of this BTESDocumentHit.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def type(self):
        """Gets the type of this BTESDocumentHit.  # noqa: E501


        :return: The type of this BTESDocumentHit.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this BTESDocumentHit.


        :param type: The type of this BTESDocumentHit.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def document_id(self):
        """Gets the document_id of this BTESDocumentHit.  # noqa: E501


        :return: The document_id of this BTESDocumentHit.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTESDocumentHit.


        :param document_id: The document_id of this BTESDocumentHit.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def source_map(self):
        """Gets the source_map of this BTESDocumentHit.  # noqa: E501


        :return: The source_map of this BTESDocumentHit.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._source_map

    @source_map.setter
    def source_map(self, source_map):
        """Sets the source_map of this BTESDocumentHit.


        :param source_map: The source_map of this BTESDocumentHit.  # noqa: E501
        :type: dict(str, object)
        """

        self._source_map = source_map

    @property
    def highlighted_fields(self):
        """Gets the highlighted_fields of this BTESDocumentHit.  # noqa: E501


        :return: The highlighted_fields of this BTESDocumentHit.  # noqa: E501
        :rtype: dict(str, list[str])
        """
        return self._highlighted_fields

    @highlighted_fields.setter
    def highlighted_fields(self, highlighted_fields):
        """Sets the highlighted_fields of this BTESDocumentHit.


        :param highlighted_fields: The highlighted_fields of this BTESDocumentHit.  # noqa: E501
        :type: dict(str, list[str])
        """

        self._highlighted_fields = highlighted_fields

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
        if not isinstance(other, BTESDocumentHit):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
