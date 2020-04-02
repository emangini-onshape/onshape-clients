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



#include "BTTableCellParameter_2399_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableCellParameter_2399_allOf::BTTableCellParameter_2399_allOf()
{
    m_Error = utility::conversions::to_string_t("");
    m_ErrorIsSet = false;
    m_OverrideSpecIsSet = false;
    m_ParameterIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTTableCellParameter_2399_allOf::~BTTableCellParameter_2399_allOf()
{
}

void BTTableCellParameter_2399_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTTableCellParameter_2399_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ErrorIsSet)
    {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(m_Error);
    }
    if(m_OverrideSpecIsSet)
    {
        val[utility::conversions::to_string_t("overrideSpec")] = ModelBase::toJson(m_OverrideSpec);
    }
    if(m_ParameterIsSet)
    {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(m_Parameter);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTTableCellParameter_2399_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_error;
            ok &= ModelBase::fromJson(fieldValue, refVal_error);
            setError(refVal_error);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overrideSpec")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overrideSpec"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTParameterSpec_6> refVal_overrideSpec;
            ok &= ModelBase::fromJson(fieldValue, refVal_overrideSpec);
            setOverrideSpec(refVal_overrideSpec);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMParameter_1> refVal_parameter;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameter);
            setParameter(refVal_parameter);
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

void BTTableCellParameter_2399_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ErrorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("error"), m_Error));
    }
    if(m_OverrideSpecIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("overrideSpec"), m_OverrideSpec));
    }
    if(m_ParameterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameter"), m_Parameter));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTTableCellParameter_2399_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("error")))
    {
        utility::string_t refVal_error;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("error")), refVal_error );
        setError(refVal_error);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("overrideSpec")))
    {
        std::shared_ptr<BTParameterSpec_6> refVal_overrideSpec;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("overrideSpec")), refVal_overrideSpec );
        setOverrideSpec(refVal_overrideSpec);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameter")))
    {
        std::shared_ptr<BTMParameter_1> refVal_parameter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameter")), refVal_parameter );
        setParameter(refVal_parameter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

utility::string_t BTTableCellParameter_2399_allOf::getError() const
{
    return m_Error;
}

void BTTableCellParameter_2399_allOf::setError(const utility::string_t& value)
{
    m_Error = value;
    m_ErrorIsSet = true;
}

bool BTTableCellParameter_2399_allOf::errorIsSet() const
{
    return m_ErrorIsSet;
}

void BTTableCellParameter_2399_allOf::unsetError()
{
    m_ErrorIsSet = false;
}
std::shared_ptr<BTParameterSpec_6> BTTableCellParameter_2399_allOf::getOverrideSpec() const
{
    return m_OverrideSpec;
}

void BTTableCellParameter_2399_allOf::setOverrideSpec(const std::shared_ptr<BTParameterSpec_6>& value)
{
    m_OverrideSpec = value;
    m_OverrideSpecIsSet = true;
}

bool BTTableCellParameter_2399_allOf::overrideSpecIsSet() const
{
    return m_OverrideSpecIsSet;
}

void BTTableCellParameter_2399_allOf::unsetOverrideSpec()
{
    m_OverrideSpecIsSet = false;
}
std::shared_ptr<BTMParameter_1> BTTableCellParameter_2399_allOf::getParameter() const
{
    return m_Parameter;
}

void BTTableCellParameter_2399_allOf::setParameter(const std::shared_ptr<BTMParameter_1>& value)
{
    m_Parameter = value;
    m_ParameterIsSet = true;
}

bool BTTableCellParameter_2399_allOf::parameterIsSet() const
{
    return m_ParameterIsSet;
}

void BTTableCellParameter_2399_allOf::unsetParameter()
{
    m_ParameterIsSet = false;
}
utility::string_t BTTableCellParameter_2399_allOf::getBtType() const
{
    return m_BtType;
}

void BTTableCellParameter_2399_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableCellParameter_2399_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableCellParameter_2399_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


