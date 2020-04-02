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



#include "BTQuantityRange_181.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTQuantityRange_181::BTQuantityRange_181()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_DefaultValue = 0.0;
    m_DefaultValueIsSet = false;
    m_LocationIsSet = false;
    m_MaxValue = 0.0;
    m_MaxValueIsSet = false;
    m_MinValue = 0.0;
    m_MinValueIsSet = false;
    m_Units = utility::conversions::to_string_t("");
    m_UnitsIsSet = false;
}

BTQuantityRange_181::~BTQuantityRange_181()
{
}

void BTQuantityRange_181::validate()
{
    // TODO: implement validation
}

web::json::value BTQuantityRange_181::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_DefaultValueIsSet)
    {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(m_DefaultValue);
    }
    if(m_LocationIsSet)
    {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(m_Location);
    }
    if(m_MaxValueIsSet)
    {
        val[utility::conversions::to_string_t("maxValue")] = ModelBase::toJson(m_MaxValue);
    }
    if(m_MinValueIsSet)
    {
        val[utility::conversions::to_string_t("minValue")] = ModelBase::toJson(m_MinValue);
    }
    if(m_UnitsIsSet)
    {
        val[utility::conversions::to_string_t("units")] = ModelBase::toJson(m_Units);
    }

    return val;
}

bool BTQuantityRange_181::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("defaultValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultValue"));
        if(!fieldValue.is_null())
        {
            double refVal_defaultValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultValue);
            setDefaultValue(refVal_defaultValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTLocationInfo_226> refVal_location;
            ok &= ModelBase::fromJson(fieldValue, refVal_location);
            setLocation(refVal_location);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxValue"));
        if(!fieldValue.is_null())
        {
            double refVal_maxValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_maxValue);
            setMaxValue(refVal_maxValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minValue"));
        if(!fieldValue.is_null())
        {
            double refVal_minValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_minValue);
            setMinValue(refVal_minValue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("units")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("units"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_units;
            ok &= ModelBase::fromJson(fieldValue, refVal_units);
            setUnits(refVal_units);
        }
    }
    return ok;
}

void BTQuantityRange_181::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DefaultValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultValue"), m_DefaultValue));
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("location"), m_Location));
    }
    if(m_MaxValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("maxValue"), m_MaxValue));
    }
    if(m_MinValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("minValue"), m_MinValue));
    }
    if(m_UnitsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("units"), m_Units));
    }
}

bool BTQuantityRange_181::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("defaultValue")))
    {
        double refVal_defaultValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultValue")), refVal_defaultValue );
        setDefaultValue(refVal_defaultValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("location")))
    {
        std::shared_ptr<BTLocationInfo_226> refVal_location;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("location")), refVal_location );
        setLocation(refVal_location);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxValue")))
    {
        double refVal_maxValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("maxValue")), refVal_maxValue );
        setMaxValue(refVal_maxValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("minValue")))
    {
        double refVal_minValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("minValue")), refVal_minValue );
        setMinValue(refVal_minValue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("units")))
    {
        utility::string_t refVal_units;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("units")), refVal_units );
        setUnits(refVal_units);
    }
    return ok;
}

utility::string_t BTQuantityRange_181::getBtType() const
{
    return m_BtType;
}

void BTQuantityRange_181::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTQuantityRange_181::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTQuantityRange_181::unsetBtType()
{
    m_BtTypeIsSet = false;
}
double BTQuantityRange_181::getDefaultValue() const
{
    return m_DefaultValue;
}

void BTQuantityRange_181::setDefaultValue(double value)
{
    m_DefaultValue = value;
    m_DefaultValueIsSet = true;
}

bool BTQuantityRange_181::defaultValueIsSet() const
{
    return m_DefaultValueIsSet;
}

void BTQuantityRange_181::unsetDefaultValue()
{
    m_DefaultValueIsSet = false;
}
std::shared_ptr<BTLocationInfo_226> BTQuantityRange_181::getLocation() const
{
    return m_Location;
}

void BTQuantityRange_181::setLocation(const std::shared_ptr<BTLocationInfo_226>& value)
{
    m_Location = value;
    m_LocationIsSet = true;
}

bool BTQuantityRange_181::locationIsSet() const
{
    return m_LocationIsSet;
}

void BTQuantityRange_181::unsetLocation()
{
    m_LocationIsSet = false;
}
double BTQuantityRange_181::getMaxValue() const
{
    return m_MaxValue;
}

void BTQuantityRange_181::setMaxValue(double value)
{
    m_MaxValue = value;
    m_MaxValueIsSet = true;
}

bool BTQuantityRange_181::maxValueIsSet() const
{
    return m_MaxValueIsSet;
}

void BTQuantityRange_181::unsetMaxValue()
{
    m_MaxValueIsSet = false;
}
double BTQuantityRange_181::getMinValue() const
{
    return m_MinValue;
}

void BTQuantityRange_181::setMinValue(double value)
{
    m_MinValue = value;
    m_MinValueIsSet = true;
}

bool BTQuantityRange_181::minValueIsSet() const
{
    return m_MinValueIsSet;
}

void BTQuantityRange_181::unsetMinValue()
{
    m_MinValueIsSet = false;
}
utility::string_t BTQuantityRange_181::getUnits() const
{
    return m_Units;
}

void BTQuantityRange_181::setUnits(const utility::string_t& value)
{
    m_Units = value;
    m_UnitsIsSet = true;
}

bool BTQuantityRange_181::unitsIsSet() const
{
    return m_UnitsIsSet;
}

void BTQuantityRange_181::unsetUnits()
{
    m_UnitsIsSet = false;
}
}
}
}
}


