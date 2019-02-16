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


class BTStandardContentCustomParameterDefinition(object):
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
        'id': 'BTStandardContentCustomParameterDefinitionId',
        'name': 'str',
        'description': 'str',
        'created_by': 'str',
        'created_at': 'datetime',
        'modified_by': 'str',
        'modified_at': 'datetime',
        'parameter_type': 'int',
        'parameter_value': 'str',
        'is_driving_configuration': 'bool',
        'parameter_link_type': 'int',
        'new': 'bool'
    }

    attribute_map = {
        'id': 'id',
        'name': 'name',
        'description': 'description',
        'created_by': 'createdBy',
        'created_at': 'createdAt',
        'modified_by': 'modifiedBy',
        'modified_at': 'modifiedAt',
        'parameter_type': 'parameterType',
        'parameter_value': 'parameterValue',
        'is_driving_configuration': 'isDrivingConfiguration',
        'parameter_link_type': 'parameterLinkType',
        'new': 'new'
    }

    def __init__(self, id=None, name=None, description=None, created_by=None, created_at=None, modified_by=None, modified_at=None, parameter_type=None, parameter_value=None, is_driving_configuration=None, parameter_link_type=None, new=None):  # noqa: E501
        """BTStandardContentCustomParameterDefinition - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._name = None
        self._description = None
        self._created_by = None
        self._created_at = None
        self._modified_by = None
        self._modified_at = None
        self._parameter_type = None
        self._parameter_value = None
        self._is_driving_configuration = None
        self._parameter_link_type = None
        self._new = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if name is not None:
            self.name = name
        if description is not None:
            self.description = description
        if created_by is not None:
            self.created_by = created_by
        if created_at is not None:
            self.created_at = created_at
        if modified_by is not None:
            self.modified_by = modified_by
        if modified_at is not None:
            self.modified_at = modified_at
        if parameter_type is not None:
            self.parameter_type = parameter_type
        if parameter_value is not None:
            self.parameter_value = parameter_value
        if is_driving_configuration is not None:
            self.is_driving_configuration = is_driving_configuration
        if parameter_link_type is not None:
            self.parameter_link_type = parameter_link_type
        if new is not None:
            self.new = new

    @property
    def id(self):
        """Gets the id of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The id of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: BTStandardContentCustomParameterDefinitionId
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTStandardContentCustomParameterDefinition.


        :param id: The id of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: BTStandardContentCustomParameterDefinitionId
        """

        self._id = id

    @property
    def name(self):
        """Gets the name of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The name of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTStandardContentCustomParameterDefinition.


        :param name: The name of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def description(self):
        """Gets the description of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The description of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTStandardContentCustomParameterDefinition.


        :param description: The description of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def created_by(self):
        """Gets the created_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The created_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._created_by

    @created_by.setter
    def created_by(self, created_by):
        """Sets the created_by of this BTStandardContentCustomParameterDefinition.


        :param created_by: The created_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: str
        """

        self._created_by = created_by

    @property
    def created_at(self):
        """Gets the created_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The created_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: datetime
        """
        return self._created_at

    @created_at.setter
    def created_at(self, created_at):
        """Sets the created_at of this BTStandardContentCustomParameterDefinition.


        :param created_at: The created_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: datetime
        """

        self._created_at = created_at

    @property
    def modified_by(self):
        """Gets the modified_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The modified_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._modified_by

    @modified_by.setter
    def modified_by(self, modified_by):
        """Sets the modified_by of this BTStandardContentCustomParameterDefinition.


        :param modified_by: The modified_by of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: str
        """

        self._modified_by = modified_by

    @property
    def modified_at(self):
        """Gets the modified_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The modified_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: datetime
        """
        return self._modified_at

    @modified_at.setter
    def modified_at(self, modified_at):
        """Sets the modified_at of this BTStandardContentCustomParameterDefinition.


        :param modified_at: The modified_at of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: datetime
        """

        self._modified_at = modified_at

    @property
    def parameter_type(self):
        """Gets the parameter_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The parameter_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: int
        """
        return self._parameter_type

    @parameter_type.setter
    def parameter_type(self, parameter_type):
        """Sets the parameter_type of this BTStandardContentCustomParameterDefinition.


        :param parameter_type: The parameter_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: int
        """

        self._parameter_type = parameter_type

    @property
    def parameter_value(self):
        """Gets the parameter_value of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The parameter_value of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._parameter_value

    @parameter_value.setter
    def parameter_value(self, parameter_value):
        """Sets the parameter_value of this BTStandardContentCustomParameterDefinition.


        :param parameter_value: The parameter_value of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: str
        """

        self._parameter_value = parameter_value

    @property
    def is_driving_configuration(self):
        """Gets the is_driving_configuration of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The is_driving_configuration of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: bool
        """
        return self._is_driving_configuration

    @is_driving_configuration.setter
    def is_driving_configuration(self, is_driving_configuration):
        """Sets the is_driving_configuration of this BTStandardContentCustomParameterDefinition.


        :param is_driving_configuration: The is_driving_configuration of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: bool
        """

        self._is_driving_configuration = is_driving_configuration

    @property
    def parameter_link_type(self):
        """Gets the parameter_link_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The parameter_link_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: int
        """
        return self._parameter_link_type

    @parameter_link_type.setter
    def parameter_link_type(self, parameter_link_type):
        """Sets the parameter_link_type of this BTStandardContentCustomParameterDefinition.


        :param parameter_link_type: The parameter_link_type of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: int
        """

        self._parameter_link_type = parameter_link_type

    @property
    def new(self):
        """Gets the new of this BTStandardContentCustomParameterDefinition.  # noqa: E501


        :return: The new of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :rtype: bool
        """
        return self._new

    @new.setter
    def new(self, new):
        """Sets the new of this BTStandardContentCustomParameterDefinition.


        :param new: The new of this BTStandardContentCustomParameterDefinition.  # noqa: E501
        :type: bool
        """

        self._new = new

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
        if not isinstance(other, BTStandardContentCustomParameterDefinition):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
