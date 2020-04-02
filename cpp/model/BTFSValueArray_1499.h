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
 * BTFSValueArray_1499.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueArray_1499_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueArray_1499_H_


#include <cpprest/details/basic_types.h>
#include "BTFSValueArray_1499_allOf.h"
#include "Object.h"
#include <vector>
#include "BTFSValue_1888.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTFSValueArray_1499
    : public BTFSValue_1888
{
public:
    BTFSValueArray_1499();
    virtual ~BTFSValueArray_1499();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTFSValueArray_1499 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTFSValue_1888>>& getValue();
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::vector<std::shared_ptr<BTFSValue_1888>>& value);


protected:
    std::vector<std::shared_ptr<BTFSValue_1888>> m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTFSValueArray_1499_H_ */
