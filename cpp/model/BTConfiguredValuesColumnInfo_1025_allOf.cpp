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



#include "BTConfiguredValuesColumnInfo_1025_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfiguredValuesColumnInfo_1025_allOf::BTConfiguredValuesColumnInfo_1025_allOf()
{
    m_ParentName = utility::conversions::to_string_t("");
    m_ParentNameIsSet = false;
    m_ParentId = utility::conversions::to_string_t("");
    m_ParentIdIsSet = false;
    m_ParentType = utility::conversions::to_string_t("");
    m_ParentTypeIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTConfiguredValuesColumnInfo_1025_allOf::~BTConfiguredValuesColumnInfo_1025_allOf()
{
}

void BTConfiguredValuesColumnInfo_1025_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTConfiguredValuesColumnInfo_1025_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ParentNameIsSet)
    {
        val[utility::conversions::to_string_t("parentName")] = ModelBase::toJson(m_ParentName);
    }
    if(m_ParentIdIsSet)
    {
        val[utility::conversions::to_string_t("parentId")] = ModelBase::toJson(m_ParentId);
    }
    if(m_ParentTypeIsSet)
    {
        val[utility::conversions::to_string_t("parentType")] = ModelBase::toJson(m_ParentType);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTConfiguredValuesColumnInfo_1025_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parentName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentName;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentName);
            setParentName(refVal_parentName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentId);
            setParentId(refVal_parentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parentType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parentType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_parentType);
            setParentType(refVal_parentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTConfiguredValuesColumnInfo_1025_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ParentNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentName"), m_ParentName));
    }
    if(m_ParentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentId"), m_ParentId));
    }
    if(m_ParentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parentType"), m_ParentType));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTConfiguredValuesColumnInfo_1025_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("parentName")))
    {
        utility::string_t refVal_parentName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentName")), refVal_parentName );
        setParentName(refVal_parentName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentId")))
    {
        utility::string_t refVal_parentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentId")), refVal_parentId );
        setParentId(refVal_parentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parentType")))
    {
        utility::string_t refVal_parentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parentType")), refVal_parentType );
        setParentType(refVal_parentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTConfiguredValuesColumnInfo_1025_allOf::getParentName() const
{
    return m_ParentName;
}

void BTConfiguredValuesColumnInfo_1025_allOf::setParentName(const utility::string_t& value)
{
    m_ParentName = value;
    m_ParentNameIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025_allOf::parentNameIsSet() const
{
    return m_ParentNameIsSet;
}

void BTConfiguredValuesColumnInfo_1025_allOf::unsetParentName()
{
    m_ParentNameIsSet = false;
}
utility::string_t BTConfiguredValuesColumnInfo_1025_allOf::getParentId() const
{
    return m_ParentId;
}

void BTConfiguredValuesColumnInfo_1025_allOf::setParentId(const utility::string_t& value)
{
    m_ParentId = value;
    m_ParentIdIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025_allOf::parentIdIsSet() const
{
    return m_ParentIdIsSet;
}

void BTConfiguredValuesColumnInfo_1025_allOf::unsetParentId()
{
    m_ParentIdIsSet = false;
}
utility::string_t BTConfiguredValuesColumnInfo_1025_allOf::getParentType() const
{
    return m_ParentType;
}

void BTConfiguredValuesColumnInfo_1025_allOf::setParentType(const utility::string_t& value)
{
    m_ParentType = value;
    m_ParentTypeIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025_allOf::parentTypeIsSet() const
{
    return m_ParentTypeIsSet;
}

void BTConfiguredValuesColumnInfo_1025_allOf::unsetParentType()
{
    m_ParentTypeIsSet = false;
}
utility::string_t BTConfiguredValuesColumnInfo_1025_allOf::getBtType() const
{
    return m_BtType;
}

void BTConfiguredValuesColumnInfo_1025_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTConfiguredValuesColumnInfo_1025_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTConfiguredValuesColumnInfo_1025_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


