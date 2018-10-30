# coding: utf-8

"""
    Onshape API

    Onshape API  # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: ekeller@onshape.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from onshape_client.models.part_appearance import PartAppearance  # noqa: F401,E501
from onshape_client.models.part_material import PartMaterial  # noqa: F401,E501


class PartsGetPartsInPartstudioResponse200Parts(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'body_type': 'str',
        'name': 'str',
        'part_id': 'str',
        'part_query': 'str',
        'material': 'PartMaterial',
        'appearance': 'PartAppearance',
        'microversion_id': 'str',
        'custom_properties': 'object',
        'is_mesh': 'bool',
        'is_hidden': 'bool',
        'element_id': 'str'
    }

    attribute_map = {
        'body_type': 'bodyType',
        'name': 'name',
        'part_id': 'partId',
        'part_query': 'partQuery',
        'material': 'material',
        'appearance': 'appearance',
        'microversion_id': 'microversionId',
        'custom_properties': 'customProperties',
        'is_mesh': 'isMesh',
        'is_hidden': 'isHidden',
        'element_id': 'elementId'
    }

    def __init__(self, body_type=None, name=None, part_id=None, part_query=None, material=None, appearance=None, microversion_id=None, custom_properties=None, is_mesh=None, is_hidden=None, element_id=None):  # noqa: E501
        """PartsGetPartsInPartstudioResponse200Parts - a model defined in Swagger"""  # noqa: E501

        self._body_type = None
        self._name = None
        self._part_id = None
        self._part_query = None
        self._material = None
        self._appearance = None
        self._microversion_id = None
        self._custom_properties = None
        self._is_mesh = None
        self._is_hidden = None
        self._element_id = None
        self.discriminator = None

        if body_type is not None:
            self.body_type = body_type
        if name is not None:
            self.name = name
        if part_id is not None:
            self.part_id = part_id
        if part_query is not None:
            self.part_query = part_query
        if material is not None:
            self.material = material
        if appearance is not None:
            self.appearance = appearance
        if microversion_id is not None:
            self.microversion_id = microversion_id
        if custom_properties is not None:
            self.custom_properties = custom_properties
        if is_mesh is not None:
            self.is_mesh = is_mesh
        if is_hidden is not None:
            self.is_hidden = is_hidden
        if element_id is not None:
            self.element_id = element_id

    @property
    def body_type(self):
        """Gets the body_type of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Part body type; can be 'solid', 'surface', or 'wire'  # noqa: E501

        :return: The body_type of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._body_type

    @body_type.setter
    def body_type(self, body_type):
        """Sets the body_type of this PartsGetPartsInPartstudioResponse200Parts.

        Part body type; can be 'solid', 'surface', or 'wire'  # noqa: E501

        :param body_type: The body_type of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._body_type = body_type

    @property
    def name(self):
        """Gets the name of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Part name  # noqa: E501

        :return: The name of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this PartsGetPartsInPartstudioResponse200Parts.

        Part name  # noqa: E501

        :param name: The name of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def part_id(self):
        """Gets the part_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Part ID  # noqa: E501

        :return: The part_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._part_id

    @part_id.setter
    def part_id(self, part_id):
        """Sets the part_id of this PartsGetPartsInPartstudioResponse200Parts.

        Part ID  # noqa: E501

        :param part_id: The part_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._part_id = part_id

    @property
    def part_query(self):
        """Gets the part_query of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Onshape internal use  # noqa: E501

        :return: The part_query of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._part_query

    @part_query.setter
    def part_query(self, part_query):
        """Sets the part_query of this PartsGetPartsInPartstudioResponse200Parts.

        Onshape internal use  # noqa: E501

        :param part_query: The part_query of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._part_query = part_query

    @property
    def material(self):
        """Gets the material of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501


        :return: The material of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: PartMaterial
        """
        return self._material

    @material.setter
    def material(self, material):
        """Sets the material of this PartsGetPartsInPartstudioResponse200Parts.


        :param material: The material of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: PartMaterial
        """

        self._material = material

    @property
    def appearance(self):
        """Gets the appearance of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501


        :return: The appearance of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: PartAppearance
        """
        return self._appearance

    @appearance.setter
    def appearance(self, appearance):
        """Sets the appearance of this PartsGetPartsInPartstudioResponse200Parts.


        :param appearance: The appearance of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: PartAppearance
        """

        self._appearance = appearance

    @property
    def microversion_id(self):
        """Gets the microversion_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Document microversion ID  # noqa: E501

        :return: The microversion_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._microversion_id

    @microversion_id.setter
    def microversion_id(self, microversion_id):
        """Sets the microversion_id of this PartsGetPartsInPartstudioResponse200Parts.

        Document microversion ID  # noqa: E501

        :param microversion_id: The microversion_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._microversion_id = microversion_id

    @property
    def custom_properties(self):
        """Gets the custom_properties of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Custom properties, if any  # noqa: E501

        :return: The custom_properties of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: object
        """
        return self._custom_properties

    @custom_properties.setter
    def custom_properties(self, custom_properties):
        """Sets the custom_properties of this PartsGetPartsInPartstudioResponse200Parts.

        Custom properties, if any  # noqa: E501

        :param custom_properties: The custom_properties of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: object
        """

        self._custom_properties = custom_properties

    @property
    def is_mesh(self):
        """Gets the is_mesh of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Whether the part is a mesh  # noqa: E501

        :return: The is_mesh of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: bool
        """
        return self._is_mesh

    @is_mesh.setter
    def is_mesh(self, is_mesh):
        """Sets the is_mesh of this PartsGetPartsInPartstudioResponse200Parts.

        Whether the part is a mesh  # noqa: E501

        :param is_mesh: The is_mesh of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: bool
        """

        self._is_mesh = is_mesh

    @property
    def is_hidden(self):
        """Gets the is_hidden of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Part visibility  # noqa: E501

        :return: The is_hidden of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: bool
        """
        return self._is_hidden

    @is_hidden.setter
    def is_hidden(self, is_hidden):
        """Sets the is_hidden of this PartsGetPartsInPartstudioResponse200Parts.

        Part visibility  # noqa: E501

        :param is_hidden: The is_hidden of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: bool
        """

        self._is_hidden = is_hidden

    @property
    def element_id(self):
        """Gets the element_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501

        Element ID  # noqa: E501

        :return: The element_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :rtype: str
        """
        return self._element_id

    @element_id.setter
    def element_id(self, element_id):
        """Sets the element_id of this PartsGetPartsInPartstudioResponse200Parts.

        Element ID  # noqa: E501

        :param element_id: The element_id of this PartsGetPartsInPartstudioResponse200Parts.  # noqa: E501
        :type: str
        """

        self._element_id = element_id

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
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
        if not isinstance(other, PartsGetPartsInPartstudioResponse200Parts):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
