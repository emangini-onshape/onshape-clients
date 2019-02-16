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


class BTPartMetadataInfo(object):
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
        'name': 'str',
        'id': 'str',
        'state': 'str',
        'description': 'str',
        'revision': 'str',
        'microversion_id': 'str',
        'custom_properties': 'dict(str, str)',
        'vendor': 'str',
        'product_line': 'str',
        'title1': 'str',
        'title2': 'str',
        'title3': 'str',
        'part_query': 'str',
        'part_id': 'str',
        'unflattened_part_id': 'str',
        'configuration_id': 'str',
        'href': 'str',
        'thumbnail_info': 'BTThumbnailInfo',
        'element_id': 'str',
        'project': 'str',
        'material': 'BTPartMaterialInfo',
        'part_number': 'str',
        'body_type': 'str',
        'is_mesh': 'bool',
        'thumbnail_configuration_id': 'str',
        'is_flattened_body': 'bool',
        'referencing_configured_part_node_ids': 'list[str]',
        'appearance': 'BTPartAppearanceInfo',
        'custom_property_definitions': 'dict(str, BTCustomPropertyDefinitionInfo)',
        'is_hidden': 'bool',
        'ordinal': 'int',
        'property_source_types': 'dict(str, int)'
    }

    attribute_map = {
        'name': 'name',
        'id': 'id',
        'state': 'state',
        'description': 'description',
        'revision': 'revision',
        'microversion_id': 'microversionId',
        'custom_properties': 'customProperties',
        'vendor': 'vendor',
        'product_line': 'productLine',
        'title1': 'title1',
        'title2': 'title2',
        'title3': 'title3',
        'part_query': 'partQuery',
        'part_id': 'partId',
        'unflattened_part_id': 'unflattenedPartId',
        'configuration_id': 'configurationId',
        'href': 'href',
        'thumbnail_info': 'thumbnailInfo',
        'element_id': 'elementId',
        'project': 'project',
        'material': 'material',
        'part_number': 'partNumber',
        'body_type': 'bodyType',
        'is_mesh': 'isMesh',
        'thumbnail_configuration_id': 'thumbnailConfigurationId',
        'is_flattened_body': 'isFlattenedBody',
        'referencing_configured_part_node_ids': 'referencingConfiguredPartNodeIds',
        'appearance': 'appearance',
        'custom_property_definitions': 'customPropertyDefinitions',
        'is_hidden': 'isHidden',
        'ordinal': 'ordinal',
        'property_source_types': 'propertySourceTypes'
    }

    def __init__(self, name=None, id=None, state=None, description=None, revision=None, microversion_id=None, custom_properties=None, vendor=None, product_line=None, title1=None, title2=None, title3=None, part_query=None, part_id=None, unflattened_part_id=None, configuration_id=None, href=None, thumbnail_info=None, element_id=None, project=None, material=None, part_number=None, body_type=None, is_mesh=None, thumbnail_configuration_id=None, is_flattened_body=None, referencing_configured_part_node_ids=None, appearance=None, custom_property_definitions=None, is_hidden=None, ordinal=None, property_source_types=None):  # noqa: E501
        """BTPartMetadataInfo - a model defined in OpenAPI"""  # noqa: E501

        self._name = None
        self._id = None
        self._state = None
        self._description = None
        self._revision = None
        self._microversion_id = None
        self._custom_properties = None
        self._vendor = None
        self._product_line = None
        self._title1 = None
        self._title2 = None
        self._title3 = None
        self._part_query = None
        self._part_id = None
        self._unflattened_part_id = None
        self._configuration_id = None
        self._href = None
        self._thumbnail_info = None
        self._element_id = None
        self._project = None
        self._material = None
        self._part_number = None
        self._body_type = None
        self._is_mesh = None
        self._thumbnail_configuration_id = None
        self._is_flattened_body = None
        self._referencing_configured_part_node_ids = None
        self._appearance = None
        self._custom_property_definitions = None
        self._is_hidden = None
        self._ordinal = None
        self._property_source_types = None
        self.discriminator = None

        if name is not None:
            self.name = name
        if id is not None:
            self.id = id
        if state is not None:
            self.state = state
        if description is not None:
            self.description = description
        if revision is not None:
            self.revision = revision
        if microversion_id is not None:
            self.microversion_id = microversion_id
        if custom_properties is not None:
            self.custom_properties = custom_properties
        if vendor is not None:
            self.vendor = vendor
        if product_line is not None:
            self.product_line = product_line
        if title1 is not None:
            self.title1 = title1
        if title2 is not None:
            self.title2 = title2
        if title3 is not None:
            self.title3 = title3
        if part_query is not None:
            self.part_query = part_query
        if part_id is not None:
            self.part_id = part_id
        if unflattened_part_id is not None:
            self.unflattened_part_id = unflattened_part_id
        if configuration_id is not None:
            self.configuration_id = configuration_id
        if href is not None:
            self.href = href
        if thumbnail_info is not None:
            self.thumbnail_info = thumbnail_info
        if element_id is not None:
            self.element_id = element_id
        if project is not None:
            self.project = project
        if material is not None:
            self.material = material
        if part_number is not None:
            self.part_number = part_number
        if body_type is not None:
            self.body_type = body_type
        if is_mesh is not None:
            self.is_mesh = is_mesh
        if thumbnail_configuration_id is not None:
            self.thumbnail_configuration_id = thumbnail_configuration_id
        if is_flattened_body is not None:
            self.is_flattened_body = is_flattened_body
        if referencing_configured_part_node_ids is not None:
            self.referencing_configured_part_node_ids = referencing_configured_part_node_ids
        if appearance is not None:
            self.appearance = appearance
        if custom_property_definitions is not None:
            self.custom_property_definitions = custom_property_definitions
        if is_hidden is not None:
            self.is_hidden = is_hidden
        if ordinal is not None:
            self.ordinal = ordinal
        if property_source_types is not None:
            self.property_source_types = property_source_types

    @property
    def name(self):
        """Gets the name of this BTPartMetadataInfo.  # noqa: E501


        :return: The name of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTPartMetadataInfo.


        :param name: The name of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def id(self):
        """Gets the id of this BTPartMetadataInfo.  # noqa: E501


        :return: The id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this BTPartMetadataInfo.


        :param id: The id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def state(self):
        """Gets the state of this BTPartMetadataInfo.  # noqa: E501


        :return: The state of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this BTPartMetadataInfo.


        :param state: The state of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """
        allowed_values = ["IN_PROGRESS", "PENDING", "RELEASED", "OBSOLETE", "REJECTED", "DISCARDED"]  # noqa: E501
        if state not in allowed_values:
            raise ValueError(
                "Invalid value for `state` ({0}), must be one of {1}"  # noqa: E501
                .format(state, allowed_values)
            )

        self._state = state

    @property
    def description(self):
        """Gets the description of this BTPartMetadataInfo.  # noqa: E501


        :return: The description of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this BTPartMetadataInfo.


        :param description: The description of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def revision(self):
        """Gets the revision of this BTPartMetadataInfo.  # noqa: E501


        :return: The revision of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._revision

    @revision.setter
    def revision(self, revision):
        """Sets the revision of this BTPartMetadataInfo.


        :param revision: The revision of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._revision = revision

    @property
    def microversion_id(self):
        """Gets the microversion_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The microversion_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._microversion_id

    @microversion_id.setter
    def microversion_id(self, microversion_id):
        """Sets the microversion_id of this BTPartMetadataInfo.


        :param microversion_id: The microversion_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._microversion_id = microversion_id

    @property
    def custom_properties(self):
        """Gets the custom_properties of this BTPartMetadataInfo.  # noqa: E501


        :return: The custom_properties of this BTPartMetadataInfo.  # noqa: E501
        :rtype: dict(str, str)
        """
        return self._custom_properties

    @custom_properties.setter
    def custom_properties(self, custom_properties):
        """Sets the custom_properties of this BTPartMetadataInfo.


        :param custom_properties: The custom_properties of this BTPartMetadataInfo.  # noqa: E501
        :type: dict(str, str)
        """

        self._custom_properties = custom_properties

    @property
    def vendor(self):
        """Gets the vendor of this BTPartMetadataInfo.  # noqa: E501


        :return: The vendor of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._vendor

    @vendor.setter
    def vendor(self, vendor):
        """Sets the vendor of this BTPartMetadataInfo.


        :param vendor: The vendor of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._vendor = vendor

    @property
    def product_line(self):
        """Gets the product_line of this BTPartMetadataInfo.  # noqa: E501


        :return: The product_line of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._product_line

    @product_line.setter
    def product_line(self, product_line):
        """Sets the product_line of this BTPartMetadataInfo.


        :param product_line: The product_line of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._product_line = product_line

    @property
    def title1(self):
        """Gets the title1 of this BTPartMetadataInfo.  # noqa: E501


        :return: The title1 of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._title1

    @title1.setter
    def title1(self, title1):
        """Sets the title1 of this BTPartMetadataInfo.


        :param title1: The title1 of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._title1 = title1

    @property
    def title2(self):
        """Gets the title2 of this BTPartMetadataInfo.  # noqa: E501


        :return: The title2 of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._title2

    @title2.setter
    def title2(self, title2):
        """Sets the title2 of this BTPartMetadataInfo.


        :param title2: The title2 of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._title2 = title2

    @property
    def title3(self):
        """Gets the title3 of this BTPartMetadataInfo.  # noqa: E501


        :return: The title3 of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._title3

    @title3.setter
    def title3(self, title3):
        """Sets the title3 of this BTPartMetadataInfo.


        :param title3: The title3 of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._title3 = title3

    @property
    def part_query(self):
        """Gets the part_query of this BTPartMetadataInfo.  # noqa: E501


        :return: The part_query of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._part_query

    @part_query.setter
    def part_query(self, part_query):
        """Sets the part_query of this BTPartMetadataInfo.


        :param part_query: The part_query of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._part_query = part_query

    @property
    def part_id(self):
        """Gets the part_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The part_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._part_id

    @part_id.setter
    def part_id(self, part_id):
        """Sets the part_id of this BTPartMetadataInfo.


        :param part_id: The part_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._part_id = part_id

    @property
    def unflattened_part_id(self):
        """Gets the unflattened_part_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The unflattened_part_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._unflattened_part_id

    @unflattened_part_id.setter
    def unflattened_part_id(self, unflattened_part_id):
        """Sets the unflattened_part_id of this BTPartMetadataInfo.


        :param unflattened_part_id: The unflattened_part_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._unflattened_part_id = unflattened_part_id

    @property
    def configuration_id(self):
        """Gets the configuration_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The configuration_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._configuration_id

    @configuration_id.setter
    def configuration_id(self, configuration_id):
        """Sets the configuration_id of this BTPartMetadataInfo.


        :param configuration_id: The configuration_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._configuration_id = configuration_id

    @property
    def href(self):
        """Gets the href of this BTPartMetadataInfo.  # noqa: E501


        :return: The href of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href):
        """Sets the href of this BTPartMetadataInfo.


        :param href: The href of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._href = href

    @property
    def thumbnail_info(self):
        """Gets the thumbnail_info of this BTPartMetadataInfo.  # noqa: E501


        :return: The thumbnail_info of this BTPartMetadataInfo.  # noqa: E501
        :rtype: BTThumbnailInfo
        """
        return self._thumbnail_info

    @thumbnail_info.setter
    def thumbnail_info(self, thumbnail_info):
        """Sets the thumbnail_info of this BTPartMetadataInfo.


        :param thumbnail_info: The thumbnail_info of this BTPartMetadataInfo.  # noqa: E501
        :type: BTThumbnailInfo
        """

        self._thumbnail_info = thumbnail_info

    @property
    def element_id(self):
        """Gets the element_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The element_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this BTPartMetadataInfo.


        :param element_id: The element_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    @property
    def project(self):
        """Gets the project of this BTPartMetadataInfo.  # noqa: E501


        :return: The project of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._project

    @project.setter
    def project(self, project):
        """Sets the project of this BTPartMetadataInfo.


        :param project: The project of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._project = project

    @property
    def material(self):
        """Gets the material of this BTPartMetadataInfo.  # noqa: E501


        :return: The material of this BTPartMetadataInfo.  # noqa: E501
        :rtype: BTPartMaterialInfo
        """
        return self._material

    @material.setter
    def material(self, material):
        """Sets the material of this BTPartMetadataInfo.


        :param material: The material of this BTPartMetadataInfo.  # noqa: E501
        :type: BTPartMaterialInfo
        """

        self._material = material

    @property
    def part_number(self):
        """Gets the part_number of this BTPartMetadataInfo.  # noqa: E501


        :return: The part_number of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._part_number

    @part_number.setter
    def part_number(self, part_number):
        """Sets the part_number of this BTPartMetadataInfo.


        :param part_number: The part_number of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._part_number = part_number

    @property
    def body_type(self):
        """Gets the body_type of this BTPartMetadataInfo.  # noqa: E501


        :return: The body_type of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._body_type

    @body_type.setter
    def body_type(self, body_type):
        """Sets the body_type of this BTPartMetadataInfo.


        :param body_type: The body_type of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._body_type = body_type

    @property
    def is_mesh(self):
        """Gets the is_mesh of this BTPartMetadataInfo.  # noqa: E501


        :return: The is_mesh of this BTPartMetadataInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_mesh

    @is_mesh.setter
    def is_mesh(self, is_mesh):
        """Sets the is_mesh of this BTPartMetadataInfo.


        :param is_mesh: The is_mesh of this BTPartMetadataInfo.  # noqa: E501
        :type: bool
        """

        self._is_mesh = is_mesh

    @property
    def thumbnail_configuration_id(self):
        """Gets the thumbnail_configuration_id of this BTPartMetadataInfo.  # noqa: E501


        :return: The thumbnail_configuration_id of this BTPartMetadataInfo.  # noqa: E501
        :rtype: str
        """
        return self._thumbnail_configuration_id

    @thumbnail_configuration_id.setter
    def thumbnail_configuration_id(self, thumbnail_configuration_id):
        """Sets the thumbnail_configuration_id of this BTPartMetadataInfo.


        :param thumbnail_configuration_id: The thumbnail_configuration_id of this BTPartMetadataInfo.  # noqa: E501
        :type: str
        """

        self._thumbnail_configuration_id = thumbnail_configuration_id

    @property
    def is_flattened_body(self):
        """Gets the is_flattened_body of this BTPartMetadataInfo.  # noqa: E501


        :return: The is_flattened_body of this BTPartMetadataInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_flattened_body

    @is_flattened_body.setter
    def is_flattened_body(self, is_flattened_body):
        """Sets the is_flattened_body of this BTPartMetadataInfo.


        :param is_flattened_body: The is_flattened_body of this BTPartMetadataInfo.  # noqa: E501
        :type: bool
        """

        self._is_flattened_body = is_flattened_body

    @property
    def referencing_configured_part_node_ids(self):
        """Gets the referencing_configured_part_node_ids of this BTPartMetadataInfo.  # noqa: E501


        :return: The referencing_configured_part_node_ids of this BTPartMetadataInfo.  # noqa: E501
        :rtype: list[str]
        """
        return self._referencing_configured_part_node_ids

    @referencing_configured_part_node_ids.setter
    def referencing_configured_part_node_ids(self, referencing_configured_part_node_ids):
        """Sets the referencing_configured_part_node_ids of this BTPartMetadataInfo.


        :param referencing_configured_part_node_ids: The referencing_configured_part_node_ids of this BTPartMetadataInfo.  # noqa: E501
        :type: list[str]
        """

        self._referencing_configured_part_node_ids = referencing_configured_part_node_ids

    @property
    def appearance(self):
        """Gets the appearance of this BTPartMetadataInfo.  # noqa: E501


        :return: The appearance of this BTPartMetadataInfo.  # noqa: E501
        :rtype: BTPartAppearanceInfo
        """
        return self._appearance

    @appearance.setter
    def appearance(self, appearance):
        """Sets the appearance of this BTPartMetadataInfo.


        :param appearance: The appearance of this BTPartMetadataInfo.  # noqa: E501
        :type: BTPartAppearanceInfo
        """

        self._appearance = appearance

    @property
    def custom_property_definitions(self):
        """Gets the custom_property_definitions of this BTPartMetadataInfo.  # noqa: E501


        :return: The custom_property_definitions of this BTPartMetadataInfo.  # noqa: E501
        :rtype: dict(str, BTCustomPropertyDefinitionInfo)
        """
        return self._custom_property_definitions

    @custom_property_definitions.setter
    def custom_property_definitions(self, custom_property_definitions):
        """Sets the custom_property_definitions of this BTPartMetadataInfo.


        :param custom_property_definitions: The custom_property_definitions of this BTPartMetadataInfo.  # noqa: E501
        :type: dict(str, BTCustomPropertyDefinitionInfo)
        """

        self._custom_property_definitions = custom_property_definitions

    @property
    def is_hidden(self):
        """Gets the is_hidden of this BTPartMetadataInfo.  # noqa: E501


        :return: The is_hidden of this BTPartMetadataInfo.  # noqa: E501
        :rtype: bool
        """
        return self._is_hidden

    @is_hidden.setter
    def is_hidden(self, is_hidden):
        """Sets the is_hidden of this BTPartMetadataInfo.


        :param is_hidden: The is_hidden of this BTPartMetadataInfo.  # noqa: E501
        :type: bool
        """

        self._is_hidden = is_hidden

    @property
    def ordinal(self):
        """Gets the ordinal of this BTPartMetadataInfo.  # noqa: E501


        :return: The ordinal of this BTPartMetadataInfo.  # noqa: E501
        :rtype: int
        """
        return self._ordinal

    @ordinal.setter
    def ordinal(self, ordinal):
        """Sets the ordinal of this BTPartMetadataInfo.


        :param ordinal: The ordinal of this BTPartMetadataInfo.  # noqa: E501
        :type: int
        """

        self._ordinal = ordinal

    @property
    def property_source_types(self):
        """Gets the property_source_types of this BTPartMetadataInfo.  # noqa: E501


        :return: The property_source_types of this BTPartMetadataInfo.  # noqa: E501
        :rtype: dict(str, int)
        """
        return self._property_source_types

    @property_source_types.setter
    def property_source_types(self, property_source_types):
        """Sets the property_source_types of this BTPartMetadataInfo.


        :param property_source_types: The property_source_types of this BTPartMetadataInfo.  # noqa: E501
        :type: dict(str, int)
        """

        self._property_source_types = property_source_types

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
        if not isinstance(other, BTPartMetadataInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
