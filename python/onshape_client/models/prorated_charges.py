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


class ProratedCharges(object):
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
        'date': 'datetime',
        'amount': 'int'
    }

    attribute_map = {
        'description': 'description',
        'date': 'date',
        'amount': 'amount'
    }

    def __init__(self, description=None, date=None, amount=None):  # noqa: E501
        """ProratedCharges - a model defined in OpenAPI"""  # noqa: E501

        self._description = None
        self._date = None
        self._amount = None
        self.discriminator = None

        if description is not None:
            self.description = description
        if date is not None:
            self.date = date
        if amount is not None:
            self.amount = amount

    @property
    def description(self):
        """Gets the description of this ProratedCharges.  # noqa: E501


        :return: The description of this ProratedCharges.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this ProratedCharges.


        :param description: The description of this ProratedCharges.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def date(self):
        """Gets the date of this ProratedCharges.  # noqa: E501


        :return: The date of this ProratedCharges.  # noqa: E501
        :rtype: datetime
        """
        return self._date

    @date.setter
    def date(self, date):
        """Sets the date of this ProratedCharges.


        :param date: The date of this ProratedCharges.  # noqa: E501
        :type: datetime
        """

        self._date = date

    @property
    def amount(self):
        """Gets the amount of this ProratedCharges.  # noqa: E501


        :return: The amount of this ProratedCharges.  # noqa: E501
        :rtype: int
        """
        return self._amount

    @amount.setter
    def amount(self, amount):
        """Sets the amount of this ProratedCharges.


        :param amount: The amount of this ProratedCharges.  # noqa: E501
        :type: int
        """

        self._amount = amount

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
        if not isinstance(other, ProratedCharges):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
