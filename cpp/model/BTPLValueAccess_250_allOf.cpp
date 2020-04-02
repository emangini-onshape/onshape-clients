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



#include "BTPLValueAccess_250_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPLValueAccess_250_allOf::BTPLValueAccess_250_allOf()
{
    m_AccessorIsSet = false;
    m_BaseIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPLValueAccess_250_allOf::~BTPLValueAccess_250_allOf()
{
}

void BTPLValueAccess_250_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPLValueAccess_250_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AccessorIsSet)
    {
        val[utility::conversions::to_string_t("accessor")] = ModelBase::toJson(m_Accessor);
    }
    if(m_BaseIsSet)
    {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(m_Base);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPLValueAccess_250_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accessor")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessor"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPPropertyAccessor_23> refVal_accessor;
            ok &= ModelBase::fromJson(fieldValue, refVal_accessor);
            setAccessor(refVal_accessor);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPLValue_249> refVal_base;
            ok &= ModelBase::fromJson(fieldValue, refVal_base);
            setBase(refVal_base);
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

void BTPLValueAccess_250_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AccessorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("accessor"), m_Accessor));
    }
    if(m_BaseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("base"), m_Base));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPLValueAccess_250_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("accessor")))
    {
        std::shared_ptr<BTPPropertyAccessor_23> refVal_accessor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("accessor")), refVal_accessor );
        setAccessor(refVal_accessor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("base")))
    {
        std::shared_ptr<BTPLValue_249> refVal_base;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("base")), refVal_base );
        setBase(refVal_base);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTPPropertyAccessor_23> BTPLValueAccess_250_allOf::getAccessor() const
{
    return m_Accessor;
}

void BTPLValueAccess_250_allOf::setAccessor(const std::shared_ptr<BTPPropertyAccessor_23>& value)
{
    m_Accessor = value;
    m_AccessorIsSet = true;
}

bool BTPLValueAccess_250_allOf::accessorIsSet() const
{
    return m_AccessorIsSet;
}

void BTPLValueAccess_250_allOf::unsetAccessor()
{
    m_AccessorIsSet = false;
}
std::shared_ptr<BTPLValue_249> BTPLValueAccess_250_allOf::getBase() const
{
    return m_Base;
}

void BTPLValueAccess_250_allOf::setBase(const std::shared_ptr<BTPLValue_249>& value)
{
    m_Base = value;
    m_BaseIsSet = true;
}

bool BTPLValueAccess_250_allOf::baseIsSet() const
{
    return m_BaseIsSet;
}

void BTPLValueAccess_250_allOf::unsetBase()
{
    m_BaseIsSet = false;
}
utility::string_t BTPLValueAccess_250_allOf::getBtType() const
{
    return m_BtType;
}

void BTPLValueAccess_250_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPLValueAccess_250_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPLValueAccess_250_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


