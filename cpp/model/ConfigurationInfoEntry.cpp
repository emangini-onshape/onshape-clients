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



#include "ConfigurationInfoEntry.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ConfigurationInfoEntry::ConfigurationInfoEntry()
{
    m_r_explicit = false;
    m_r_explicitIsSet = false;
    m_ParameterDisplayValue = utility::conversions::to_string_t("");
    m_ParameterDisplayValueIsSet = false;
    m_ParameterId = utility::conversions::to_string_t("");
    m_ParameterIdIsSet = false;
    m_ParameterName = utility::conversions::to_string_t("");
    m_ParameterNameIsSet = false;
    m_ParameterValue = utility::conversions::to_string_t("");
    m_ParameterValueIsSet = false;
}

ConfigurationInfoEntry::~ConfigurationInfoEntry()
{
}

void ConfigurationInfoEntry::validate()
{
    // TODO: implement validation
}

web::json::value ConfigurationInfoEntry::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_r_explicitIsSet)
    {
        val[utility::conversions::to_string_t("explicit")] = ModelBase::toJson(m_r_explicit);
    }
    if(m_ParameterDisplayValueIsSet)
    {
        val[utility::conversions::to_string_t("parameterDisplayValue")] = ModelBase::toJson(m_ParameterDisplayValue);
    }
    if(m_ParameterIdIsSet)
    {
        val[utility::conversions::to_string_t("parameterId")] = ModelBase::toJson(m_ParameterId);
    }
    if(m_ParameterNameIsSet)
    {
        val[utility::conversions::to_string_t("parameterName")] = ModelBase::toJson(m_ParameterName);
    }
    if(m_ParameterValueIsSet)
    {
        val[utility::conversions::to_string_t("parameterValue")] = ModelBase::toJson(m_ParameterValue);
    }

    return val;
}

bool ConfigurationInfoEntry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("explicit")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("explicit"));
        if(!fieldValue.is_null())
        {
            bool refVal_explicit;
            ok &= ModelBase::fromJson(fieldValue, refVal_explicit);
            setRExplicit(refVal_explicit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameterDisplayValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameterDisplayValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parameterDisplayValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameterDisplayValue);
            setParameterDisplayValue(refVal_parameterDisplayValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameterId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameterId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parameterId;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameterId);
            setParameterId(refVal_parameterId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameterName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameterName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parameterName;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameterName);
            setParameterName(refVal_parameterName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameterValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameterValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_parameterValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameterValue);
            setParameterValue(refVal_parameterValue);
        }
    }
    return ok;
}

void ConfigurationInfoEntry::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_r_explicitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("explicit"), m_r_explicit));
    }
    if(m_ParameterDisplayValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterDisplayValue"), m_ParameterDisplayValue));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_ParameterNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterName"), m_ParameterName));
    }
    if(m_ParameterValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterValue"), m_ParameterValue));
    }
}

bool ConfigurationInfoEntry::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("explicit")))
    {
        bool refVal_explicit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("explicit")), refVal_explicit );
        setRExplicit(refVal_explicit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterDisplayValue")))
    {
        utility::string_t refVal_parameterDisplayValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterDisplayValue")), refVal_parameterDisplayValue );
        setParameterDisplayValue(refVal_parameterDisplayValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterName")))
    {
        utility::string_t refVal_parameterName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterName")), refVal_parameterName );
        setParameterName(refVal_parameterName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterValue")))
    {
        utility::string_t refVal_parameterValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterValue")), refVal_parameterValue );
        setParameterValue(refVal_parameterValue);
    }
    return ok;
}

bool ConfigurationInfoEntry::isRExplicit() const
{
    return m_r_explicit;
}

void ConfigurationInfoEntry::setRExplicit(bool value)
{
    m_r_explicit = value;
    m_r_explicitIsSet = true;
}

bool ConfigurationInfoEntry::rExplicitIsSet() const
{
    return m_r_explicitIsSet;
}

void ConfigurationInfoEntry::unsetr_explicit()
{
    m_r_explicitIsSet = false;
}
utility::string_t ConfigurationInfoEntry::getParameterDisplayValue() const
{
    return m_ParameterDisplayValue;
}

void ConfigurationInfoEntry::setParameterDisplayValue(const utility::string_t& value)
{
    m_ParameterDisplayValue = value;
    m_ParameterDisplayValueIsSet = true;
}

bool ConfigurationInfoEntry::parameterDisplayValueIsSet() const
{
    return m_ParameterDisplayValueIsSet;
}

void ConfigurationInfoEntry::unsetParameterDisplayValue()
{
    m_ParameterDisplayValueIsSet = false;
}
utility::string_t ConfigurationInfoEntry::getParameterId() const
{
    return m_ParameterId;
}

void ConfigurationInfoEntry::setParameterId(const utility::string_t& value)
{
    m_ParameterId = value;
    m_ParameterIdIsSet = true;
}

bool ConfigurationInfoEntry::parameterIdIsSet() const
{
    return m_ParameterIdIsSet;
}

void ConfigurationInfoEntry::unsetParameterId()
{
    m_ParameterIdIsSet = false;
}
utility::string_t ConfigurationInfoEntry::getParameterName() const
{
    return m_ParameterName;
}

void ConfigurationInfoEntry::setParameterName(const utility::string_t& value)
{
    m_ParameterName = value;
    m_ParameterNameIsSet = true;
}

bool ConfigurationInfoEntry::parameterNameIsSet() const
{
    return m_ParameterNameIsSet;
}

void ConfigurationInfoEntry::unsetParameterName()
{
    m_ParameterNameIsSet = false;
}
utility::string_t ConfigurationInfoEntry::getParameterValue() const
{
    return m_ParameterValue;
}

void ConfigurationInfoEntry::setParameterValue(const utility::string_t& value)
{
    m_ParameterValue = value;
    m_ParameterValueIsSet = true;
}

bool ConfigurationInfoEntry::parameterValueIsSet() const
{
    return m_ParameterValueIsSet;
}

void ConfigurationInfoEntry::unsetParameterValue()
{
    m_ParameterValueIsSet = false;
}
}
}
}
}


