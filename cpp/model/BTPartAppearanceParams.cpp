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



#include "BTPartAppearanceParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPartAppearanceParams::BTPartAppearanceParams()
{
    m_ColorIsSet = false;
    m_Opacity = 0;
    m_OpacityIsSet = false;
}

BTPartAppearanceParams::~BTPartAppearanceParams()
{
}

void BTPartAppearanceParams::validate()
{
    // TODO: implement validation
}

web::json::value BTPartAppearanceParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ColorIsSet)
    {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(m_Color);
    }
    if(m_OpacityIsSet)
    {
        val[utility::conversions::to_string_t("opacity")] = ModelBase::toJson(m_Opacity);
    }

    return val;
}

bool BTPartAppearanceParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("color")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTColorParams> refVal_color;
            ok &= ModelBase::fromJson(fieldValue, refVal_color);
            setColor(refVal_color);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opacity")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_opacity;
            ok &= ModelBase::fromJson(fieldValue, refVal_opacity);
            setOpacity(refVal_opacity);
        }
    }
    return ok;
}

void BTPartAppearanceParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ColorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("color"), m_Color));
    }
    if(m_OpacityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("opacity"), m_Opacity));
    }
}

bool BTPartAppearanceParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("color")))
    {
        std::shared_ptr<BTColorParams> refVal_color;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("color")), refVal_color );
        setColor(refVal_color);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("opacity")))
    {
        int32_t refVal_opacity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("opacity")), refVal_opacity );
        setOpacity(refVal_opacity);
    }
    return ok;
}

std::shared_ptr<BTColorParams> BTPartAppearanceParams::getColor() const
{
    return m_Color;
}

void BTPartAppearanceParams::setColor(const std::shared_ptr<BTColorParams>& value)
{
    m_Color = value;
    m_ColorIsSet = true;
}

bool BTPartAppearanceParams::colorIsSet() const
{
    return m_ColorIsSet;
}

void BTPartAppearanceParams::unsetColor()
{
    m_ColorIsSet = false;
}
int32_t BTPartAppearanceParams::getOpacity() const
{
    return m_Opacity;
}

void BTPartAppearanceParams::setOpacity(int32_t value)
{
    m_Opacity = value;
    m_OpacityIsSet = true;
}

bool BTPartAppearanceParams::opacityIsSet() const
{
    return m_OpacityIsSet;
}

void BTPartAppearanceParams::unsetOpacity()
{
    m_OpacityIsSet = false;
}
}
}
}
}


