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


class BTDocumentVersionElementIds(object):
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
        'version_id': 'str',
        'document_id': 'str',
        'element_id': 'str',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        'version_id': 'versionId',
        'document_id': 'documentId',
        'element_id': 'elementId',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, version_id=None, document_id=None, element_id=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTDocumentVersionElementIds - a model defined in OpenAPI"""  # noqa: E501

        self._version_id = None
        self._document_id = None
        self._element_id = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if version_id is not None:
            self.version_id = version_id
        if document_id is not None:
            self.document_id = document_id
        if element_id is not None:
            self.element_id = element_id
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def version_id(self):
        """Gets the version_id of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The version_id of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: str
        """
        return self._version_id

    @version_id.setter
    def version_id(self, version_id):
        """Sets the version_id of this BTDocumentVersionElementIds.


        :param version_id: The version_id of this BTDocumentVersionElementIds.  # noqa: E501
        :type: str
        """

        self._version_id = version_id

    @property
    def document_id(self):
        """Gets the document_id of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The document_id of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTDocumentVersionElementIds.


        :param document_id: The document_id of this BTDocumentVersionElementIds.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def element_id(self):
        """Gets the element_id of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The element_id of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTDocumentVersionElementIds.


        :param element_id: The element_id of this BTDocumentVersionElementIds.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def type_id(self):
        """Gets the type_id of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The type_id of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTDocumentVersionElementIds.


        :param type_id: The type_id of this BTDocumentVersionElementIds.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The export_type_name of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTDocumentVersionElementIds.


        :param export_type_name: The export_type_name of this BTDocumentVersionElementIds.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The connection_source of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTDocumentVersionElementIds.


        :param connection_source: The connection_source of this BTDocumentVersionElementIds.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTDocumentVersionElementIds.  # noqa: E501


        :return: The unknown_class of this BTDocumentVersionElementIds.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTDocumentVersionElementIds.


        :param unknown_class: The unknown_class of this BTDocumentVersionElementIds.  # noqa: E501
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
        if not isinstance(other, BTDocumentVersionElementIds):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
