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


class BTStandardContentUsageSummary(object):
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
        'top_used_components_by_latest_versions': 'dict(str, BTComponentUsagesSummary)',
        'top_used_components_by_workspaces': 'dict(str, BTComponentUsagesSummary)',
        'top_users_by_latest_versions': 'dict(str, BTUserUsagesSummary)',
        'top_users_by_workspaces': 'dict(str, BTUserUsagesSummary)',
        'top_components_used_along_with_by_latest_versions': 'dict(str, BTComponentUsagesSummary)',
        'workspace_use_count': 'int',
        'latest_version_use_count': 'int',
        'version_use_count': 'int',
        'top_users_summary_done': 'bool'
    }

    attribute_map = {
        'top_used_components_by_latest_versions': 'topUsedComponentsByLatestVersions',
        'top_used_components_by_workspaces': 'topUsedComponentsByWorkspaces',
        'top_users_by_latest_versions': 'topUsersByLatestVersions',
        'top_users_by_workspaces': 'topUsersByWorkspaces',
        'top_components_used_along_with_by_latest_versions': 'topComponentsUsedAlongWithByLatestVersions',
        'workspace_use_count': 'workspaceUseCount',
        'latest_version_use_count': 'latestVersionUseCount',
        'version_use_count': 'versionUseCount',
        'top_users_summary_done': 'topUsersSummaryDone'
    }

    def __init__(self, top_used_components_by_latest_versions=None, top_used_components_by_workspaces=None, top_users_by_latest_versions=None, top_users_by_workspaces=None, top_components_used_along_with_by_latest_versions=None, workspace_use_count=None, latest_version_use_count=None, version_use_count=None, top_users_summary_done=None):  # noqa: E501
        """BTStandardContentUsageSummary - a model defined in OpenAPI"""  # noqa: E501

        self._top_used_components_by_latest_versions = None
        self._top_used_components_by_workspaces = None
        self._top_users_by_latest_versions = None
        self._top_users_by_workspaces = None
        self._top_components_used_along_with_by_latest_versions = None
        self._workspace_use_count = None
        self._latest_version_use_count = None
        self._version_use_count = None
        self._top_users_summary_done = None
        self.discriminator = None

        if top_used_components_by_latest_versions is not None:
            self.top_used_components_by_latest_versions = top_used_components_by_latest_versions
        if top_used_components_by_workspaces is not None:
            self.top_used_components_by_workspaces = top_used_components_by_workspaces
        if top_users_by_latest_versions is not None:
            self.top_users_by_latest_versions = top_users_by_latest_versions
        if top_users_by_workspaces is not None:
            self.top_users_by_workspaces = top_users_by_workspaces
        if top_components_used_along_with_by_latest_versions is not None:
            self.top_components_used_along_with_by_latest_versions = top_components_used_along_with_by_latest_versions
        if workspace_use_count is not None:
            self.workspace_use_count = workspace_use_count
        if latest_version_use_count is not None:
            self.latest_version_use_count = latest_version_use_count
        if version_use_count is not None:
            self.version_use_count = version_use_count
        if top_users_summary_done is not None:
            self.top_users_summary_done = top_users_summary_done

    @property
    def top_used_components_by_latest_versions(self):
        """Gets the top_used_components_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_used_components_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: dict(str, BTComponentUsagesSummary)
        """
        return self._top_used_components_by_latest_versions

    @top_used_components_by_latest_versions.setter
    def top_used_components_by_latest_versions(self, top_used_components_by_latest_versions):
        """Sets the top_used_components_by_latest_versions of this BTStandardContentUsageSummary.


        :param top_used_components_by_latest_versions: The top_used_components_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :type: dict(str, BTComponentUsagesSummary)
        """

        self._top_used_components_by_latest_versions = top_used_components_by_latest_versions

    @property
    def top_used_components_by_workspaces(self):
        """Gets the top_used_components_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_used_components_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: dict(str, BTComponentUsagesSummary)
        """
        return self._top_used_components_by_workspaces

    @top_used_components_by_workspaces.setter
    def top_used_components_by_workspaces(self, top_used_components_by_workspaces):
        """Sets the top_used_components_by_workspaces of this BTStandardContentUsageSummary.


        :param top_used_components_by_workspaces: The top_used_components_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501
        :type: dict(str, BTComponentUsagesSummary)
        """

        self._top_used_components_by_workspaces = top_used_components_by_workspaces

    @property
    def top_users_by_latest_versions(self):
        """Gets the top_users_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_users_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: dict(str, BTUserUsagesSummary)
        """
        return self._top_users_by_latest_versions

    @top_users_by_latest_versions.setter
    def top_users_by_latest_versions(self, top_users_by_latest_versions):
        """Sets the top_users_by_latest_versions of this BTStandardContentUsageSummary.


        :param top_users_by_latest_versions: The top_users_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :type: dict(str, BTUserUsagesSummary)
        """

        self._top_users_by_latest_versions = top_users_by_latest_versions

    @property
    def top_users_by_workspaces(self):
        """Gets the top_users_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_users_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: dict(str, BTUserUsagesSummary)
        """
        return self._top_users_by_workspaces

    @top_users_by_workspaces.setter
    def top_users_by_workspaces(self, top_users_by_workspaces):
        """Sets the top_users_by_workspaces of this BTStandardContentUsageSummary.


        :param top_users_by_workspaces: The top_users_by_workspaces of this BTStandardContentUsageSummary.  # noqa: E501
        :type: dict(str, BTUserUsagesSummary)
        """

        self._top_users_by_workspaces = top_users_by_workspaces

    @property
    def top_components_used_along_with_by_latest_versions(self):
        """Gets the top_components_used_along_with_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_components_used_along_with_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: dict(str, BTComponentUsagesSummary)
        """
        return self._top_components_used_along_with_by_latest_versions

    @top_components_used_along_with_by_latest_versions.setter
    def top_components_used_along_with_by_latest_versions(self, top_components_used_along_with_by_latest_versions):
        """Sets the top_components_used_along_with_by_latest_versions of this BTStandardContentUsageSummary.


        :param top_components_used_along_with_by_latest_versions: The top_components_used_along_with_by_latest_versions of this BTStandardContentUsageSummary.  # noqa: E501
        :type: dict(str, BTComponentUsagesSummary)
        """

        self._top_components_used_along_with_by_latest_versions = top_components_used_along_with_by_latest_versions

    @property
    def workspace_use_count(self):
        """Gets the workspace_use_count of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The workspace_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: int
        """
        return self._workspace_use_count

    @workspace_use_count.setter
    def workspace_use_count(self, workspace_use_count):
        """Sets the workspace_use_count of this BTStandardContentUsageSummary.


        :param workspace_use_count: The workspace_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :type: int
        """

        self._workspace_use_count = workspace_use_count

    @property
    def latest_version_use_count(self):
        """Gets the latest_version_use_count of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The latest_version_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: int
        """
        return self._latest_version_use_count

    @latest_version_use_count.setter
    def latest_version_use_count(self, latest_version_use_count):
        """Sets the latest_version_use_count of this BTStandardContentUsageSummary.


        :param latest_version_use_count: The latest_version_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :type: int
        """

        self._latest_version_use_count = latest_version_use_count

    @property
    def version_use_count(self):
        """Gets the version_use_count of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The version_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: int
        """
        return self._version_use_count

    @version_use_count.setter
    def version_use_count(self, version_use_count):
        """Sets the version_use_count of this BTStandardContentUsageSummary.


        :param version_use_count: The version_use_count of this BTStandardContentUsageSummary.  # noqa: E501
        :type: int
        """

        self._version_use_count = version_use_count

    @property
    def top_users_summary_done(self):
        """Gets the top_users_summary_done of this BTStandardContentUsageSummary.  # noqa: E501


        :return: The top_users_summary_done of this BTStandardContentUsageSummary.  # noqa: E501
        :rtype: bool
        """
        return self._top_users_summary_done

    @top_users_summary_done.setter
    def top_users_summary_done(self, top_users_summary_done):
        """Sets the top_users_summary_done of this BTStandardContentUsageSummary.


        :param top_users_summary_done: The top_users_summary_done of this BTStandardContentUsageSummary.  # noqa: E501
        :type: bool
        """

        self._top_users_summary_done = top_users_summary_done

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
        if not isinstance(other, BTStandardContentUsageSummary):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
