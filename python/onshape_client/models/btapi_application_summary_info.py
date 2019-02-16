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


class BTAPIApplicationSummaryInfo(object):
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
        'id': 'str',
        'state': 'int',
        'description': 'str',
        'client_id': 'str',
        'name': 'str',
        'href': 'str',
        'view_ref': 'str'
    }

    attribute_map = {
        'id': 'id',
        'state': 'state',
        'description': 'description',
        'client_id': 'clientId',
        'name': 'name',
        'href': 'href',
        'view_ref': 'viewRef'
    }

    def __init__(self, id=None, state=None, description=None, client_id=None, name=None, href=None, view_ref=None):  # noqa: E501
        """BTAPIApplicationSummaryInfo - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._state = None
        self._description = None
        self._client_id = None
        self._name = None
        self._href = None
        self._view_ref = None
        self.discriminator = None

        if id is not None:
            self.id = id
        if state is not None:
            self.state = state
        if description is not None:
            self.description = description
        if client_id is not None:
            self.client_id = client_id
        if name is not None:
            self.name = name
        if href is not None:
            self.href = href
        if view_ref is not None:
            self.view_ref = view_ref

    @property
    def id(self):
        """Gets the id of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The id of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTAPIApplicationSummaryInfo.


        :param id: The id of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def state(self):
        """Gets the state of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The state of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: int
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this BTAPIApplicationSummaryInfo.


        :param state: The state of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: int
        """

        self._state = state

    @property
    def description(self):
        """Gets the description of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The description of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTAPIApplicationSummaryInfo.


        :param description: The description of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def client_id(self):
        """Gets the client_id of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The client_id of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._client_id

    @client_id.setter
    def client_id(self, client_id):
        """Sets the client_id of this BTAPIApplicationSummaryInfo.


        :param client_id: The client_id of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._client_id = client_id

    @property
    def name(self):
        """Gets the name of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The name of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTAPIApplicationSummaryInfo.


        :param name: The name of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def href(self):
        """Gets the href of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The href of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTAPIApplicationSummaryInfo.


        :param href: The href of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def view_ref(self):
        """Gets the view_ref of this BTAPIApplicationSummaryInfo.  # noqa: E501


        :return: The view_ref of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :rtype: str
        """
        return self._view_ref

    @view_ref.setter
    def view_ref(self, view_ref):
        """Sets the view_ref of this BTAPIApplicationSummaryInfo.


        :param view_ref: The view_ref of this BTAPIApplicationSummaryInfo.  # noqa: E501
        :type: str
        """

        self._view_ref = view_ref

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
        if not isinstance(other, BTAPIApplicationSummaryInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
