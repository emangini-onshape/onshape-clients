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



#include "BTMParameterLookupTablePath_1419.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMParameterLookupTablePath_1419::BTMParameterLookupTablePath_1419()
{
    m_ValueIsSet = false;
}

BTMParameterLookupTablePath_1419::~BTMParameterLookupTablePath_1419()
{
}

void BTMParameterLookupTablePath_1419::validate()
{
    // TODO: implement validation
}

web::json::value BTMParameterLookupTablePath_1419::toJson() const
{
    web::json::value val = this->BTMParameter_1::toJson();
    
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

bool BTMParameterLookupTablePath_1419::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMParameter_1::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    return ok;
}

void BTMParameterLookupTablePath_1419::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
}

bool BTMParameterLookupTablePath_1419::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        std::map<utility::string_t, utility::string_t> refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    return ok;
}

std::map<utility::string_t, utility::string_t>& BTMParameterLookupTablePath_1419::getValue()
{
    return m_Value;
}

void BTMParameterLookupTablePath_1419::setValue(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool BTMParameterLookupTablePath_1419::valueIsSet() const
{
    return m_ValueIsSet;
}

void BTMParameterLookupTablePath_1419::unsetValue()
{
    m_ValueIsSet = false;
}
}
}
}
}


