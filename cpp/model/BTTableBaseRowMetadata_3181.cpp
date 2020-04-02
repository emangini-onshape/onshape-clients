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



#include "BTTableBaseRowMetadata_3181.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTTableBaseRowMetadata_3181::BTTableBaseRowMetadata_3181()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_CrossHighlightDataIfAnyIsSet = false;
}

BTTableBaseRowMetadata_3181::~BTTableBaseRowMetadata_3181()
{
}

void BTTableBaseRowMetadata_3181::validate()
{
    // TODO: implement validation
}

web::json::value BTTableBaseRowMetadata_3181::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_CrossHighlightDataIfAnyIsSet)
    {
        val[utility::conversions::to_string_t("crossHighlightDataIfAny")] = ModelBase::toJson(m_CrossHighlightDataIfAny);
    }

    return val;
}

bool BTTableBaseRowMetadata_3181::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("crossHighlightDataIfAny")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("crossHighlightDataIfAny"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTTableBaseCrossHighlightData_2609> refVal_crossHighlightDataIfAny;
            ok &= ModelBase::fromJson(fieldValue, refVal_crossHighlightDataIfAny);
            setCrossHighlightDataIfAny(refVal_crossHighlightDataIfAny);
        }
    }
    return ok;
}

void BTTableBaseRowMetadata_3181::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool BTTableBaseRowMetadata_3181::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

utility::string_t BTTableBaseRowMetadata_3181::getBtType() const
{
    return m_BtType;
}

void BTTableBaseRowMetadata_3181::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTTableBaseRowMetadata_3181::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTTableBaseRowMetadata_3181::unsetBtType()
{
    m_BtTypeIsSet = false;
}
std::shared_ptr<BTTableBaseCrossHighlightData_2609> BTTableBaseRowMetadata_3181::getCrossHighlightDataIfAny() const
{
    return m_CrossHighlightDataIfAny;
}

void BTTableBaseRowMetadata_3181::setCrossHighlightDataIfAny(const std::shared_ptr<BTTableBaseCrossHighlightData_2609>& value)
{
    m_CrossHighlightDataIfAny = value;
    m_CrossHighlightDataIfAnyIsSet = true;
}

bool BTTableBaseRowMetadata_3181::crossHighlightDataIfAnyIsSet() const
{
    return m_CrossHighlightDataIfAnyIsSet;
}

void BTTableBaseRowMetadata_3181::unsetCrossHighlightDataIfAny()
{
    m_CrossHighlightDataIfAnyIsSet = false;
}
}
}
}
}


