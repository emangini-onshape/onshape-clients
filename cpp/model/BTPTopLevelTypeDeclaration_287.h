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
 * BTPTopLevelTypeDeclaration_287.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelTypeDeclaration_287_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelTypeDeclaration_287_H_


#include "BTPTopLevelNode_286.h"
#include "BTPTopLevelTypeDeclaration_287_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPLiteralNumber_258.h"
#include "BTPSpace_10.h"
#include <vector>
#include "BTPAnnotation_231.h"
#include "BTPArgumentDeclaration_232.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPTopLevelTypeDeclaration_287
    : public BTPTopLevelNode_286
{
public:
    BTPTopLevelTypeDeclaration_287();
    virtual ~BTPTopLevelTypeDeclaration_287();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPTopLevelTypeDeclaration_287 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterVersion() const;
    bool spaceAfterVersionIsSet() const;
    void unsetSpaceAfterVersion();

    void setSpaceAfterVersion(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPLiteralNumber_258> getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const std::shared_ptr<BTPLiteralNumber_258>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPIdentifier_8> getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const std::shared_ptr<BTPIdentifier_8>& value);


protected:
    std::shared_ptr<BTPSpace_10> m_SpaceAfterVersion;
    bool m_SpaceAfterVersionIsSet;
    std::shared_ptr<BTPLiteralNumber_258> m_Version;
    bool m_VersionIsSet;
    std::shared_ptr<BTPIdentifier_8> m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPTopLevelTypeDeclaration_287_H_ */
