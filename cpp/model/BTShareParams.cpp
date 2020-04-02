/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BTShareParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTShareParams::BTShareParams()
{
    m_DocumentId = utility::conversions::to_string_t("");
    m_DocumentIdIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_EncodedConfiguration = utility::conversions::to_string_t("");
    m_EncodedConfigurationIsSet = false;
    m_EntriesIsSet = false;
    m_FolderId = utility::conversions::to_string_t("");
    m_FolderIdIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_Permission = 0L;
    m_PermissionIsSet = false;
    m_PermissionSetIsSet = false;
    m_Update = false;
    m_UpdateIsSet = false;
    m_WorkspaceId = utility::conversions::to_string_t("");
    m_WorkspaceIdIsSet = false;
}

BTShareParams::~BTShareParams()
{
}

void BTShareParams::validate()
{
    // TODO: implement validation
}

web::json::value BTShareParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DocumentIdIsSet)
    {
        val[utility::conversions::to_string_t("documentId")] = ModelBase::toJson(m_DocumentId);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_EncodedConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("encodedConfiguration")] = ModelBase::toJson(m_EncodedConfiguration);
    }
    if(m_EntriesIsSet)
    {
        val[utility::conversions::to_string_t("entries")] = ModelBase::toJson(m_Entries);
    }
    if(m_FolderIdIsSet)
    {
        val[utility::conversions::to_string_t("folderId")] = ModelBase::toJson(m_FolderId);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }
    if(m_PermissionIsSet)
    {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(m_Permission);
    }
    if(m_PermissionSetIsSet)
    {
        val[utility::conversions::to_string_t("permissionSet")] = ModelBase::toJson(m_PermissionSet);
    }
    if(m_UpdateIsSet)
    {
        val[utility::conversions::to_string_t("update")] = ModelBase::toJson(m_Update);
    }
    if(m_WorkspaceIdIsSet)
    {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(m_WorkspaceId);
    }

    return val;
}

bool BTShareParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("documentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentId);
            setDocumentId(refVal_documentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elementId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elementId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_elementId;
            ok &= ModelBase::fromJson(fieldValue, refVal_elementId);
            setElementId(refVal_elementId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encodedConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encodedConfiguration"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_encodedConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_encodedConfiguration);
            setEncodedConfiguration(refVal_encodedConfiguration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entries")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entries"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTShareEntryParams>> refVal_entries;
            ok &= ModelBase::fromJson(fieldValue, refVal_entries);
            setEntries(refVal_entries);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folderId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folderId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_folderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_folderId);
            setFolderId(refVal_folderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_message);
            setMessage(refVal_message);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_permission;
            ok &= ModelBase::fromJson(fieldValue, refVal_permission);
            setPermission(refVal_permission);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permissionSet")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissionSet"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_permissionSet;
            ok &= ModelBase::fromJson(fieldValue, refVal_permissionSet);
            setPermissionSet(refVal_permissionSet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update"));
        if(!fieldValue.is_null())
        {
            bool refVal_update;
            ok &= ModelBase::fromJson(fieldValue, refVal_update);
            setUpdate(refVal_update);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspaceId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_workspaceId;
            ok &= ModelBase::fromJson(fieldValue, refVal_workspaceId);
            setWorkspaceId(refVal_workspaceId);
        }
    }
    return ok;
}

void BTShareParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DocumentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentId"), m_DocumentId));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_EncodedConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("encodedConfiguration"), m_EncodedConfiguration));
    }
    if(m_EntriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entries"), m_Entries));
    }
    if(m_FolderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("folderId"), m_FolderId));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    }
    if(m_PermissionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("permission"), m_Permission));
    }
    if(m_PermissionSetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("permissionSet"), m_PermissionSet));
    }
    if(m_UpdateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("update"), m_Update));
    }
    if(m_WorkspaceIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("workspaceId"), m_WorkspaceId));
    }
}

bool BTShareParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("documentId")))
    {
        utility::string_t refVal_documentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentId")), refVal_documentId );
        setDocumentId(refVal_documentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("encodedConfiguration")))
    {
        utility::string_t refVal_encodedConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("encodedConfiguration")), refVal_encodedConfiguration );
        setEncodedConfiguration(refVal_encodedConfiguration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entries")))
    {
        std::vector<std::shared_ptr<BTShareEntryParams>> refVal_entries;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entries")), refVal_entries );
        setEntries(refVal_entries);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("folderId")))
    {
        utility::string_t refVal_folderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("folderId")), refVal_folderId );
        setFolderId(refVal_folderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        utility::string_t refVal_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("message")), refVal_message );
        setMessage(refVal_message);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("permission")))
    {
        int64_t refVal_permission;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("permission")), refVal_permission );
        setPermission(refVal_permission);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("permissionSet")))
    {
        std::shared_ptr<Object> refVal_permissionSet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("permissionSet")), refVal_permissionSet );
        setPermissionSet(refVal_permissionSet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("update")))
    {
        bool refVal_update;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("update")), refVal_update );
        setUpdate(refVal_update);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("workspaceId")))
    {
        utility::string_t refVal_workspaceId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("workspaceId")), refVal_workspaceId );
        setWorkspaceId(refVal_workspaceId);
    }
    return ok;
}

utility::string_t BTShareParams::getDocumentId() const
{
    return m_DocumentId;
}

void BTShareParams::setDocumentId(const utility::string_t& value)
{
    m_DocumentId = value;
    m_DocumentIdIsSet = true;
}

bool BTShareParams::documentIdIsSet() const
{
    return m_DocumentIdIsSet;
}

void BTShareParams::unsetDocumentId()
{
    m_DocumentIdIsSet = false;
}
utility::string_t BTShareParams::getElementId() const
{
    return m_ElementId;
}

void BTShareParams::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTShareParams::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTShareParams::unsetElementId()
{
    m_ElementIdIsSet = false;
}
utility::string_t BTShareParams::getEncodedConfiguration() const
{
    return m_EncodedConfiguration;
}

void BTShareParams::setEncodedConfiguration(const utility::string_t& value)
{
    m_EncodedConfiguration = value;
    m_EncodedConfigurationIsSet = true;
}

bool BTShareParams::encodedConfigurationIsSet() const
{
    return m_EncodedConfigurationIsSet;
}

void BTShareParams::unsetEncodedConfiguration()
{
    m_EncodedConfigurationIsSet = false;
}
std::vector<std::shared_ptr<BTShareEntryParams>>& BTShareParams::getEntries()
{
    return m_Entries;
}

void BTShareParams::setEntries(const std::vector<std::shared_ptr<BTShareEntryParams>>& value)
{
    m_Entries = value;
    m_EntriesIsSet = true;
}

bool BTShareParams::entriesIsSet() const
{
    return m_EntriesIsSet;
}

void BTShareParams::unsetEntries()
{
    m_EntriesIsSet = false;
}
utility::string_t BTShareParams::getFolderId() const
{
    return m_FolderId;
}

void BTShareParams::setFolderId(const utility::string_t& value)
{
    m_FolderId = value;
    m_FolderIdIsSet = true;
}

bool BTShareParams::folderIdIsSet() const
{
    return m_FolderIdIsSet;
}

void BTShareParams::unsetFolderId()
{
    m_FolderIdIsSet = false;
}
utility::string_t BTShareParams::getMessage() const
{
    return m_Message;
}

void BTShareParams::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool BTShareParams::messageIsSet() const
{
    return m_MessageIsSet;
}

void BTShareParams::unsetMessage()
{
    m_MessageIsSet = false;
}
int64_t BTShareParams::getPermission() const
{
    return m_Permission;
}

void BTShareParams::setPermission(int64_t value)
{
    m_Permission = value;
    m_PermissionIsSet = true;
}

bool BTShareParams::permissionIsSet() const
{
    return m_PermissionIsSet;
}

void BTShareParams::unsetPermission()
{
    m_PermissionIsSet = false;
}
std::shared_ptr<Object> BTShareParams::getPermissionSet() const
{
    return m_PermissionSet;
}

void BTShareParams::setPermissionSet(const std::shared_ptr<Object>& value)
{
    m_PermissionSet = value;
    m_PermissionSetIsSet = true;
}

bool BTShareParams::permissionSetIsSet() const
{
    return m_PermissionSetIsSet;
}

void BTShareParams::unsetPermissionSet()
{
    m_PermissionSetIsSet = false;
}
bool BTShareParams::isUpdate() const
{
    return m_Update;
}

void BTShareParams::setUpdate(bool value)
{
    m_Update = value;
    m_UpdateIsSet = true;
}

bool BTShareParams::updateIsSet() const
{
    return m_UpdateIsSet;
}

void BTShareParams::unsetUpdate()
{
    m_UpdateIsSet = false;
}
utility::string_t BTShareParams::getWorkspaceId() const
{
    return m_WorkspaceId;
}

void BTShareParams::setWorkspaceId(const utility::string_t& value)
{
    m_WorkspaceId = value;
    m_WorkspaceIdIsSet = true;
}

bool BTShareParams::workspaceIdIsSet() const
{
    return m_WorkspaceIdIsSet;
}

void BTShareParams::unsetWorkspaceId()
{
    m_WorkspaceIdIsSet = false;
}
}
}
}
}


