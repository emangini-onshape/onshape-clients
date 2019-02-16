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


class BTAssemblyInstanceDefinitionParams(object):
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
        'is_whole_part_studio': 'bool',
        'revision': 'str',
        'microversion_id': 'str',
        'part_id': 'str',
        'configuration': 'str',
        'version_id': 'str',
        'document_id': 'str',
        'element_id': 'str',
        'feature_id': 'str',
        'part_number': 'str',
        'is_assembly': 'bool'
    }

    attribute_map = {
        'is_whole_part_studio': 'isWholePartStudio',
        'revision': 'revision',
        'microversion_id': 'microversionId',
        'part_id': 'partId',
        'configuration': 'configuration',
        'version_id': 'versionId',
        'document_id': 'documentId',
        'element_id': 'elementId',
        'feature_id': 'featureId',
        'part_number': 'partNumber',
        'is_assembly': 'isAssembly'
    }

    def __init__(self, is_whole_part_studio=None, revision=None, microversion_id=None, part_id=None, configuration=None, version_id=None, document_id=None, element_id=None, feature_id=None, part_number=None, is_assembly=None):  # noqa: E501
        """BTAssemblyInstanceDefinitionParams - a model defined in OpenAPI"""  # noqa: E501

        self._is_whole_part_studio = None
        self._revision = None
        self._microversion_id = None
        self._part_id = None
        self._configuration = None
        self._version_id = None
        self._document_id = None
        self._element_id = None
        self._feature_id = None
        self._part_number = None
        self._is_assembly = None
        self.discriminator = None

        if is_whole_part_studio is not None:
            self.is_whole_part_studio = is_whole_part_studio
        if revision is not None:
            self.revision = revision
        if microversion_id is not None:
            self.microversion_id = microversion_id
        if part_id is not None:
            self.part_id = part_id
        if configuration is not None:
            self.configuration = configuration
        if version_id is not None:
            self.version_id = version_id
        if document_id is not None:
            self.document_id = document_id
        if element_id is not None:
            self.element_id = element_id
        if feature_id is not None:
            self.feature_id = feature_id
        if part_number is not None:
            self.part_number = part_number
        if is_assembly is not None:
            self.is_assembly = is_assembly

    @property
    def is_whole_part_studio(self):
        """Gets the is_whole_part_studio of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The is_whole_part_studio of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: bool
        """
        return self._is_whole_part_studio

    @is_whole_part_studio.setter
    def is_whole_part_studio(self, is_whole_part_studio):
        """Sets the is_whole_part_studio of this BTAssemblyInstanceDefinitionParams.


        :param is_whole_part_studio: The is_whole_part_studio of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: bool
        """

        self._is_whole_part_studio = is_whole_part_studio

    @property
    def revision(self):
        """Gets the revision of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The revision of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._revision

    @revision.setter
    def revision(self, revision):
        """Sets the revision of this BTAssemblyInstanceDefinitionParams.


        :param revision: The revision of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._revision = revision

    @property
    def microversion_id(self):
        """Gets the microversion_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The microversion_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._microversion_id

    @microversion_id.setter
    def microversion_id(self, microversion_id):
        """Sets the microversion_id of this BTAssemblyInstanceDefinitionParams.


        :param microversion_id: The microversion_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._microversion_id = microversion_id

    @property
    def part_id(self):
        """Gets the part_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The part_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._part_id

    @part_id.setter
    def part_id(self, part_id):
        """Sets the part_id of this BTAssemblyInstanceDefinitionParams.


        :param part_id: The part_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._part_id = part_id

    @property
    def configuration(self):
        """Gets the configuration of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The configuration of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._configuration

    @configuration.setter
    def configuration(self, configuration):
        """Sets the configuration of this BTAssemblyInstanceDefinitionParams.


        :param configuration: The configuration of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._configuration = configuration

    @property
    def version_id(self):
        """Gets the version_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The version_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._version_id

    @version_id.setter
    def version_id(self, version_id):
        """Sets the version_id of this BTAssemblyInstanceDefinitionParams.


        :param version_id: The version_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._version_id = version_id

    @property
    def document_id(self):
        """Gets the document_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The document_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._document_id

    @document_id.setter
    def document_id(self, document_id):
        """Sets the document_id of this BTAssemblyInstanceDefinitionParams.


        :param document_id: The document_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._document_id = document_id

    @property
    def element_id(self):
        """Gets the element_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The element_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTAssemblyInstanceDefinitionParams.


        :param element_id: The element_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def feature_id(self):
        """Gets the feature_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The feature_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._feature_id

    @feature_id.setter
    def feature_id(self, feature_id):
        """Sets the feature_id of this BTAssemblyInstanceDefinitionParams.


        :param feature_id: The feature_id of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._feature_id = feature_id

    @property
    def part_number(self):
        """Gets the part_number of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The part_number of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: str
        """
        return self._part_number

    @part_number.setter
    def part_number(self, part_number):
        """Sets the part_number of this BTAssemblyInstanceDefinitionParams.


        :param part_number: The part_number of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: str
        """

        self._part_number = part_number

    @property
    def is_assembly(self):
        """Gets the is_assembly of this BTAssemblyInstanceDefinitionParams.  # noqa: E501


        :return: The is_assembly of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :rtype: bool
        """
        return self._is_assembly

    @is_assembly.setter
    def is_assembly(self, is_assembly):
        """Sets the is_assembly of this BTAssemblyInstanceDefinitionParams.


        :param is_assembly: The is_assembly of this BTAssemblyInstanceDefinitionParams.  # noqa: E501
        :type: bool
        """

        self._is_assembly = is_assembly

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
        if not isinstance(other, BTAssemblyInstanceDefinitionParams):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
