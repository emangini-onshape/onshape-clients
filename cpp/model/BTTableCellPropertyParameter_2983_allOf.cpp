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



#include "BTTableCellPropertyParameter_2983_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableCellPropertyParameter_2983_allOf::BTTableCellPropertyParameter_2983_allOf()
{
    m_IsUnchanged = false;
    m_IsUnchangedIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTTableCellPropertyParameter_2983_allOf::~BTTableCellPropertyParameter_2983_allOf()
{
}

void BTTableCellPropertyParameter_2983_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTTableCellPropertyParameter_2983_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IsUnchangedIsSet)
    {
        val[utility::conversions::to_string_t("isUnchanged")] = ModelBase::toJson(m_IsUnchanged);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTTableCellPropertyParameter_2983_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isUnchanged")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isUnchanged"));
        if(!fieldValue.is_null())
        {
            bool refVal_isUnchanged;
            ok &= ModelBase::fromJson(fieldValue, refVal_isUnchanged);
            setIsUnchanged(refVal_isUnchanged);
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

void BTTableCellPropertyParameter_2983_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IsUnchangedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isUnchanged"), m_IsUnchanged));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTTableCellPropertyParameter_2983_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("isUnchanged")))
    {
        bool refVal_isUnchanged;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isUnchanged")), refVal_isUnchanged );
        setIsUnchanged(refVal_isUnchanged);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTTableCellPropertyParameter_2983_allOf::isIsUnchanged() const
{
    return m_IsUnchanged;
}

void BTTableCellPropertyParameter_2983_allOf::setIsUnchanged(bool value)
{
    m_IsUnchanged = value;
    m_IsUnchangedIsSet = true;
}

bool BTTableCellPropertyParameter_2983_allOf::isUnchangedIsSet() const
{
    return m_IsUnchangedIsSet;
}

void BTTableCellPropertyParameter_2983_allOf::unsetIsUnchanged()
{
    m_IsUnchangedIsSet = false;
}
utility::string_t BTTableCellPropertyParameter_2983_allOf::getBtType() const
{
    return m_BtType;
}

void BTTableCellPropertyParameter_2983_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableCellPropertyParameter_2983_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableCellPropertyParameter_2983_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


