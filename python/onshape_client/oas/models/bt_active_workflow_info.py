# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    The version of the OpenAPI document: 1.108
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
    from onshape_client.oas.models import bt_published_workflow_info
except ImportError:
    bt_published_workflow_info = sys.modules[
        'onshape_client.oas.models.bt_published_workflow_info']


class BTActiveWorkflowInfo(ModelNormal):
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
            'company_id': (str,),  # noqa: E501
            'using_managed_workflow': (bool,),  # noqa: E501
            'can_current_user_create_releases': (bool,),  # noqa: E501
            'document_id': (str,),  # noqa: E501
            'release_workflow': (bt_published_workflow_info.BTPublishedWorkflowInfo,),  # noqa: E501
            'obsoletion_workflow': (bt_published_workflow_info.BTPublishedWorkflowInfo,),  # noqa: E501
            'release_workflow_id': (str,),  # noqa: E501
            'obsoletion_workflow_id': (str,),  # noqa: E501
            'drawing_can_duplicate_part_number': (bool,),  # noqa: E501
            'enabled_active_multiple_workflows': (bool,),  # noqa: E501
            'using_auto_part_numbering': (bool,),  # noqa: E501
            'pickable_workflows': ([bt_published_workflow_info.BTPublishedWorkflowInfo],),  # noqa: E501
            'using_auto_part_numbering_scheme': (bool,),  # noqa: E501
            'can_create_releases': (bool,),  # noqa: E501
        }

    @staticmethod
    def discriminator():
        return None

    attribute_map = {
        'company_id': 'companyId',  # noqa: E501
        'using_managed_workflow': 'usingManagedWorkflow',  # noqa: E501
        'can_current_user_create_releases': 'canCurrentUserCreateReleases',  # noqa: E501
        'document_id': 'documentId',  # noqa: E501
        'release_workflow': 'releaseWorkflow',  # noqa: E501
        'obsoletion_workflow': 'obsoletionWorkflow',  # noqa: E501
        'release_workflow_id': 'releaseWorkflowId',  # noqa: E501
        'obsoletion_workflow_id': 'obsoletionWorkflowId',  # noqa: E501
        'drawing_can_duplicate_part_number': 'drawingCanDuplicatePartNumber',  # noqa: E501
        'enabled_active_multiple_workflows': 'enabledActiveMultipleWorkflows',  # noqa: E501
        'using_auto_part_numbering': 'usingAutoPartNumbering',  # noqa: E501
        'pickable_workflows': 'pickableWorkflows',  # noqa: E501
        'using_auto_part_numbering_scheme': 'usingAutoPartNumberingScheme',  # noqa: E501
        'can_create_releases': 'canCreateReleases',  # noqa: E501
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
        """bt_active_workflow_info.BTActiveWorkflowInfo - a model defined in OpenAPI


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
            company_id (str): [optional]  # noqa: E501
            using_managed_workflow (bool): [optional]  # noqa: E501
            can_current_user_create_releases (bool): [optional]  # noqa: E501
            document_id (str): [optional]  # noqa: E501
            release_workflow (bt_published_workflow_info.BTPublishedWorkflowInfo): [optional]  # noqa: E501
            obsoletion_workflow (bt_published_workflow_info.BTPublishedWorkflowInfo): [optional]  # noqa: E501
            release_workflow_id (str): [optional]  # noqa: E501
            obsoletion_workflow_id (str): [optional]  # noqa: E501
            drawing_can_duplicate_part_number (bool): [optional]  # noqa: E501
            enabled_active_multiple_workflows (bool): [optional]  # noqa: E501
            using_auto_part_numbering (bool): [optional]  # noqa: E501
            pickable_workflows ([bt_published_workflow_info.BTPublishedWorkflowInfo]): [optional]  # noqa: E501
            using_auto_part_numbering_scheme (bool): [optional]  # noqa: E501
            can_create_releases (bool): [optional]  # noqa: E501
        """

        self._data_store = {}
        self._check_type = _check_type
        self._from_server = _from_server
        self._path_to_item = _path_to_item
        self._configuration = _configuration

        for var_name, var_value in six.iteritems(kwargs):
            setattr(self, var_name, var_value)