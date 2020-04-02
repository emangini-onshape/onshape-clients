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



#include "BTFSValueTooBig_1247.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFSValueTooBig_1247::BTFSValueTooBig_1247()
{
}

BTFSValueTooBig_1247::~BTFSValueTooBig_1247()
{
}

void BTFSValueTooBig_1247::validate()
{
    // TODO: implement validation
}

web::json::value BTFSValueTooBig_1247::toJson() const
{
    web::json::value val = this->BTFSValue_1888::toJson();
    

    return val;
}

bool BTFSValueTooBig_1247::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTFSValue_1888::fromJson(val);
    
    return ok;
}

void BTFSValueTooBig_1247::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ConfigurationValueStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationValueString"), m_ConfigurationValueString));
    }
    if(m_StandardTypeNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardTypeName"), m_StandardTypeName));
    }
    if(m_TypeTagIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("typeTag"), m_TypeTag));
    }
    if(m_ValueObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valueObject"), m_ValueObject));
    }
}

bool BTFSValueTooBig_1247::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("configurationValueString")))
    {
        utility::string_t refVal_configurationValueString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationValueString")), refVal_configurationValueString );
        setConfigurationValueString(refVal_configurationValueString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardTypeName")))
    {
        utility::string_t refVal_standardTypeName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardTypeName")), refVal_standardTypeName );
        setStandardTypeName(refVal_standardTypeName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("typeTag")))
    {
        utility::string_t refVal_typeTag;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("typeTag")), refVal_typeTag );
        setTypeTag(refVal_typeTag);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("valueObject")))
    {
        std::shared_ptr<Object> refVal_valueObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valueObject")), refVal_valueObject );
        setValueObject(refVal_valueObject);
    }
    return ok;
}

}
}
}
}


