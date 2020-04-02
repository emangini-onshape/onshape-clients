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
 * BTFSValueBoolean_1195.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueBoolean_1195_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueBoolean_1195_H_


#include <cpprest/details/basic_types.h>
#include "BTFSValueBoolean_1195_allOf.h"
#include "BTFSValue_1888.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTFSValueBoolean_1195
    : public BTFSValue_1888
{
public:
    BTFSValueBoolean_1195();
    virtual ~BTFSValueBoolean_1195();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTFSValueBoolean_1195 members

    /// <summary>
    /// 
    /// </summary>
    bool isValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(bool value);


protected:
    bool m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueBoolean_1195_H_ */
