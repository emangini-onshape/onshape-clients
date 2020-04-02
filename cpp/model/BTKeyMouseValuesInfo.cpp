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



#include "BTKeyMouseValuesInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTKeyMouseValuesInfo::BTKeyMouseValuesInfo()
{
    m_KeysIsSet = false;
    m_MouseButtonsIsSet = false;
}

BTKeyMouseValuesInfo::~BTKeyMouseValuesInfo()
{
}

void BTKeyMouseValuesInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTKeyMouseValuesInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_KeysIsSet)
    {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(m_Keys);
    }
    if(m_MouseButtonsIsSet)
    {
        val[utility::conversions::to_string_t("mouseButtons")] = ModelBase::toJson(m_MouseButtons);
    }

    return val;
}

bool BTKeyMouseValuesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_keys;
            ok &= ModelBase::fromJson(fieldValue, refVal_keys);
            setKeys(refVal_keys);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mouseButtons")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mouseButtons"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_mouseButtons;
            ok &= ModelBase::fromJson(fieldValue, refVal_mouseButtons);
            setMouseButtons(refVal_mouseButtons);
        }
    }
    return ok;
}

void BTKeyMouseValuesInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_KeysIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("keys"), m_Keys));
    }
    if(m_MouseButtonsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mouseButtons"), m_MouseButtons));
    }
}

bool BTKeyMouseValuesInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("keys")))
    {
        std::vector<utility::string_t> refVal_keys;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("keys")), refVal_keys );
        setKeys(refVal_keys);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mouseButtons")))
    {
        std::vector<utility::string_t> refVal_mouseButtons;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mouseButtons")), refVal_mouseButtons );
        setMouseButtons(refVal_mouseButtons);
    }
    return ok;
}

std::vector<utility::string_t>& BTKeyMouseValuesInfo::getKeys()
{
    return m_Keys;
}

void BTKeyMouseValuesInfo::setKeys(const std::vector<utility::string_t>& value)
{
    m_Keys = value;
    m_KeysIsSet = true;
}

bool BTKeyMouseValuesInfo::keysIsSet() const
{
    return m_KeysIsSet;
}

void BTKeyMouseValuesInfo::unsetKeys()
{
    m_KeysIsSet = false;
}
std::vector<utility::string_t>& BTKeyMouseValuesInfo::getMouseButtons()
{
    return m_MouseButtons;
}

void BTKeyMouseValuesInfo::setMouseButtons(const std::vector<utility::string_t>& value)
{
    m_MouseButtons = value;
    m_MouseButtonsIsSet = true;
}

bool BTKeyMouseValuesInfo::mouseButtonsIsSet() const
{
    return m_MouseButtonsIsSet;
}

void BTKeyMouseValuesInfo::unsetMouseButtons()
{
    m_MouseButtonsIsSet = false;
}
}
}
}
}


