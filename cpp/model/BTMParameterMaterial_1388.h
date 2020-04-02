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
 * BTMParameterMaterial_1388.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterMaterial_1388_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterMaterial_1388_H_


#include "BTMParameter_1.h"
#include "BTMParameterMaterial_1388_allOf.h"
#include "BTPartMaterial_1445.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMParameterMaterial_1388
    : public BTMParameter_1
{
public:
    BTMParameterMaterial_1388();
    virtual ~BTMParameterMaterial_1388();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMParameterMaterial_1388 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPartMaterial_1445> getMaterial() const;
    bool materialIsSet() const;
    void unsetMaterial();

    void setMaterial(const std::shared_ptr<BTPartMaterial_1445>& value);


protected:
    std::shared_ptr<BTPartMaterial_1445> m_Material;
    bool m_MaterialIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMParameterMaterial_1388_H_ */
