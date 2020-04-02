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



#include "BTPlaneDescription_692_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPlaneDescription_692_allOf::BTPlaneDescription_692_allOf()
{
    m_NormalIsSet = false;
    m_IsOrientedWithFace = false;
    m_IsOrientedWithFaceIsSet = false;
    m_OriginIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPlaneDescription_692_allOf::~BTPlaneDescription_692_allOf()
{
}

void BTPlaneDescription_692_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPlaneDescription_692_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NormalIsSet)
    {
        val[utility::conversions::to_string_t("normal")] = ModelBase::toJson(m_Normal);
    }
    if(m_IsOrientedWithFaceIsSet)
    {
        val[utility::conversions::to_string_t("isOrientedWithFace")] = ModelBase::toJson(m_IsOrientedWithFace);
    }
    if(m_OriginIsSet)
    {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPlaneDescription_692_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("normal")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_normal;
            ok &= ModelBase::fromJson(fieldValue, refVal_normal);
            setNormal(refVal_normal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isOrientedWithFace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isOrientedWithFace"));
        if(!fieldValue.is_null())
        {
            bool refVal_isOrientedWithFace;
            ok &= ModelBase::fromJson(fieldValue, refVal_isOrientedWithFace);
            setIsOrientedWithFace(refVal_isOrientedWithFace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_origin;
            ok &= ModelBase::fromJson(fieldValue, refVal_origin);
            setOrigin(refVal_origin);
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

void BTPlaneDescription_692_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NormalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("normal"), m_Normal));
    }
    if(m_IsOrientedWithFaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isOrientedWithFace"), m_IsOrientedWithFace));
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPlaneDescription_692_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("normal")))
    {
        std::shared_ptr<BTVector3d_389> refVal_normal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("normal")), refVal_normal );
        setNormal(refVal_normal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isOrientedWithFace")))
    {
        bool refVal_isOrientedWithFace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isOrientedWithFace")), refVal_isOrientedWithFace );
        setIsOrientedWithFace(refVal_isOrientedWithFace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("origin")))
    {
        std::shared_ptr<BTVector3d_389> refVal_origin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin")), refVal_origin );
        setOrigin(refVal_origin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTVector3d_389> BTPlaneDescription_692_allOf::getNormal() const
{
    return m_Normal;
}

void BTPlaneDescription_692_allOf::setNormal(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Normal = value;
    m_NormalIsSet = true;
}

bool BTPlaneDescription_692_allOf::normalIsSet() const
{
    return m_NormalIsSet;
}

void BTPlaneDescription_692_allOf::unsetNormal()
{
    m_NormalIsSet = false;
}
bool BTPlaneDescription_692_allOf::isIsOrientedWithFace() const
{
    return m_IsOrientedWithFace;
}

void BTPlaneDescription_692_allOf::setIsOrientedWithFace(bool value)
{
    m_IsOrientedWithFace = value;
    m_IsOrientedWithFaceIsSet = true;
}

bool BTPlaneDescription_692_allOf::isOrientedWithFaceIsSet() const
{
    return m_IsOrientedWithFaceIsSet;
}

void BTPlaneDescription_692_allOf::unsetIsOrientedWithFace()
{
    m_IsOrientedWithFaceIsSet = false;
}
std::shared_ptr<BTVector3d_389> BTPlaneDescription_692_allOf::getOrigin() const
{
    return m_Origin;
}

void BTPlaneDescription_692_allOf::setOrigin(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Origin = value;
    m_OriginIsSet = true;
}

bool BTPlaneDescription_692_allOf::originIsSet() const
{
    return m_OriginIsSet;
}

void BTPlaneDescription_692_allOf::unsetOrigin()
{
    m_OriginIsSet = false;
}
utility::string_t BTPlaneDescription_692_allOf::getBtType() const
{
    return m_BtType;
}

void BTPlaneDescription_692_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPlaneDescription_692_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPlaneDescription_692_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}


