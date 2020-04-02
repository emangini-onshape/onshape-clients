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



#include "BTAssemblyTransformDefinitionParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAssemblyTransformDefinitionParams::BTAssemblyTransformDefinitionParams()
{
    m_IsRelative = false;
    m_IsRelativeIsSet = false;
    m_OccurrencesIsSet = false;
    m_TransformIsSet = false;
}

BTAssemblyTransformDefinitionParams::~BTAssemblyTransformDefinitionParams()
{
}

void BTAssemblyTransformDefinitionParams::validate()
{
    // TODO: implement validation
}

web::json::value BTAssemblyTransformDefinitionParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IsRelativeIsSet)
    {
        val[utility::conversions::to_string_t("isRelative")] = ModelBase::toJson(m_IsRelative);
    }
    if(m_OccurrencesIsSet)
    {
        val[utility::conversions::to_string_t("occurrences")] = ModelBase::toJson(m_Occurrences);
    }
    if(m_TransformIsSet)
    {
        val[utility::conversions::to_string_t("transform")] = ModelBase::toJson(m_Transform);
    }

    return val;
}

bool BTAssemblyTransformDefinitionParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isRelative")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRelative"));
        if(!fieldValue.is_null())
        {
            bool refVal_isRelative;
            ok &= ModelBase::fromJson(fieldValue, refVal_isRelative);
            setIsRelative(refVal_isRelative);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occurrences")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occurrences"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTOccurrence_74>> refVal_occurrences;
            ok &= ModelBase::fromJson(fieldValue, refVal_occurrences);
            setOccurrences(refVal_occurrences);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transform")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transform"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_transform;
            ok &= ModelBase::fromJson(fieldValue, refVal_transform);
            setTransform(refVal_transform);
        }
    }
    return ok;
}

void BTAssemblyTransformDefinitionParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IsRelativeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isRelative"), m_IsRelative));
    }
    if(m_OccurrencesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("occurrences"), m_Occurrences));
    }
    if(m_TransformIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transform"), m_Transform));
    }
}

bool BTAssemblyTransformDefinitionParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("isRelative")))
    {
        bool refVal_isRelative;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isRelative")), refVal_isRelative );
        setIsRelative(refVal_isRelative);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("occurrences")))
    {
        std::vector<std::shared_ptr<BTOccurrence_74>> refVal_occurrences;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("occurrences")), refVal_occurrences );
        setOccurrences(refVal_occurrences);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transform")))
    {
        std::vector<double> refVal_transform;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("transform")), refVal_transform );
        setTransform(refVal_transform);
    }
    return ok;
}

bool BTAssemblyTransformDefinitionParams::isIsRelative() const
{
    return m_IsRelative;
}

void BTAssemblyTransformDefinitionParams::setIsRelative(bool value)
{
    m_IsRelative = value;
    m_IsRelativeIsSet = true;
}

bool BTAssemblyTransformDefinitionParams::isRelativeIsSet() const
{
    return m_IsRelativeIsSet;
}

void BTAssemblyTransformDefinitionParams::unsetIsRelative()
{
    m_IsRelativeIsSet = false;
}
std::vector<std::shared_ptr<BTOccurrence_74>>& BTAssemblyTransformDefinitionParams::getOccurrences()
{
    return m_Occurrences;
}

void BTAssemblyTransformDefinitionParams::setOccurrences(const std::vector<std::shared_ptr<BTOccurrence_74>>& value)
{
    m_Occurrences = value;
    m_OccurrencesIsSet = true;
}

bool BTAssemblyTransformDefinitionParams::occurrencesIsSet() const
{
    return m_OccurrencesIsSet;
}

void BTAssemblyTransformDefinitionParams::unsetOccurrences()
{
    m_OccurrencesIsSet = false;
}
std::vector<double>& BTAssemblyTransformDefinitionParams::getTransform()
{
    return m_Transform;
}

void BTAssemblyTransformDefinitionParams::setTransform(std::vector<double> value)
{
    m_Transform = value;
    m_TransformIsSet = true;
}

bool BTAssemblyTransformDefinitionParams::transformIsSet() const
{
    return m_TransformIsSet;
}

void BTAssemblyTransformDefinitionParams::unsetTransform()
{
    m_TransformIsSet = false;
}
}
}
}
}


