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


class ApiResponse(object):
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
        'description': 'str',
        'headers': 'dict(str, Header)',
        'content': 'BodyPartHeaders',
        'links': 'dict(str, Link)',
        'extensions': 'dict(str, object)',
        'getref': 'str'
    }

    attribute_map = {
        'description': 'description',
        'headers': 'headers',
        'content': 'content',
        'links': 'links',
        'extensions': 'extensions',
        'getref': 'get$ref'
    }

    def __init__(self, description=None, headers=None, content=None, links=None, extensions=None, getref=None):  # noqa: E501
        """ApiResponse - a model defined in OpenAPI"""  # noqa: E501

        self._description = None
        self._headers = None
        self._content = None
        self._links = None
        self._extensions = None
        self._getref = None
        self.discriminator = None

        if description is not None:
            self.description = description
        if headers is not None:
            self.headers = headers
        if content is not None:
            self.content = content
        if links is not None:
            self.links = links
        if extensions is not None:
            self.extensions = extensions
        if getref is not None:
            self.getref = getref

    @property
    def description(self):
        """Gets the description of this ApiResponse.  # noqa: E501


        :return: The description of this ApiResponse.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this ApiResponse.


        :param description: The description of this ApiResponse.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def headers(self):
        """Gets the headers of this ApiResponse.  # noqa: E501


        :return: The headers of this ApiResponse.  # noqa: E501
        :rtype: dict(str, Header)
        """
        return self._headers

    @headers.setter
    def headers(self, headers):
        """Sets the headers of this ApiResponse.


        :param headers: The headers of this ApiResponse.  # noqa: E501
        :type: dict(str, Header)
        """

        self._headers = headers

    @property
    def content(self):
        """Gets the content of this ApiResponse.  # noqa: E501


        :return: The content of this ApiResponse.  # noqa: E501
        :rtype: BodyPartHeaders
        """
        return self._content

    @content.setter
    def content(self, content):
        """Sets the content of this ApiResponse.


        :param content: The content of this ApiResponse.  # noqa: E501
        :type: BodyPartHeaders
        """

        self._content = content

    @property
    def links(self):
        """Gets the links of this ApiResponse.  # noqa: E501


        :return: The links of this ApiResponse.  # noqa: E501
        :rtype: dict(str, Link)
        """
        return self._links

    @links.setter
    def links(self, links):
        """Sets the links of this ApiResponse.


        :param links: The links of this ApiResponse.  # noqa: E501
        :type: dict(str, Link)
        """

        self._links = links

    @property
    def extensions(self):
        """Gets the extensions of this ApiResponse.  # noqa: E501


        :return: The extensions of this ApiResponse.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._extensions

    @extensions.setter
    def extensions(self, extensions):
        """Sets the extensions of this ApiResponse.


        :param extensions: The extensions of this ApiResponse.  # noqa: E501
        :type: dict(str, object)
        """

        self._extensions = extensions

    @property
    def getref(self):
        """Gets the getref of this ApiResponse.  # noqa: E501


        :return: The getref of this ApiResponse.  # noqa: E501
        :rtype: str
        """
        return self._getref

    @getref.setter
    def getref(self, getref):
        """Sets the getref of this ApiResponse.


        :param getref: The getref of this ApiResponse.  # noqa: E501
        :type: str
        """

        self._getref = getref

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
        if not isinstance(other, ApiResponse):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
