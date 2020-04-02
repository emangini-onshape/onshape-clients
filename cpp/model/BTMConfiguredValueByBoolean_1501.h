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

/*
 * BTMConfiguredValueByBoolean_1501.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfiguredValueByBoolean_1501_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfiguredValueByBoolean_1501_H_


#include "BTMParameter_1.h"
#include "BTMConfiguredValue_1341.h"
#include <cpprest/details/basic_types.h>
#include "BTMConfiguredValueByBoolean_1501_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMConfiguredValueByBoolean_1501
    : public BTMConfiguredValue_1341
{
public:
    BTMConfiguredValueByBoolean_1501();
    virtual ~BTMConfiguredValueByBoolean_1501();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMConfiguredValueByBoolean_1501 members

    /// <summary>
    /// 
    /// </summary>
    bool isBooleanValue() const;
    bool booleanValueIsSet() const;
    void unsetBooleanValue();

    void setBooleanValue(bool value);


protected:
    bool m_BooleanValue;
    bool m_BooleanValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfiguredValueByBoolean_1501_H_ */
