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


class BTMetadataPropertyValidatorInfo(object):
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
        'max': 'float',
        'min': 'float',
        'pattern': 'str',
        'min_length': 'int',
        'max_length': 'int',
        'min_date': 'datetime',
        'max_date': 'datetime',
        'min_count': 'int',
        'max_count': 'int'
    }

    attribute_map = {
        'max': 'max',
        'min': 'min',
        'pattern': 'pattern',
        'min_length': 'minLength',
        'max_length': 'maxLength',
        'min_date': 'minDate',
        'max_date': 'maxDate',
        'min_count': 'minCount',
        'max_count': 'maxCount'
    }

    def __init__(self, max=None, min=None, pattern=None, min_length=None, max_length=None, min_date=None, max_date=None, min_count=None, max_count=None):  # noqa: E501
        """BTMetadataPropertyValidatorInfo - a model defined in OpenAPI"""  # noqa: E501

        self._max = None
        self._min = None
        self._pattern = None
        self._min_length = None
        self._max_length = None
        self._min_date = None
        self._max_date = None
        self._min_count = None
        self._max_count = None
        self.discriminator = None

        if max is not None:
            self.max = max
        if min is not None:
            self.min = min
        if pattern is not None:
            self.pattern = pattern
        if min_length is not None:
            self.min_length = min_length
        if max_length is not None:
            self.max_length = max_length
        if min_date is not None:
            self.min_date = min_date
        if max_date is not None:
            self.max_date = max_date
        if min_count is not None:
            self.min_count = min_count
        if max_count is not None:
            self.max_count = max_count

    @property
    def max(self):
        """Gets the max of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The max of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: float
        """
        return self._max

    @max.setter
    def max(self, max):
        """Sets the max of this BTMetadataPropertyValidatorInfo.


        :param max: The max of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: float
        """

        self._max = max

    @property
    def min(self):
        """Gets the min of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The min of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: float
        """
        return self._min

    @min.setter
    def min(self, min):
        """Sets the min of this BTMetadataPropertyValidatorInfo.


        :param min: The min of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: float
        """

        self._min = min

    @property
    def pattern(self):
        """Gets the pattern of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The pattern of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: str
        """
        return self._pattern

    @pattern.setter
    def pattern(self, pattern):
        """Sets the pattern of this BTMetadataPropertyValidatorInfo.


        :param pattern: The pattern of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: str
        """

        self._pattern = pattern

    @property
    def min_length(self):
        """Gets the min_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The min_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: int
        """
        return self._min_length

    @min_length.setter
    def min_length(self, min_length):
        """Sets the min_length of this BTMetadataPropertyValidatorInfo.


        :param min_length: The min_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: int
        """

        self._min_length = min_length

    @property
    def max_length(self):
        """Gets the max_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The max_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: int
        """
        return self._max_length

    @max_length.setter
    def max_length(self, max_length):
        """Sets the max_length of this BTMetadataPropertyValidatorInfo.


        :param max_length: The max_length of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: int
        """

        self._max_length = max_length

    @property
    def min_date(self):
        """Gets the min_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The min_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._min_date

    @min_date.setter
    def min_date(self, min_date):
        """Sets the min_date of this BTMetadataPropertyValidatorInfo.


        :param min_date: The min_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: datetime
        """

        self._min_date = min_date

    @property
    def max_date(self):
        """Gets the max_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The max_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: datetime
        """
        return self._max_date

    @max_date.setter
    def max_date(self, max_date):
        """Sets the max_date of this BTMetadataPropertyValidatorInfo.


        :param max_date: The max_date of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: datetime
        """

        self._max_date = max_date

    @property
    def min_count(self):
        """Gets the min_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The min_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: int
        """
        return self._min_count

    @min_count.setter
    def min_count(self, min_count):
        """Sets the min_count of this BTMetadataPropertyValidatorInfo.


        :param min_count: The min_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: int
        """

        self._min_count = min_count

    @property
    def max_count(self):
        """Gets the max_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501


        :return: The max_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :rtype: int
        """
        return self._max_count

    @max_count.setter
    def max_count(self, max_count):
        """Sets the max_count of this BTMetadataPropertyValidatorInfo.


        :param max_count: The max_count of this BTMetadataPropertyValidatorInfo.  # noqa: E501
        :type: int
        """

        self._max_count = max_count

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
        if not isinstance(other, BTMetadataPropertyValidatorInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
