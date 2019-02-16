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


class MultiPart(object):
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
        'content_disposition': 'ContentDisposition',
        'entity': 'object',
        'headers': 'BodyPartHeaders',
        'media_type': 'BodyPartMediaType',
        'message_body_workers': 'MessageBodyWorkers',
        'parent': 'MultiPart',
        'providers': 'object',
        'body_parts': 'list[BodyPart]',
        'parameterized_headers': 'BodyPartHeaders'
    }

    attribute_map = {
        'content_disposition': 'contentDisposition',
        'entity': 'entity',
        'headers': 'headers',
        'media_type': 'mediaType',
        'message_body_workers': 'messageBodyWorkers',
        'parent': 'parent',
        'providers': 'providers',
        'body_parts': 'bodyParts',
        'parameterized_headers': 'parameterizedHeaders'
    }

    def __init__(self, content_disposition=None, entity=None, headers=None, media_type=None, message_body_workers=None, parent=None, providers=None, body_parts=None, parameterized_headers=None):  # noqa: E501
        """MultiPart - a model defined in OpenAPI"""  # noqa: E501

        self._content_disposition = None
        self._entity = None
        self._headers = None
        self._media_type = None
        self._message_body_workers = None
        self._parent = None
        self._providers = None
        self._body_parts = None
        self._parameterized_headers = None
        self.discriminator = None

        if content_disposition is not None:
            self.content_disposition = content_disposition
        if entity is not None:
            self.entity = entity
        if headers is not None:
            self.headers = headers
        if media_type is not None:
            self.media_type = media_type
        if message_body_workers is not None:
            self.message_body_workers = message_body_workers
        if parent is not None:
            self.parent = parent
        if providers is not None:
            self.providers = providers
        if body_parts is not None:
            self.body_parts = body_parts
        if parameterized_headers is not None:
            self.parameterized_headers = parameterized_headers

    @property
    def content_disposition(self):
        """Gets the content_disposition of this MultiPart.  # noqa: E501


        :return: The content_disposition of this MultiPart.  # noqa: E501
        :rtype: ContentDisposition
        """
        return self._content_disposition

    @content_disposition.setter
    def content_disposition(self, content_disposition):
        """Sets the content_disposition of this MultiPart.


        :param content_disposition: The content_disposition of this MultiPart.  # noqa: E501
        :type: ContentDisposition
        """

        self._content_disposition = content_disposition

    @property
    def entity(self):
        """Gets the entity of this MultiPart.  # noqa: E501


        :return: The entity of this MultiPart.  # noqa: E501
        :rtype: object
        """
        return self._entity

    @entity.setter
    def entity(self, entity):
        """Sets the entity of this MultiPart.


        :param entity: The entity of this MultiPart.  # noqa: E501
        :type: object
        """

        self._entity = entity

    @property
    def headers(self):
        """Gets the headers of this MultiPart.  # noqa: E501


        :return: The headers of this MultiPart.  # noqa: E501
        :rtype: BodyPartHeaders
        """
        return self._headers

    @headers.setter
    def headers(self, headers):
        """Sets the headers of this MultiPart.


        :param headers: The headers of this MultiPart.  # noqa: E501
        :type: BodyPartHeaders
        """

        self._headers = headers

    @property
    def media_type(self):
        """Gets the media_type of this MultiPart.  # noqa: E501


        :return: The media_type of this MultiPart.  # noqa: E501
        :rtype: BodyPartMediaType
        """
        return self._media_type

    @media_type.setter
    def media_type(self, media_type):
        """Sets the media_type of this MultiPart.


        :param media_type: The media_type of this MultiPart.  # noqa: E501
        :type: BodyPartMediaType
        """

        self._media_type = media_type

    @property
    def message_body_workers(self):
        """Gets the message_body_workers of this MultiPart.  # noqa: E501


        :return: The message_body_workers of this MultiPart.  # noqa: E501
        :rtype: MessageBodyWorkers
        """
        return self._message_body_workers

    @message_body_workers.setter
    def message_body_workers(self, message_body_workers):
        """Sets the message_body_workers of this MultiPart.


        :param message_body_workers: The message_body_workers of this MultiPart.  # noqa: E501
        :type: MessageBodyWorkers
        """

        self._message_body_workers = message_body_workers

    @property
    def parent(self):
        """Gets the parent of this MultiPart.  # noqa: E501


        :return: The parent of this MultiPart.  # noqa: E501
        :rtype: MultiPart
        """
        return self._parent

    @parent.setter
    def parent(self, parent):
        """Sets the parent of this MultiPart.


        :param parent: The parent of this MultiPart.  # noqa: E501
        :type: MultiPart
        """

        self._parent = parent

    @property
    def providers(self):
        """Gets the providers of this MultiPart.  # noqa: E501


        :return: The providers of this MultiPart.  # noqa: E501
        :rtype: object
        """
        return self._providers

    @providers.setter
    def providers(self, providers):
        """Sets the providers of this MultiPart.


        :param providers: The providers of this MultiPart.  # noqa: E501
        :type: object
        """

        self._providers = providers

    @property
    def body_parts(self):
        """Gets the body_parts of this MultiPart.  # noqa: E501


        :return: The body_parts of this MultiPart.  # noqa: E501
        :rtype: list[BodyPart]
        """
        return self._body_parts

    @body_parts.setter
    def body_parts(self, body_parts):
        """Sets the body_parts of this MultiPart.


        :param body_parts: The body_parts of this MultiPart.  # noqa: E501
        :type: list[BodyPart]
        """

        self._body_parts = body_parts

    @property
    def parameterized_headers(self):
        """Gets the parameterized_headers of this MultiPart.  # noqa: E501


        :return: The parameterized_headers of this MultiPart.  # noqa: E501
        :rtype: BodyPartHeaders
        """
        return self._parameterized_headers

    @parameterized_headers.setter
    def parameterized_headers(self, parameterized_headers):
        """Sets the parameterized_headers of this MultiPart.


        :param parameterized_headers: The parameterized_headers of this MultiPart.  # noqa: E501
        :type: BodyPartHeaders
        """

        self._parameterized_headers = parameterized_headers

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
        if not isinstance(other, MultiPart):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
