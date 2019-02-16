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


class BTUpdateExternalReferenceParams(object):
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
        'old_version_id_to_new_version_id': 'dict(str, str)',
        'old_version_id_to_node_ids': 'dict(str, list[str])',
        'element_ids': 'list[str]',
        'auto_update': 'bool'
    }

    attribute_map = {
        'description': 'description',
        'old_version_id_to_new_version_id': 'oldVersionIdToNewVersionId',
        'old_version_id_to_node_ids': 'oldVersionIdToNodeIds',
        'element_ids': 'elementIds',
        'auto_update': 'autoUpdate'
    }

    def __init__(self, description=None, old_version_id_to_new_version_id=None, old_version_id_to_node_ids=None, element_ids=None, auto_update=None):  # noqa: E501
        """BTUpdateExternalReferenceParams - a model defined in OpenAPI"""  # noqa: E501

        self._description = None
        self._old_version_id_to_new_version_id = None
        self._old_version_id_to_node_ids = None
        self._element_ids = None
        self._auto_update = None
        self.discriminator = None

        if description is not None:
            self.description = description
        if old_version_id_to_new_version_id is not None:
            self.old_version_id_to_new_version_id = old_version_id_to_new_version_id
        if old_version_id_to_node_ids is not None:
            self.old_version_id_to_node_ids = old_version_id_to_node_ids
        if element_ids is not None:
            self.element_ids = element_ids
        if auto_update is not None:
            self.auto_update = auto_update

    @property
    def description(self):
        """Gets the description of this BTUpdateExternalReferenceParams.  # noqa: E501


        :return: The description of this BTUpdateExternalReferenceParams.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTUpdateExternalReferenceParams.


        :param description: The description of this BTUpdateExternalReferenceParams.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def old_version_id_to_new_version_id(self):
        """Gets the old_version_id_to_new_version_id of this BTUpdateExternalReferenceParams.  # noqa: E501


        :return: The old_version_id_to_new_version_id of this BTUpdateExternalReferenceParams.  # noqa: E501
        :rtype: dict(str, str)
        """
        return self._old_version_id_to_new_version_id

    @old_version_id_to_new_version_id.setter
    def old_version_id_to_new_version_id(self, old_version_id_to_new_version_id):
        """Sets the old_version_id_to_new_version_id of this BTUpdateExternalReferenceParams.


        :param old_version_id_to_new_version_id: The old_version_id_to_new_version_id of this BTUpdateExternalReferenceParams.  # noqa: E501
        :type: dict(str, str)
        """

        self._old_version_id_to_new_version_id = old_version_id_to_new_version_id

    @property
    def old_version_id_to_node_ids(self):
        """Gets the old_version_id_to_node_ids of this BTUpdateExternalReferenceParams.  # noqa: E501


        :return: The old_version_id_to_node_ids of this BTUpdateExternalReferenceParams.  # noqa: E501
        :rtype: dict(str, list[str])
        """
        return self._old_version_id_to_node_ids

    @old_version_id_to_node_ids.setter
    def old_version_id_to_node_ids(self, old_version_id_to_node_ids):
        """Sets the old_version_id_to_node_ids of this BTUpdateExternalReferenceParams.


        :param old_version_id_to_node_ids: The old_version_id_to_node_ids of this BTUpdateExternalReferenceParams.  # noqa: E501
        :type: dict(str, list[str])
        """

        self._old_version_id_to_node_ids = old_version_id_to_node_ids

    @property
    def element_ids(self):
        """Gets the element_ids of this BTUpdateExternalReferenceParams.  # noqa: E501


        :return: The element_ids of this BTUpdateExternalReferenceParams.  # noqa: E501
        :rtype: list[str]
        """
        return self._element_ids

    @element_ids.setter
    def element_ids(self, element_ids):
        """Sets the element_ids of this BTUpdateExternalReferenceParams.


        :param element_ids: The element_ids of this BTUpdateExternalReferenceParams.  # noqa: E501
        :type: list[str]
        """

        self._element_ids = element_ids

    @property
    def auto_update(self):
        """Gets the auto_update of this BTUpdateExternalReferenceParams.  # noqa: E501


        :return: The auto_update of this BTUpdateExternalReferenceParams.  # noqa: E501
        :rtype: bool
        """
        return self._auto_update

    @auto_update.setter
    def auto_update(self, auto_update):
        """Sets the auto_update of this BTUpdateExternalReferenceParams.


        :param auto_update: The auto_update of this BTUpdateExternalReferenceParams.  # noqa: E501
        :type: bool
        """

        self._auto_update = auto_update

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
        if not isinstance(other, BTUpdateExternalReferenceParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
