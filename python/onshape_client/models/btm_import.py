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


class BTMImport(object):
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
        '_import': 'BTPModuleId',
        'imported_external_document_id': 'str',
        'element_import': 'bool',
        'imported_microversion_id': 'BTMicroversionId',
        'external_document_with_version_and_element_id': 'BTDocumentWithVersionAndElementId',
        'imported_workspace_element_id': 'str',
        'revision_data': 'BTRevisionCustomData',
        'namespace_field_index': 'int',
        'namespace': 'str',
        'node_id': 'str',
        'combined_namespace': 'str',
        'for_export': 'bool',
        'import_microversion': 'str',
        'path': 'str',
        'version': 'str',
        'changeable_child_field_indices': 'list[int]',
        'child_nodes': 'dict(str, BTNodeReference)',
        'has_user_code': 'bool',
        'child_locations': 'dict(str, BTInsertionLocation)',
        'source_parse_tree_nodes': 'dict(str, list[BTNodeReference])',
        'child_map_indices': 'list[int]',
        'atomic_child_indices': 'list[int]',
        'node_id_raw': 'BTObjectId',
        'first_child_field': 'int',
        'child_list_indices': 'list[int]',
        'type_id': 'int',
        'export_type_name': 'str',
        'connection_source': 'BTConnection',
        'unknown_class': 'bool'
    }

    attribute_map = {
        '_import': 'import',
        'imported_external_document_id': 'importedExternalDocumentId',
        'element_import': 'elementImport',
        'imported_microversion_id': 'importedMicroversionId',
        'external_document_with_version_and_element_id': 'externalDocumentWithVersionAndElementId',
        'imported_workspace_element_id': 'importedWorkspaceElementId',
        'revision_data': 'revisionData',
        'namespace_field_index': 'namespaceFieldIndex',
        'namespace': 'namespace',
        'node_id': 'nodeId',
        'combined_namespace': 'combinedNamespace',
        'for_export': 'forExport',
        'import_microversion': 'importMicroversion',
        'path': 'path',
        'version': 'version',
        'changeable_child_field_indices': 'changeableChildFieldIndices',
        'child_nodes': 'childNodes',
        'has_user_code': 'hasUserCode',
        'child_locations': 'childLocations',
        'source_parse_tree_nodes': 'sourceParseTreeNodes',
        'child_map_indices': 'childMapIndices',
        'atomic_child_indices': 'atomicChildIndices',
        'node_id_raw': 'nodeIdRaw',
        'first_child_field': 'firstChildField',
        'child_list_indices': 'childListIndices',
        'type_id': 'typeId',
        'export_type_name': 'exportTypeName',
        'connection_source': 'connectionSource',
        'unknown_class': 'unknownClass'
    }

    def __init__(self, _import=None, imported_external_document_id=None, element_import=None, imported_microversion_id=None, external_document_with_version_and_element_id=None, imported_workspace_element_id=None, revision_data=None, namespace_field_index=None, namespace=None, node_id=None, combined_namespace=None, for_export=None, import_microversion=None, path=None, version=None, changeable_child_field_indices=None, child_nodes=None, has_user_code=None, child_locations=None, source_parse_tree_nodes=None, child_map_indices=None, atomic_child_indices=None, node_id_raw=None, first_child_field=None, child_list_indices=None, type_id=None, export_type_name=None, connection_source=None, unknown_class=None):  # noqa: E501
        """BTMImport - a model defined in OpenAPI"""  # noqa: E501

        self.__import = None
        self._imported_external_document_id = None
        self._element_import = None
        self._imported_microversion_id = None
        self._external_document_with_version_and_element_id = None
        self._imported_workspace_element_id = None
        self._revision_data = None
        self._namespace_field_index = None
        self._namespace = None
        self._node_id = None
        self._combined_namespace = None
        self._for_export = None
        self._import_microversion = None
        self._path = None
        self._version = None
        self._changeable_child_field_indices = None
        self._child_nodes = None
        self._has_user_code = None
        self._child_locations = None
        self._source_parse_tree_nodes = None
        self._child_map_indices = None
        self._atomic_child_indices = None
        self._node_id_raw = None
        self._first_child_field = None
        self._child_list_indices = None
        self._type_id = None
        self._export_type_name = None
        self._connection_source = None
        self._unknown_class = None
        self.discriminator = None

        if _import is not None:
            self._import = _import
        if imported_external_document_id is not None:
            self.imported_external_document_id = imported_external_document_id
        if element_import is not None:
            self.element_import = element_import
        if imported_microversion_id is not None:
            self.imported_microversion_id = imported_microversion_id
        if external_document_with_version_and_element_id is not None:
            self.external_document_with_version_and_element_id = external_document_with_version_and_element_id
        if imported_workspace_element_id is not None:
            self.imported_workspace_element_id = imported_workspace_element_id
        if revision_data is not None:
            self.revision_data = revision_data
        if namespace_field_index is not None:
            self.namespace_field_index = namespace_field_index
        if namespace is not None:
            self.namespace = namespace
        if node_id is not None:
            self.node_id = node_id
        if combined_namespace is not None:
            self.combined_namespace = combined_namespace
        if for_export is not None:
            self.for_export = for_export
        if import_microversion is not None:
            self.import_microversion = import_microversion
        if path is not None:
            self.path = path
        if version is not None:
            self.version = version
        if changeable_child_field_indices is not None:
            self.changeable_child_field_indices = changeable_child_field_indices
        if child_nodes is not None:
            self.child_nodes = child_nodes
        if has_user_code is not None:
            self.has_user_code = has_user_code
        if child_locations is not None:
            self.child_locations = child_locations
        if source_parse_tree_nodes is not None:
            self.source_parse_tree_nodes = source_parse_tree_nodes
        if child_map_indices is not None:
            self.child_map_indices = child_map_indices
        if atomic_child_indices is not None:
            self.atomic_child_indices = atomic_child_indices
        if node_id_raw is not None:
            self.node_id_raw = node_id_raw
        if first_child_field is not None:
            self.first_child_field = first_child_field
        if child_list_indices is not None:
            self.child_list_indices = child_list_indices
        if type_id is not None:
            self.type_id = type_id
        if export_type_name is not None:
            self.export_type_name = export_type_name
        if connection_source is not None:
            self.connection_source = connection_source
        if unknown_class is not None:
            self.unknown_class = unknown_class

    @property
    def _import(self):
        """Gets the _import of this BTMImport.  # noqa: E501


        :return: The _import of this BTMImport.  # noqa: E501
        :rtype: BTPModuleId
        """
        return self.__import

    @_import.setter
    def _import(self, _import):
        """Sets the _import of this BTMImport.


        :param _import: The _import of this BTMImport.  # noqa: E501
        :type: BTPModuleId
        """

        self.__import = _import

    @property
    def imported_external_document_id(self):
        """Gets the imported_external_document_id of this BTMImport.  # noqa: E501


        :return: The imported_external_document_id of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._imported_external_document_id

    @imported_external_document_id.setter
    def imported_external_document_id(self, imported_external_document_id):
        """Sets the imported_external_document_id of this BTMImport.


        :param imported_external_document_id: The imported_external_document_id of this BTMImport.  # noqa: E501
        :type: str
        """

        self._imported_external_document_id = imported_external_document_id

    @property
    def element_import(self):
        """Gets the element_import of this BTMImport.  # noqa: E501


        :return: The element_import of this BTMImport.  # noqa: E501
        :rtype: bool
        """
        return self._element_import

    @element_import.setter
    def element_import(self, element_import):
        """Sets the element_import of this BTMImport.


        :param element_import: The element_import of this BTMImport.  # noqa: E501
        :type: bool
        """

        self._element_import = element_import

    @property
    def imported_microversion_id(self):
        """Gets the imported_microversion_id of this BTMImport.  # noqa: E501


        :return: The imported_microversion_id of this BTMImport.  # noqa: E501
        :rtype: BTMicroversionId
        """
        return self._imported_microversion_id

    @imported_microversion_id.setter
    def imported_microversion_id(self, imported_microversion_id):
        """Sets the imported_microversion_id of this BTMImport.


        :param imported_microversion_id: The imported_microversion_id of this BTMImport.  # noqa: E501
        :type: BTMicroversionId
        """

        self._imported_microversion_id = imported_microversion_id

    @property
    def external_document_with_version_and_element_id(self):
        """Gets the external_document_with_version_and_element_id of this BTMImport.  # noqa: E501


        :return: The external_document_with_version_and_element_id of this BTMImport.  # noqa: E501
        :rtype: BTDocumentWithVersionAndElementId
        """
        return self._external_document_with_version_and_element_id

    @external_document_with_version_and_element_id.setter
    def external_document_with_version_and_element_id(self, external_document_with_version_and_element_id):
        """Sets the external_document_with_version_and_element_id of this BTMImport.


        :param external_document_with_version_and_element_id: The external_document_with_version_and_element_id of this BTMImport.  # noqa: E501
        :type: BTDocumentWithVersionAndElementId
        """

        self._external_document_with_version_and_element_id = external_document_with_version_and_element_id

    @property
    def imported_workspace_element_id(self):
        """Gets the imported_workspace_element_id of this BTMImport.  # noqa: E501


        :return: The imported_workspace_element_id of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._imported_workspace_element_id

    @imported_workspace_element_id.setter
    def imported_workspace_element_id(self, imported_workspace_element_id):
        """Sets the imported_workspace_element_id of this BTMImport.


        :param imported_workspace_element_id: The imported_workspace_element_id of this BTMImport.  # noqa: E501
        :type: str
        """

        self._imported_workspace_element_id = imported_workspace_element_id

    @property
    def revision_data(self):
        """Gets the revision_data of this BTMImport.  # noqa: E501


        :return: The revision_data of this BTMImport.  # noqa: E501
        :rtype: BTRevisionCustomData
        """
        return self._revision_data

    @revision_data.setter
    def revision_data(self, revision_data):
        """Sets the revision_data of this BTMImport.


        :param revision_data: The revision_data of this BTMImport.  # noqa: E501
        :type: BTRevisionCustomData
        """

        self._revision_data = revision_data

    @property
    def namespace_field_index(self):
        """Gets the namespace_field_index of this BTMImport.  # noqa: E501


        :return: The namespace_field_index of this BTMImport.  # noqa: E501
        :rtype: int
        """
        return self._namespace_field_index

    @namespace_field_index.setter
    def namespace_field_index(self, namespace_field_index):
        """Sets the namespace_field_index of this BTMImport.


        :param namespace_field_index: The namespace_field_index of this BTMImport.  # noqa: E501
        :type: int
        """

        self._namespace_field_index = namespace_field_index

    @property
    def namespace(self):
        """Gets the namespace of this BTMImport.  # noqa: E501


        :return: The namespace of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._namespace

    @namespace.setter
    def namespace(self, namespace):
        """Sets the namespace of this BTMImport.


        :param namespace: The namespace of this BTMImport.  # noqa: E501
        :type: str
        """

        self._namespace = namespace

    @property
    def node_id(self):
        """Gets the node_id of this BTMImport.  # noqa: E501


        :return: The node_id of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._node_id

    @node_id.setter
    def node_id(self, node_id):
        """Sets the node_id of this BTMImport.


        :param node_id: The node_id of this BTMImport.  # noqa: E501
        :type: str
        """

        self._node_id = node_id

    @property
    def combined_namespace(self):
        """Gets the combined_namespace of this BTMImport.  # noqa: E501


        :return: The combined_namespace of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._combined_namespace

    @combined_namespace.setter
    def combined_namespace(self, combined_namespace):
        """Sets the combined_namespace of this BTMImport.


        :param combined_namespace: The combined_namespace of this BTMImport.  # noqa: E501
        :type: str
        """

        self._combined_namespace = combined_namespace

    @property
    def for_export(self):
        """Gets the for_export of this BTMImport.  # noqa: E501


        :return: The for_export of this BTMImport.  # noqa: E501
        :rtype: bool
        """
        return self._for_export

    @for_export.setter
    def for_export(self, for_export):
        """Sets the for_export of this BTMImport.


        :param for_export: The for_export of this BTMImport.  # noqa: E501
        :type: bool
        """

        self._for_export = for_export

    @property
    def import_microversion(self):
        """Gets the import_microversion of this BTMImport.  # noqa: E501


        :return: The import_microversion of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._import_microversion

    @import_microversion.setter
    def import_microversion(self, import_microversion):
        """Sets the import_microversion of this BTMImport.


        :param import_microversion: The import_microversion of this BTMImport.  # noqa: E501
        :type: str
        """

        self._import_microversion = import_microversion

    @property
    def path(self):
        """Gets the path of this BTMImport.  # noqa: E501


        :return: The path of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._path

    @path.setter
    def path(self, path):
        """Sets the path of this BTMImport.


        :param path: The path of this BTMImport.  # noqa: E501
        :type: str
        """

        self._path = path

    @property
    def version(self):
        """Gets the version of this BTMImport.  # noqa: E501


        :return: The version of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._version

    @version.setter
    def version(self, version):
        """Sets the version of this BTMImport.


        :param version: The version of this BTMImport.  # noqa: E501
        :type: str
        """

        self._version = version

    @property
    def changeable_child_field_indices(self):
        """Gets the changeable_child_field_indices of this BTMImport.  # noqa: E501


        :return: The changeable_child_field_indices of this BTMImport.  # noqa: E501
        :rtype: list[int]
        """
        return self._changeable_child_field_indices

    @changeable_child_field_indices.setter
    def changeable_child_field_indices(self, changeable_child_field_indices):
        """Sets the changeable_child_field_indices of this BTMImport.


        :param changeable_child_field_indices: The changeable_child_field_indices of this BTMImport.  # noqa: E501
        :type: list[int]
        """

        self._changeable_child_field_indices = changeable_child_field_indices

    @property
    def child_nodes(self):
        """Gets the child_nodes of this BTMImport.  # noqa: E501


        :return: The child_nodes of this BTMImport.  # noqa: E501
        :rtype: dict(str, BTNodeReference)
        """
        return self._child_nodes

    @child_nodes.setter
    def child_nodes(self, child_nodes):
        """Sets the child_nodes of this BTMImport.


        :param child_nodes: The child_nodes of this BTMImport.  # noqa: E501
        :type: dict(str, BTNodeReference)
        """

        self._child_nodes = child_nodes

    @property
    def has_user_code(self):
        """Gets the has_user_code of this BTMImport.  # noqa: E501


        :return: The has_user_code of this BTMImport.  # noqa: E501
        :rtype: bool
        """
        return self._has_user_code

    @has_user_code.setter
    def has_user_code(self, has_user_code):
        """Sets the has_user_code of this BTMImport.


        :param has_user_code: The has_user_code of this BTMImport.  # noqa: E501
        :type: bool
        """

        self._has_user_code = has_user_code

    @property
    def child_locations(self):
        """Gets the child_locations of this BTMImport.  # noqa: E501


        :return: The child_locations of this BTMImport.  # noqa: E501
        :rtype: dict(str, BTInsertionLocation)
        """
        return self._child_locations

    @child_locations.setter
    def child_locations(self, child_locations):
        """Sets the child_locations of this BTMImport.


        :param child_locations: The child_locations of this BTMImport.  # noqa: E501
        :type: dict(str, BTInsertionLocation)
        """

        self._child_locations = child_locations

    @property
    def source_parse_tree_nodes(self):
        """Gets the source_parse_tree_nodes of this BTMImport.  # noqa: E501


        :return: The source_parse_tree_nodes of this BTMImport.  # noqa: E501
        :rtype: dict(str, list[BTNodeReference])
        """
        return self._source_parse_tree_nodes

    @source_parse_tree_nodes.setter
    def source_parse_tree_nodes(self, source_parse_tree_nodes):
        """Sets the source_parse_tree_nodes of this BTMImport.


        :param source_parse_tree_nodes: The source_parse_tree_nodes of this BTMImport.  # noqa: E501
        :type: dict(str, list[BTNodeReference])
        """

        self._source_parse_tree_nodes = source_parse_tree_nodes

    @property
    def child_map_indices(self):
        """Gets the child_map_indices of this BTMImport.  # noqa: E501


        :return: The child_map_indices of this BTMImport.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_map_indices

    @child_map_indices.setter
    def child_map_indices(self, child_map_indices):
        """Sets the child_map_indices of this BTMImport.


        :param child_map_indices: The child_map_indices of this BTMImport.  # noqa: E501
        :type: list[int]
        """

        self._child_map_indices = child_map_indices

    @property
    def atomic_child_indices(self):
        """Gets the atomic_child_indices of this BTMImport.  # noqa: E501


        :return: The atomic_child_indices of this BTMImport.  # noqa: E501
        :rtype: list[int]
        """
        return self._atomic_child_indices

    @atomic_child_indices.setter
    def atomic_child_indices(self, atomic_child_indices):
        """Sets the atomic_child_indices of this BTMImport.


        :param atomic_child_indices: The atomic_child_indices of this BTMImport.  # noqa: E501
        :type: list[int]
        """

        self._atomic_child_indices = atomic_child_indices

    @property
    def node_id_raw(self):
        """Gets the node_id_raw of this BTMImport.  # noqa: E501


        :return: The node_id_raw of this BTMImport.  # noqa: E501
        :rtype: BTObjectId
        """
        return self._node_id_raw

    @node_id_raw.setter
    def node_id_raw(self, node_id_raw):
        """Sets the node_id_raw of this BTMImport.


        :param node_id_raw: The node_id_raw of this BTMImport.  # noqa: E501
        :type: BTObjectId
        """

        self._node_id_raw = node_id_raw

    @property
    def first_child_field(self):
        """Gets the first_child_field of this BTMImport.  # noqa: E501


        :return: The first_child_field of this BTMImport.  # noqa: E501
        :rtype: int
        """
        return self._first_child_field

    @first_child_field.setter
    def first_child_field(self, first_child_field):
        """Sets the first_child_field of this BTMImport.


        :param first_child_field: The first_child_field of this BTMImport.  # noqa: E501
        :type: int
        """

        self._first_child_field = first_child_field

    @property
    def child_list_indices(self):
        """Gets the child_list_indices of this BTMImport.  # noqa: E501


        :return: The child_list_indices of this BTMImport.  # noqa: E501
        :rtype: list[int]
        """
        return self._child_list_indices

    @child_list_indices.setter
    def child_list_indices(self, child_list_indices):
        """Sets the child_list_indices of this BTMImport.


        :param child_list_indices: The child_list_indices of this BTMImport.  # noqa: E501
        :type: list[int]
        """

        self._child_list_indices = child_list_indices

    @property
    def type_id(self):
        """Gets the type_id of this BTMImport.  # noqa: E501


        :return: The type_id of this BTMImport.  # noqa: E501
        :rtype: int
        """
        return self._type_id

    @type_id.setter
    def type_id(self, type_id):
        """Sets the type_id of this BTMImport.


        :param type_id: The type_id of this BTMImport.  # noqa: E501
        :type: int
        """

        self._type_id = type_id

    @property
    def export_type_name(self):
        """Gets the export_type_name of this BTMImport.  # noqa: E501


        :return: The export_type_name of this BTMImport.  # noqa: E501
        :rtype: str
        """
        return self._export_type_name

    @export_type_name.setter
    def export_type_name(self, export_type_name):
        """Sets the export_type_name of this BTMImport.


        :param export_type_name: The export_type_name of this BTMImport.  # noqa: E501
        :type: str
        """

        self._export_type_name = export_type_name

    @property
    def connection_source(self):
        """Gets the connection_source of this BTMImport.  # noqa: E501


        :return: The connection_source of this BTMImport.  # noqa: E501
        :rtype: BTConnection
        """
        return self._connection_source

    @connection_source.setter
    def connection_source(self, connection_source):
        """Sets the connection_source of this BTMImport.


        :param connection_source: The connection_source of this BTMImport.  # noqa: E501
        :type: BTConnection
        """

        self._connection_source = connection_source

    @property
    def unknown_class(self):
        """Gets the unknown_class of this BTMImport.  # noqa: E501


        :return: The unknown_class of this BTMImport.  # noqa: E501
        :rtype: bool
        """
        return self._unknown_class

    @unknown_class.setter
    def unknown_class(self, unknown_class):
        """Sets the unknown_class of this BTMImport.


        :param unknown_class: The unknown_class of this BTMImport.  # noqa: E501
        :type: bool
        """

        self._unknown_class = unknown_class

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
        if not isinstance(other, BTMImport):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
