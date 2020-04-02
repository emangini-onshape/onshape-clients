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



#include "BTCustomPropertyDefinitionParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCustomPropertyDefinitionParams::BTCustomPropertyDefinitionParams()
{
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_EnumDefinitionIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_r_template = utility::conversions::to_string_t("");
    m_r_templateIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
}

BTCustomPropertyDefinitionParams::~BTCustomPropertyDefinitionParams()
{
}

void BTCustomPropertyDefinitionParams::validate()
{
    // TODO: implement validation
}

web::json::value BTCustomPropertyDefinitionParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_EnumDefinitionIsSet)
    {
        val[utility::conversions::to_string_t("enumDefinition")] = ModelBase::toJson(m_EnumDefinition);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_r_templateIsSet)
    {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(m_r_template);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }

    return val;
}

bool BTCustomPropertyDefinitionParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enumDefinition")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enumDefinition"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_enumDefinition;
            ok &= ModelBase::fromJson(fieldValue, refVal_enumDefinition);
            setEnumDefinition(refVal_enumDefinition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_template;
            ok &= ModelBase::fromJson(fieldValue, refVal_template);
            setRTemplate(refVal_template);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    return ok;
}

void BTCustomPropertyDefinitionParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_EnumDefinitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enumDefinition"), m_EnumDefinition));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_r_templateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("template"), m_r_template));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
}

bool BTCustomPropertyDefinitionParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enumDefinition")))
    {
        std::vector<utility::string_t> refVal_enumDefinition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enumDefinition")), refVal_enumDefinition );
        setEnumDefinition(refVal_enumDefinition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("template")))
    {
        utility::string_t refVal_template;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("template")), refVal_template );
        setRTemplate(refVal_template);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    return ok;
}

utility::string_t BTCustomPropertyDefinitionParams::getDescription() const
{
    return m_Description;
}

void BTCustomPropertyDefinitionParams::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool BTCustomPropertyDefinitionParams::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void BTCustomPropertyDefinitionParams::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<utility::string_t>& BTCustomPropertyDefinitionParams::getEnumDefinition()
{
    return m_EnumDefinition;
}

void BTCustomPropertyDefinitionParams::setEnumDefinition(const std::vector<utility::string_t>& value)
{
    m_EnumDefinition = value;
    m_EnumDefinitionIsSet = true;
}

bool BTCustomPropertyDefinitionParams::enumDefinitionIsSet() const
{
    return m_EnumDefinitionIsSet;
}

void BTCustomPropertyDefinitionParams::unsetEnumDefinition()
{
    m_EnumDefinitionIsSet = false;
}
utility::string_t BTCustomPropertyDefinitionParams::getName() const
{
    return m_Name;
}

void BTCustomPropertyDefinitionParams::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTCustomPropertyDefinitionParams::nameIsSet() const
{
    return m_NameIsSet;
}

void BTCustomPropertyDefinitionParams::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t BTCustomPropertyDefinitionParams::getRTemplate() const
{
    return m_r_template;
}

void BTCustomPropertyDefinitionParams::setRTemplate(const utility::string_t& value)
{
    m_r_template = value;
    m_r_templateIsSet = true;
}

bool BTCustomPropertyDefinitionParams::rTemplateIsSet() const
{
    return m_r_templateIsSet;
}

void BTCustomPropertyDefinitionParams::unsetr_template()
{
    m_r_templateIsSet = false;
}
utility::string_t BTCustomPropertyDefinitionParams::getType() const
{
    return m_Type;
}

void BTCustomPropertyDefinitionParams::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool BTCustomPropertyDefinitionParams::typeIsSet() const
{
    return m_TypeIsSet;
}

void BTCustomPropertyDefinitionParams::unsetType()
{
    m_TypeIsSet = false;
}
}
}
}
}


