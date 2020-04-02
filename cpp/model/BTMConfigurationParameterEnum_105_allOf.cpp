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



#include "BTMConfigurationParameterEnum_105_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMConfigurationParameterEnum_105_allOf::BTMConfigurationParameterEnum_105_allOf()
{
    m_OptionIdsIsSet = false;
    m_EnumName = utility::conversions::to_string_t("");
    m_EnumNameIsSet = false;
    m_OptionsIsSet = false;
    m_r_namespace = utility::conversions::to_string_t("");
    m_r_namespaceIsSet = false;
    m_DefaultValue = utility::conversions::to_string_t("");
    m_DefaultValueIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMConfigurationParameterEnum_105_allOf::~BTMConfigurationParameterEnum_105_allOf()
{
}

void BTMConfigurationParameterEnum_105_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMConfigurationParameterEnum_105_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_OptionIdsIsSet)
    {
        val[utility::conversions::to_string_t("optionIds")] = ModelBase::toJson(m_OptionIds);
    }
    if(m_EnumNameIsSet)
    {
        val[utility::conversions::to_string_t("enumName")] = ModelBase::toJson(m_EnumName);
    }
    if(m_OptionsIsSet)
    {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(m_Options);
    }
    if(m_r_namespaceIsSet)
    {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(m_r_namespace);
    }
    if(m_DefaultValueIsSet)
    {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(m_DefaultValue);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMConfigurationParameterEnum_105_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("optionIds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optionIds"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_optionIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_optionIds);
            setOptionIds(refVal_optionIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enumName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enumName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enumName;
            ok &= ModelBase::fromJson(fieldValue, refVal_enumName);
            setEnumName(refVal_enumName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMEnumOption_592>> refVal_options;
            ok &= ModelBase::fromJson(fieldValue, refVal_options);
            setOptions(refVal_options);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_namespace;
            ok &= ModelBase::fromJson(fieldValue, refVal_namespace);
            setRNamespace(refVal_namespace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_defaultValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultValue);
            setDefaultValue(refVal_defaultValue);
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

void BTMConfigurationParameterEnum_105_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_OptionIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("optionIds"), m_OptionIds));
    }
    if(m_EnumNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enumName"), m_EnumName));
    }
    if(m_OptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("options"), m_Options));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_DefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultValue"), m_DefaultValue));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMConfigurationParameterEnum_105_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("optionIds")))
    {
        std::vector<utility::string_t> refVal_optionIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("optionIds")), refVal_optionIds );
        setOptionIds(refVal_optionIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enumName")))
    {
        utility::string_t refVal_enumName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enumName")), refVal_enumName );
        setEnumName(refVal_enumName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("options")))
    {
        std::vector<std::shared_ptr<BTMEnumOption_592>> refVal_options;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("options")), refVal_options );
        setOptions(refVal_options);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultValue")))
    {
        utility::string_t refVal_defaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultValue")), refVal_defaultValue );
        setDefaultValue(refVal_defaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::vector<utility::string_t>& BTMConfigurationParameterEnum_105_allOf::getOptionIds()
{
    return m_OptionIds;
}

void BTMConfigurationParameterEnum_105_allOf::setOptionIds(const std::vector<utility::string_t>& value)
{
    m_OptionIds = value;
    m_OptionIdsIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::optionIdsIsSet() const
{
    return m_OptionIdsIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetOptionIds()
{
    m_OptionIdsIsSet = false;
}
utility::string_t BTMConfigurationParameterEnum_105_allOf::getEnumName() const
{
    return m_EnumName;
}

void BTMConfigurationParameterEnum_105_allOf::setEnumName(const utility::string_t& value)
{
    m_EnumName = value;
    m_EnumNameIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::enumNameIsSet() const
{
    return m_EnumNameIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetEnumName()
{
    m_EnumNameIsSet = false;
}
std::vector<std::shared_ptr<BTMEnumOption_592>>& BTMConfigurationParameterEnum_105_allOf::getOptions()
{
    return m_Options;
}

void BTMConfigurationParameterEnum_105_allOf::setOptions(const std::vector<std::shared_ptr<BTMEnumOption_592>>& value)
{
    m_Options = value;
    m_OptionsIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::optionsIsSet() const
{
    return m_OptionsIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetOptions()
{
    m_OptionsIsSet = false;
}
utility::string_t BTMConfigurationParameterEnum_105_allOf::getRNamespace() const
{
    return m_r_namespace;
}

void BTMConfigurationParameterEnum_105_allOf::setRNamespace(const utility::string_t& value)
{
    m_r_namespace = value;
    m_r_namespaceIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::rNamespaceIsSet() const
{
    return m_r_namespaceIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetr_namespace()
{
    m_r_namespaceIsSet = false;
}
utility::string_t BTMConfigurationParameterEnum_105_allOf::getDefaultValue() const
{
    return m_DefaultValue;
}

void BTMConfigurationParameterEnum_105_allOf::setDefaultValue(const utility::string_t& value)
{
    m_DefaultValue = value;
    m_DefaultValueIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::defaultValueIsSet() const
{
    return m_DefaultValueIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetDefaultValue()
{
    m_DefaultValueIsSet = false;
}
utility::string_t BTMConfigurationParameterEnum_105_allOf::getBtType() const
{
    return m_BtType;
}

void BTMConfigurationParameterEnum_105_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMConfigurationParameterEnum_105_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMConfigurationParameterEnum_105_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


