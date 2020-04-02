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



#include "BTMicroversionInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMicroversionInfo::BTMicroversionInfo()
{
    m_Microversion = utility::conversions::to_string_t("");
    m_MicroversionIsSet = false;
}

BTMicroversionInfo::~BTMicroversionInfo()
{
}

void BTMicroversionInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTMicroversionInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MicroversionIsSet)
    {
        val[utility::conversions::to_string_t("microversion")] = ModelBase::toJson(m_Microversion);
    }

    return val;
}

bool BTMicroversionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("microversion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microversion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_microversion;
            ok &= ModelBase::fromJson(fieldValue, refVal_microversion);
            setMicroversion(refVal_microversion);
        }
    }
    return ok;
}

void BTMicroversionInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversion"), m_Microversion));
    }
}

bool BTMicroversionInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("microversion")))
    {
        utility::string_t refVal_microversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversion")), refVal_microversion );
        setMicroversion(refVal_microversion);
    }
    return ok;
}

utility::string_t BTMicroversionInfo::getMicroversion() const
{
    return m_Microversion;
}

void BTMicroversionInfo::setMicroversion(const utility::string_t& value)
{
    m_Microversion = value;
    m_MicroversionIsSet = true;
}

bool BTMicroversionInfo::microversionIsSet() const
{
    return m_MicroversionIsSet;
}

void BTMicroversionInfo::unsetMicroversion()
{
    m_MicroversionIsSet = false;
}
}
}
}
}


