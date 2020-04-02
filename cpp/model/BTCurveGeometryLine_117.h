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
 * BTCurveGeometryLine_117.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryLine_117_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryLine_117_H_


#include "BTCurveGeometryLine_117_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTCurveGeometry_114.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTCurveGeometryLine_117
    : public BTCurveGeometry_114
{
public:
    BTCurveGeometryLine_117();
    virtual ~BTCurveGeometryLine_117();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTCurveGeometryLine_117 members

    /// <summary>
    /// 
    /// </summary>
    double getPntX() const;
    bool pntXIsSet() const;
    void unsetPntX();

    void setPntX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getPntY() const;
    bool pntYIsSet() const;
    void unsetPntY();

    void setPntY(double value);

    /// <summary>
    /// 
    /// </summary>
    double getDirX() const;
    bool dirXIsSet() const;
    void unsetDirX();

    void setDirX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getDirY() const;
    bool dirYIsSet() const;
    void unsetDirY();

    void setDirY(double value);


protected:
    double m_PntX;
    bool m_PntXIsSet;
    double m_PntY;
    bool m_PntYIsSet;
    double m_DirX;
    bool m_DirXIsSet;
    double m_DirY;
    bool m_DirYIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTCurveGeometryLine_117_H_ */
