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



#include "BTOrFilter_167.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTOrFilter_167::BTOrFilter_167()
{
    m_Operand1IsSet = false;
    m_Operand2IsSet = false;
}

BTOrFilter_167::~BTOrFilter_167()
{
}

void BTOrFilter_167::validate()
{
    // TODO: implement validation
}

web::json::value BTOrFilter_167::toJson() const
{
    web::json::value val = this->BTQueryFilter_183::toJson();
    
    if(m_Operand1IsSet)
    {
        val[utility::conversions::to_string_t("operand1")] = ModelBase::toJson(m_Operand1);
    }
    if(m_Operand2IsSet)
    {
        val[utility::conversions::to_string_t("operand2")] = ModelBase::toJson(m_Operand2);
    }

    return val;
}

bool BTOrFilter_167::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTQueryFilter_183::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("operand1")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operand1"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTQueryFilter_183> refVal_operand1;
            ok &= ModelBase::fromJson(fieldValue, refVal_operand1);
            setOperand1(refVal_operand1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operand2")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operand2"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTQueryFilter_183> refVal_operand2;
            ok &= ModelBase::fromJson(fieldValue, refVal_operand2);
            setOperand2(refVal_operand2);
        }
    }
    return ok;
}

void BTOrFilter_167::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Operand1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operand1"), m_Operand1));
    }
    if(m_Operand2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operand2"), m_Operand2));
    }
}

bool BTOrFilter_167::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("operand1")))
    {
        std::shared_ptr<BTQueryFilter_183> refVal_operand1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operand1")), refVal_operand1 );
        setOperand1(refVal_operand1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operand2")))
    {
        std::shared_ptr<BTQueryFilter_183> refVal_operand2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operand2")), refVal_operand2 );
        setOperand2(refVal_operand2);
    }
    return ok;
}

std::shared_ptr<BTQueryFilter_183> BTOrFilter_167::getOperand1() const
{
    return m_Operand1;
}

void BTOrFilter_167::setOperand1(const std::shared_ptr<BTQueryFilter_183>& value)
{
    m_Operand1 = value;
    m_Operand1IsSet = true;
}

bool BTOrFilter_167::operand1IsSet() const
{
    return m_Operand1IsSet;
}

void BTOrFilter_167::unsetOperand1()
{
    m_Operand1IsSet = false;
}
std::shared_ptr<BTQueryFilter_183> BTOrFilter_167::getOperand2() const
{
    return m_Operand2;
}

void BTOrFilter_167::setOperand2(const std::shared_ptr<BTQueryFilter_183>& value)
{
    m_Operand2 = value;
    m_Operand2IsSet = true;
}

bool BTOrFilter_167::operand2IsSet() const
{
    return m_Operand2IsSet;
}

void BTOrFilter_167::unsetOperand2()
{
    m_Operand2IsSet = false;
}
}
}
}
}


