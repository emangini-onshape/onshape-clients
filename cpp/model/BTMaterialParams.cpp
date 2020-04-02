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



#include "BTMaterialParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMaterialParams::BTMaterialParams()
{
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_LibraryName = utility::conversions::to_string_t("");
    m_LibraryNameIsSet = false;
    m_LibraryReferenceIsSet = false;
    m_PropertiesIsSet = false;
}

BTMaterialParams::~BTMaterialParams()
{
}

void BTMaterialParams::validate()
{
    // TODO: implement validation
}

web::json::value BTMaterialParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_LibraryNameIsSet)
    {
        val[utility::conversions::to_string_t("libraryName")] = ModelBase::toJson(m_LibraryName);
    }
    if(m_LibraryReferenceIsSet)
    {
        val[utility::conversions::to_string_t("libraryReference")] = ModelBase::toJson(m_LibraryReference);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    }

    return val;
}

bool BTMaterialParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("displayName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_displayName;
            ok &= ModelBase::fromJson(fieldValue, refVal_displayName);
            setDisplayName(refVal_displayName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("libraryName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("libraryName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_libraryName;
            ok &= ModelBase::fromJson(fieldValue, refVal_libraryName);
            setLibraryName(refVal_libraryName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("libraryReference")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("libraryReference"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTExternalElementReferenceInfo> refVal_libraryReference;
            ok &= ModelBase::fromJson(fieldValue, refVal_libraryReference);
            setLibraryReference(refVal_libraryReference);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMaterialPropertyParams>> refVal_properties;
            ok &= ModelBase::fromJson(fieldValue, refVal_properties);
            setProperties(refVal_properties);
        }
    }
    return ok;
}

void BTMaterialParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_LibraryNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("libraryName"), m_LibraryName));
    }
    if(m_LibraryReferenceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("libraryReference"), m_LibraryReference));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), m_Properties));
    }
}

bool BTMaterialParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("displayName")))
    {
        utility::string_t refVal_displayName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName")), refVal_displayName );
        setDisplayName(refVal_displayName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("libraryName")))
    {
        utility::string_t refVal_libraryName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("libraryName")), refVal_libraryName );
        setLibraryName(refVal_libraryName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("libraryReference")))
    {
        std::shared_ptr<BTExternalElementReferenceInfo> refVal_libraryReference;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("libraryReference")), refVal_libraryReference );
        setLibraryReference(refVal_libraryReference);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        std::vector<std::shared_ptr<BTMaterialPropertyParams>> refVal_properties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties")), refVal_properties );
        setProperties(refVal_properties);
    }
    return ok;
}

utility::string_t BTMaterialParams::getDisplayName() const
{
    return m_DisplayName;
}

void BTMaterialParams::setDisplayName(const utility::string_t& value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}

bool BTMaterialParams::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void BTMaterialParams::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
utility::string_t BTMaterialParams::getId() const
{
    return m_Id;
}

void BTMaterialParams::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTMaterialParams::idIsSet() const
{
    return m_IdIsSet;
}

void BTMaterialParams::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BTMaterialParams::getLibraryName() const
{
    return m_LibraryName;
}

void BTMaterialParams::setLibraryName(const utility::string_t& value)
{
    m_LibraryName = value;
    m_LibraryNameIsSet = true;
}

bool BTMaterialParams::libraryNameIsSet() const
{
    return m_LibraryNameIsSet;
}

void BTMaterialParams::unsetLibraryName()
{
    m_LibraryNameIsSet = false;
}
std::shared_ptr<BTExternalElementReferenceInfo> BTMaterialParams::getLibraryReference() const
{
    return m_LibraryReference;
}

void BTMaterialParams::setLibraryReference(const std::shared_ptr<BTExternalElementReferenceInfo>& value)
{
    m_LibraryReference = value;
    m_LibraryReferenceIsSet = true;
}

bool BTMaterialParams::libraryReferenceIsSet() const
{
    return m_LibraryReferenceIsSet;
}

void BTMaterialParams::unsetLibraryReference()
{
    m_LibraryReferenceIsSet = false;
}
std::vector<std::shared_ptr<BTMaterialPropertyParams>>& BTMaterialParams::getProperties()
{
    return m_Properties;
}

void BTMaterialParams::setProperties(const std::vector<std::shared_ptr<BTMaterialPropertyParams>>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool BTMaterialParams::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void BTMaterialParams::unsetProperties()
{
    m_PropertiesIsSet = false;
}
}
}
}
}


