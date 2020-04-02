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
 * BTMNonGeometricItem_1864.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMNonGeometricItem_1864_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMNonGeometricItem_1864_H_


#include "BTMParameter_1.h"
#include "BTMAssemblyFeature_887.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include <cpprest/details/basic_types.h>
#include "BTMNonGeometricItem_1864_allOf.h"
#include "BTMFeature_134.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMNonGeometricItem_1864
    : public BTMAssemblyFeature_887
{
public:
    BTMNonGeometricItem_1864();
    virtual ~BTMNonGeometricItem_1864();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMNonGeometricItem_1864 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getItemDefinitionId() const;
    bool itemDefinitionIdIsSet() const;
    void unsetItemDefinitionId();

    void setItemDefinitionId(const utility::string_t& value);


protected:
    utility::string_t m_ItemDefinitionId;
    bool m_ItemDefinitionIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMNonGeometricItem_1864_H_ */
