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
 * BTAssemblyTransformDefinitionParams.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyTransformDefinitionParams_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyTransformDefinitionParams_H_


#include "../ModelBase.h"

#include "BTOccurrence_74.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAssemblyTransformDefinitionParams
    : public ModelBase
{
public:
    BTAssemblyTransformDefinitionParams();
    virtual ~BTAssemblyTransformDefinitionParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAssemblyTransformDefinitionParams members

    /// <summary>
    /// 
    /// </summary>
    bool isIsRelative() const;
    bool isRelativeIsSet() const;
    void unsetIsRelative();

    void setIsRelative(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTOccurrence_74>>& getOccurrences();
    bool occurrencesIsSet() const;
    void unsetOccurrences();

    void setOccurrences(const std::vector<std::shared_ptr<BTOccurrence_74>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getTransform();
    bool transformIsSet() const;
    void unsetTransform();

    void setTransform(std::vector<double> value);


protected:
    bool m_IsRelative;
    bool m_IsRelativeIsSet;
    std::vector<std::shared_ptr<BTOccurrence_74>> m_Occurrences;
    bool m_OccurrencesIsSet;
    std::vector<double> m_Transform;
    bool m_TransformIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAssemblyTransformDefinitionParams_H_ */
