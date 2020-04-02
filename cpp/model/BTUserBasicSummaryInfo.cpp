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



#include "BTUserBasicSummaryInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTUserBasicSummaryInfo::BTUserBasicSummaryInfo()
{
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_JsonType = utility::conversions::to_string_t("");
    m_JsonTypeIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_State = 0;
    m_StateIsSet = false;
    m_ViewRef = utility::conversions::to_string_t("");
    m_ViewRefIsSet = false;
}

BTUserBasicSummaryInfo::~BTUserBasicSummaryInfo()
{
}

void BTUserBasicSummaryInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTUserBasicSummaryInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_JsonTypeIsSet)
    {
        val[utility::conversions::to_string_t("jsonType")] = ModelBase::toJson(m_JsonType);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_ViewRefIsSet)
    {
        val[utility::conversions::to_string_t("viewRef")] = ModelBase::toJson(m_ViewRef);
    }

    return val;
}

bool BTUserBasicSummaryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_image;
            ok &= ModelBase::fromJson(fieldValue, refVal_image);
            setImage(refVal_image);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jsonType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jsonType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_jsonType;
            ok &= ModelBase::fromJson(fieldValue, refVal_jsonType);
            setJsonType(refVal_jsonType);
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
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_state;
            ok &= ModelBase::fromJson(fieldValue, refVal_state);
            setState(refVal_state);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewRef")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewRef"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_viewRef;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewRef);
            setViewRef(refVal_viewRef);
        }
    }
    return ok;
}

void BTUserBasicSummaryInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
    if(m_JsonTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("jsonType"), m_JsonType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
    if(m_ViewRefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewRef"), m_ViewRef));
    }
}

bool BTUserBasicSummaryInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jsonType")))
    {
        utility::string_t refVal_jsonType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("jsonType")), refVal_jsonType );
        setJsonType(refVal_jsonType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        int32_t refVal_state;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("state")), refVal_state );
        setState(refVal_state);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewRef")))
    {
        utility::string_t refVal_viewRef;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewRef")), refVal_viewRef );
        setViewRef(refVal_viewRef);
    }
    return ok;
}

utility::string_t BTUserBasicSummaryInfo::getHref() const
{
    return m_Href;
}

void BTUserBasicSummaryInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTUserBasicSummaryInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTUserBasicSummaryInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTUserBasicSummaryInfo::getId() const
{
    return m_Id;
}

void BTUserBasicSummaryInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTUserBasicSummaryInfo::idIsSet() const
{
    return m_IdIsSet;
}

void BTUserBasicSummaryInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BTUserBasicSummaryInfo::getImage() const
{
    return m_Image;
}

void BTUserBasicSummaryInfo::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool BTUserBasicSummaryInfo::imageIsSet() const
{
    return m_ImageIsSet;
}

void BTUserBasicSummaryInfo::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t BTUserBasicSummaryInfo::getJsonType() const
{
    return m_JsonType;
}

void BTUserBasicSummaryInfo::setJsonType(const utility::string_t& value)
{
    m_JsonType = value;
    m_JsonTypeIsSet = true;
}

bool BTUserBasicSummaryInfo::jsonTypeIsSet() const
{
    return m_JsonTypeIsSet;
}

void BTUserBasicSummaryInfo::unsetJsonType()
{
    m_JsonTypeIsSet = false;
}
utility::string_t BTUserBasicSummaryInfo::getName() const
{
    return m_Name;
}

void BTUserBasicSummaryInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTUserBasicSummaryInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTUserBasicSummaryInfo::unsetName()
{
    m_NameIsSet = false;
}
int32_t BTUserBasicSummaryInfo::getState() const
{
    return m_State;
}

void BTUserBasicSummaryInfo::setState(int32_t value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool BTUserBasicSummaryInfo::stateIsSet() const
{
    return m_StateIsSet;
}

void BTUserBasicSummaryInfo::unsetState()
{
    m_StateIsSet = false;
}
utility::string_t BTUserBasicSummaryInfo::getViewRef() const
{
    return m_ViewRef;
}

void BTUserBasicSummaryInfo::setViewRef(const utility::string_t& value)
{
    m_ViewRef = value;
    m_ViewRefIsSet = true;
}

bool BTUserBasicSummaryInfo::viewRefIsSet() const
{
    return m_ViewRefIsSet;
}

void BTUserBasicSummaryInfo::unsetViewRef()
{
    m_ViewRefIsSet = false;
}
}
}
}
}


