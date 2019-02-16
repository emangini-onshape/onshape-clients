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


class BTUserUsagesSummary(object):
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
        'owner_name': 'str',
        'owner_id': 'str',
        'owner_type': 'str',
        'count': 'int'
    }

    attribute_map = {
        'owner_name': 'ownerName',
        'owner_id': 'ownerId',
        'owner_type': 'ownerType',
        'count': 'count'
    }

    def __init__(self, owner_name=None, owner_id=None, owner_type=None, count=None):  # noqa: E501
        """BTUserUsagesSummary - a model defined in OpenAPI"""  # noqa: E501

        self._owner_name = None
        self._owner_id = None
        self._owner_type = None
        self._count = None
        self.discriminator = None

        if owner_name is not None:
            self.owner_name = owner_name
        if owner_id is not None:
            self.owner_id = owner_id
        if owner_type is not None:
            self.owner_type = owner_type
        if count is not None:
            self.count = count

    @property
    def owner_name(self):
        """Gets the owner_name of this BTUserUsagesSummary.  # noqa: E501


        :return: The owner_name of this BTUserUsagesSummary.  # noqa: E501
        :rtype: str
        """
        return self._owner_name

    @owner_name.setter
    def owner_name(self, owner_name):
        """Sets the owner_name of this BTUserUsagesSummary.


        :param owner_name: The owner_name of this BTUserUsagesSummary.  # noqa: E501
        :type: str
        """

        self._owner_name = owner_name

    @property
    def owner_id(self):
        """Gets the owner_id of this BTUserUsagesSummary.  # noqa: E501


        :return: The owner_id of this BTUserUsagesSummary.  # noqa: E501
        :rtype: str
        """
        return self._owner_id

    @owner_id.setter
    def owner_id(self, owner_id):
        """Sets the owner_id of this BTUserUsagesSummary.


        :param owner_id: The owner_id of this BTUserUsagesSummary.  # noqa: E501
        :type: str
        """

        self._owner_id = owner_id

    @property
    def owner_type(self):
        """Gets the owner_type of this BTUserUsagesSummary.  # noqa: E501


        :return: The owner_type of this BTUserUsagesSummary.  # noqa: E501
        :rtype: str
        """
        return self._owner_type

    @owner_type.setter
    def owner_type(self, owner_type):
        """Sets the owner_type of this BTUserUsagesSummary.


        :param owner_type: The owner_type of this BTUserUsagesSummary.  # noqa: E501
        :type: str
        """

        self._owner_type = owner_type

    @property
    def count(self):
        """Gets the count of this BTUserUsagesSummary.  # noqa: E501


        :return: The count of this BTUserUsagesSummary.  # noqa: E501
        :rtype: int
        """
        return self._count

    @count.setter
    def count(self, count):
        """Sets the count of this BTUserUsagesSummary.


        :param count: The count of this BTUserUsagesSummary.  # noqa: E501
        :type: int
        """

        self._count = count

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
        if not isinstance(other, BTUserUsagesSummary):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
