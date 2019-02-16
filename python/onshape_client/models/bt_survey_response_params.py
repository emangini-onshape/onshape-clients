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


class BTSurveyResponseParams(object):
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
        'property_map': 'dict(str, object)',
        'msg_id': 'str',
        'survey_type': 'int'
    }

    attribute_map = {
        'property_map': 'propertyMap',
        'msg_id': 'msgId',
        'survey_type': 'surveyType'
    }

    def __init__(self, property_map=None, msg_id=None, survey_type=None):  # noqa: E501
        """BTSurveyResponseParams - a model defined in OpenAPI"""  # noqa: E501

        self._property_map = None
        self._msg_id = None
        self._survey_type = None
        self.discriminator = None

        if property_map is not None:
            self.property_map = property_map
        if msg_id is not None:
            self.msg_id = msg_id
        if survey_type is not None:
            self.survey_type = survey_type

    @property
    def property_map(self):
        """Gets the property_map of this BTSurveyResponseParams.  # noqa: E501


        :return: The property_map of this BTSurveyResponseParams.  # noqa: E501
        :rtype: dict(str, object)
        """
        return self._property_map

    @property_map.setter
    def property_map(self, property_map):
        """Sets the property_map of this BTSurveyResponseParams.


        :param property_map: The property_map of this BTSurveyResponseParams.  # noqa: E501
        :type: dict(str, object)
        """

        self._property_map = property_map

    @property
    def msg_id(self):
        """Gets the msg_id of this BTSurveyResponseParams.  # noqa: E501


        :return: The msg_id of this BTSurveyResponseParams.  # noqa: E501
        :rtype: str
        """
        return self._msg_id

    @msg_id.setter
    def msg_id(self, msg_id):
        """Sets the msg_id of this BTSurveyResponseParams.


        :param msg_id: The msg_id of this BTSurveyResponseParams.  # noqa: E501
        :type: str
        """

        self._msg_id = msg_id

    @property
    def survey_type(self):
        """Gets the survey_type of this BTSurveyResponseParams.  # noqa: E501


        :return: The survey_type of this BTSurveyResponseParams.  # noqa: E501
        :rtype: int
        """
        return self._survey_type

    @survey_type.setter
    def survey_type(self, survey_type):
        """Sets the survey_type of this BTSurveyResponseParams.


        :param survey_type: The survey_type of this BTSurveyResponseParams.  # noqa: E501
        :type: int
        """

        self._survey_type = survey_type

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
        if not isinstance(other, BTSurveyResponseParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
