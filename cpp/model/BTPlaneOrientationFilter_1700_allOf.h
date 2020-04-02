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
 * BTPlaneOrientationFilter_1700_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPlaneOrientationFilter_1700_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPlaneOrientationFilter_1700_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPlaneOrientationFilter_1700_allOf
    : public ModelBase
{
public:
    BTPlaneOrientationFilter_1700_allOf();
    virtual ~BTPlaneOrientationFilter_1700_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPlaneOrientationFilter_1700_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getNormal() const;
    bool normalIsSet() const;
    void unsetNormal();

    void setNormal(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    std::shared_ptr<BTVector3d_389> m_Normal;
    bool m_NormalIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPlaneOrientationFilter_1700_allOf_H_ */
