# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.111
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import
import re  # noqa: F401
import sys  # noqa: F401

import six  # noqa: F401

from onshape_client.oas.model_utils import (  # noqa: F401
    ModelComposed,
    ModelNormal,
    ModelSimple,
    date,
    datetime,
    file_type,
    int,
    none_type,
    str,
    validate_get_composed_info,
)
try:
    from onshape_client.oas.models import btp_space10
except ImportError:
    btp_space10 = sys.modules[
        'onshape_client.oas.models.btp_space10']
try:
    from onshape_client.oas.models import btp_type_name_standard291
except ImportError:
    btp_type_name_standard291 = sys.modules[
        'onshape_client.oas.models.btp_type_name_standard291']
try:
    from onshape_client.oas.models import btp_type_name_user292
except ImportError:
    btp_type_name_user292 = sys.modules[
        'onshape_client.oas.models.btp_type_name_user292']


class BTPTypeName290(ModelNormal):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Attributes:
      allowed_values (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          with a capitalized key describing the allowed value and an allowed
          value. These dicts store the allowed enum values.
      attribute_map (dict): The key is attribute name
          and the value is json key in definition.
      discriminator_value_class_map (dict): A dict to go from the discriminator
          variable value to the discriminator class name.
      validations (dict): The key is the tuple path to the attribute
          and the for var_name this is (var_name,). The value is a dict
          that stores validations for max_length, min_length, max_items,
          min_items, exclusive_maximum, inclusive_maximum, exclusive_minimum,
          inclusive_minimum, and regex.
      additional_properties_type (tuple): A tuple of classes accepted
          as additional properties values.
    """

    allowed_values = {
        ('documentation_type',): {
            'FUNCTION': "FUNCTION",
            'PREDICATE': "PREDICATE",
            'CONSTANT': "CONSTANT",
            'ENUM': "ENUM",
            'USER_TYPE': "USER_TYPE",
            'FEATURE_DEFINITION': "FEATURE_DEFINITION",
            'FILE_HEADER': "FILE_HEADER",
            'UNDOCUMENTABLE': "UNDOCUMENTABLE",
            'UNKNOWN': "UNKNOWN",
        },
    }

    validations = {
    }

    additional_properties_type = None

    @staticmethod
    def openapi_types():
        """
        This must be a class method so a model may have properties that are
        of type self, this ensures that we don't create a cyclic import

        Returns
            openapi_types (dict): The key is attribute name
                and the value is attribute type.
        """
        return {
            'atomic': (bool,),  # noqa: E501
            'bt_type': (str,),  # noqa: E501
            'documentation_type': (str,),  # noqa: E501
            'end_source_location': (int,),  # noqa: E501
            'node_id': (str,),  # noqa: E501
            'short_descriptor': (str,),  # noqa: E501
            'space_after': (btp_space10.BTPSpace10,),  # noqa: E501
            'space_before': (btp_space10.BTPSpace10,),  # noqa: E501
            'space_default': (bool,),  # noqa: E501
            'start_source_location': (int,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return {
            'bt_type': {
                'BTPTypeNameUser-292': btp_type_name_user292.BTPTypeNameUser292,
                'BTPTypeNameStandard-291': btp_type_name_standard291.BTPTypeNameStandard291,
            },
        }

    attribute_map = {
        'atomic': 'atomic',  # noqa: E501
        'bt_type': 'btType',  # noqa: E501
        'documentation_type': 'documentationType',  # noqa: E501
        'end_source_location': 'endSourceLocation',  # noqa: E501
        'node_id': 'nodeId',  # noqa: E501
        'short_descriptor': 'shortDescriptor',  # noqa: E501
        'space_after': 'spaceAfter',  # noqa: E501
        'space_before': 'spaceBefore',  # noqa: E501
        'space_default': 'spaceDefault',  # noqa: E501
        'start_source_location': 'startSourceLocation',  # noqa: E501
    }

    @staticmethod
    def _composed_schemas():
        return None

    required_properties = set([
        '_data_store',
        '_check_type',
        '_from_server',
        '_path_to_item',
        '_configuration',
    ])

    def __init__(self, _check_type=True, _from_server=False, _path_to_item=(), _configuration=None, **kwargs):  # noqa: E501
        """btp_type_name290.BTPTypeName290 - a model defined in OpenAPI


        Keyword Args:
            _check_type (bool): if True, values for parameters in openapi_types
                                will be type checked and a TypeError will be
                                raised if the wrong type is input.
                                Defaults to True
            _path_to_item (tuple/list): This is a list of keys or values to
                                drill down to the model in received_data
                                when deserializing a response
            _from_server (bool): True if the data is from the server
                                False if the data is from the client (default)
            _configuration (Configuration): the instance to use when
                                deserializing a file_type parameter.
                                If passed, type conversion is attempted
                                If omitted no type conversion is done.
            atomic (bool): [optional]  # noqa: E501
            bt_type (str): [optional]  # noqa: E501
            documentation_type (str): [optional]  # noqa: E501
            end_source_location (int): [optional]  # noqa: E501
            node_id (str): [optional]  # noqa: E501
            short_descriptor (str): [optional]  # noqa: E501
            space_after (btp_space10.BTPSpace10): [optional]  # noqa: E501
            space_before (btp_space10.BTPSpace10): [optional]  # noqa: E501
            space_default (bool): [optional]  # noqa: E501
            start_source_location (int): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)

    @classmethod
    def get_discriminator_class(cls, from_server, data):
        """Returns the child class specified by the discriminator"""
        discriminator = cls.discriminator()
        discr_propertyname_py = list(discriminator.keys())[0]
        discr_propertyname_js = cls.attribute_map[discr_propertyname_py]
        if from_server:
            class_name = data[discr_propertyname_js]
        else:
            class_name = data[discr_propertyname_py]
        class_name_to_discr_class = discriminator[discr_propertyname_py]
        return class_name_to_discr_class.get(class_name)
