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



#include "BTFSTableRowMetadata_2262.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFSTableRowMetadata_2262::BTFSTableRowMetadata_2262()
{
    m_Callout = utility::conversions::to_string_t("");
    m_CalloutIsSet = false;
    m_CrossHighlightDataIsSet = false;
}

BTFSTableRowMetadata_2262::~BTFSTableRowMetadata_2262()
{
}

void BTFSTableRowMetadata_2262::validate()
{
    // TODO: implement validation
}

web::json::value BTFSTableRowMetadata_2262::toJson() const
{
    web::json::value val = this->BTTableBaseRowMetadata_3181::toJson();
    
    if(m_CalloutIsSet)
    {
        val[utility::conversions::to_string_t("callout")] = ModelBase::toJson(m_Callout);
    }
    if(m_CrossHighlightDataIsSet)
    {
        val[utility::conversions::to_string_t("crossHighlightData")] = ModelBase::toJson(m_CrossHighlightData);
    }

    return val;
}

bool BTFSTableRowMetadata_2262::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTTableBaseRowMetadata_3181::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("callout")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callout"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_callout;
            ok &= ModelBase::fromJson(fieldValue, refVal_callout);
            setCallout(refVal_callout);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("crossHighlightData")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("crossHighlightData"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTTableBaseCrossHighlightData_2609> refVal_crossHighlightData;
            ok &= ModelBase::fromJson(fieldValue, refVal_crossHighlightData);
            setCrossHighlightData(refVal_crossHighlightData);
        }
    }
    return ok;
}

void BTFSTableRowMetadata_2262::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CrossHighlightDataIfAnyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("crossHighlightDataIfAny"), m_CrossHighlightDataIfAny));
    }
    if(m_CalloutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("callout"), m_Callout));
    }
    if(m_CrossHighlightDataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("crossHighlightData"), m_CrossHighlightData));
    }
}

bool BTFSTableRowMetadata_2262::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("crossHighlightDataIfAny")))
    {
        std::shared_ptr<BTTableBaseCrossHighlightData_2609> refVal_crossHighlightDataIfAny;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("crossHighlightDataIfAny")), refVal_crossHighlightDataIfAny );
        setCrossHighlightDataIfAny(refVal_crossHighlightDataIfAny);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("callout")))
    {
        utility::string_t refVal_callout;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("callout")), refVal_callout );
        setCallout(refVal_callout);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("crossHighlightData")))
    {
        std::shared_ptr<BTTableBaseCrossHighlightData_2609> refVal_crossHighlightData;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("crossHighlightData")), refVal_crossHighlightData );
        setCrossHighlightData(refVal_crossHighlightData);
    }
    return ok;
}

utility::string_t BTFSTableRowMetadata_2262::getCallout() const
{
    return m_Callout;
}

void BTFSTableRowMetadata_2262::setCallout(const utility::string_t& value)
{
    m_Callout = value;
    m_CalloutIsSet = true;
}

bool BTFSTableRowMetadata_2262::calloutIsSet() const
{
    return m_CalloutIsSet;
}

void BTFSTableRowMetadata_2262::unsetCallout()
{
    m_CalloutIsSet = false;
}
std::shared_ptr<BTTableBaseCrossHighlightData_2609> BTFSTableRowMetadata_2262::getCrossHighlightData() const
{
    return m_CrossHighlightData;
}

void BTFSTableRowMetadata_2262::setCrossHighlightData(const std::shared_ptr<BTTableBaseCrossHighlightData_2609>& value)
{
    m_CrossHighlightData = value;
    m_CrossHighlightDataIsSet = true;
}

bool BTFSTableRowMetadata_2262::crossHighlightDataIsSet() const
{
    return m_CrossHighlightDataIsSet;
}

void BTFSTableRowMetadata_2262::unsetCrossHighlightData()
{
    m_CrossHighlightDataIsSet = false;
}
}
}
}
}


