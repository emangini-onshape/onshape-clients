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
    from onshape_client.oas.models import three_d_secure
except ImportError:
    three_d_secure = sys.modules[
        'onshape_client.oas.models.three_d_secure']


class Card(ModelNormal):
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
            'account': (str,),  # noqa: E501
            'address_city': (str,),  # noqa: E501
            'address_country': (str,),  # noqa: E501
            'address_line1': (str,),  # noqa: E501
            'address_line1_check': (str,),  # noqa: E501
            'address_line2': (str,),  # noqa: E501
            'address_state': (str,),  # noqa: E501
            'address_zip': (str,),  # noqa: E501
            'address_zip_check': (str,),  # noqa: E501
            'available_payout_methods': ([str],),  # noqa: E501
            'brand': (str,),  # noqa: E501
            'country': (str,),  # noqa: E501
            'currency': (str,),  # noqa: E501
            'customer': (str,),  # noqa: E501
            'cvc_check': (str,),  # noqa: E501
            'default_for_currency': (bool,),  # noqa: E501
            'description': (str,),  # noqa: E501
            'dynamic_last4': (str,),  # noqa: E501
            'exp_month': (int,),  # noqa: E501
            'exp_year': (int,),  # noqa: E501
            'fingerprint': (str,),  # noqa: E501
            'funding': (str,),  # noqa: E501
            'id': (str,),  # noqa: E501
            'iin': (str,),  # noqa: E501
            'instance_url': (str,),  # noqa: E501
            'issuer': (str,),  # noqa: E501
            'last4': (str,),  # noqa: E501
            'metadata': ({str: (str,)},),  # noqa: E501
            'name': (str,),  # noqa: E501
            'object': (str,),  # noqa: E501
            'recipient': (str,),  # noqa: E501
            'status': (str,),  # noqa: E501
            'three_d_secure': (three_d_secure.ThreeDSecure,),  # noqa: E501
            'tokenization_method': (str,),  # noqa: E501
            'type': (str,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'account': 'account',  # noqa: E501
        'address_city': 'addressCity',  # noqa: E501
        'address_country': 'addressCountry',  # noqa: E501
        'address_line1': 'addressLine1',  # noqa: E501
        'address_line1_check': 'addressLine1Check',  # noqa: E501
        'address_line2': 'addressLine2',  # noqa: E501
        'address_state': 'addressState',  # noqa: E501
        'address_zip': 'addressZip',  # noqa: E501
        'address_zip_check': 'addressZipCheck',  # noqa: E501
        'available_payout_methods': 'availablePayoutMethods',  # noqa: E501
        'brand': 'brand',  # noqa: E501
        'country': 'country',  # noqa: E501
        'currency': 'currency',  # noqa: E501
        'customer': 'customer',  # noqa: E501
        'cvc_check': 'cvcCheck',  # noqa: E501
        'default_for_currency': 'defaultForCurrency',  # noqa: E501
        'description': 'description',  # noqa: E501
        'dynamic_last4': 'dynamicLast4',  # noqa: E501
        'exp_month': 'expMonth',  # noqa: E501
        'exp_year': 'expYear',  # noqa: E501
        'fingerprint': 'fingerprint',  # noqa: E501
        'funding': 'funding',  # noqa: E501
        'id': 'id',  # noqa: E501
        'iin': 'iin',  # noqa: E501
        'instance_url': 'instanceURL',  # noqa: E501
        'issuer': 'issuer',  # noqa: E501
        'last4': 'last4',  # noqa: E501
        'metadata': 'metadata',  # noqa: E501
        'name': 'name',  # noqa: E501
        'object': 'object',  # noqa: E501
        'recipient': 'recipient',  # noqa: E501
        'status': 'status',  # noqa: E501
        'three_d_secure': 'threeDSecure',  # noqa: E501
        'tokenization_method': 'tokenizationMethod',  # noqa: E501
        'type': 'type',  # noqa: E501
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
        """card.Card - a model defined in OpenAPI


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
            account (str): [optional]  # noqa: E501
            address_city (str): [optional]  # noqa: E501
            address_country (str): [optional]  # noqa: E501
            address_line1 (str): [optional]  # noqa: E501
            address_line1_check (str): [optional]  # noqa: E501
            address_line2 (str): [optional]  # noqa: E501
            address_state (str): [optional]  # noqa: E501
            address_zip (str): [optional]  # noqa: E501
            address_zip_check (str): [optional]  # noqa: E501
            available_payout_methods ([str]): [optional]  # noqa: E501
            brand (str): [optional]  # noqa: E501
            country (str): [optional]  # noqa: E501
            currency (str): [optional]  # noqa: E501
            customer (str): [optional]  # noqa: E501
            cvc_check (str): [optional]  # noqa: E501
            default_for_currency (bool): [optional]  # noqa: E501
            description (str): [optional]  # noqa: E501
            dynamic_last4 (str): [optional]  # noqa: E501
            exp_month (int): [optional]  # noqa: E501
            exp_year (int): [optional]  # noqa: E501
            fingerprint (str): [optional]  # noqa: E501
            funding (str): [optional]  # noqa: E501
            id (str): [optional]  # noqa: E501
            iin (str): [optional]  # noqa: E501
            instance_url (str): [optional]  # noqa: E501
            issuer (str): [optional]  # noqa: E501
            last4 (str): [optional]  # noqa: E501
            metadata ({str: (str,)}): [optional]  # noqa: E501
            name (str): [optional]  # noqa: E501
            object (str): [optional]  # noqa: E501
            recipient (str): [optional]  # noqa: E501
            status (str): [optional]  # noqa: E501
            three_d_secure (three_d_secure.ThreeDSecure): [optional]  # noqa: E501
            tokenization_method (str): [optional]  # noqa: E501
            type (str): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)
