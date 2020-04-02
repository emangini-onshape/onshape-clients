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
 * BTExportModelEdgeGeometry_1125.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelEdgeGeometry_1125_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelEdgeGeometry_1125_H_


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
class  BTExportModelEdgeGeometry_1125
    : public ModelBase
{
public:
    BTExportModelEdgeGeometry_1125();
    virtual ~BTExportModelEdgeGeometry_1125();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTExportModelEdgeGeometry_1125 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getEndPoint() const;
    bool endPointIsSet() const;
    void unsetEndPoint();

    void setEndPoint(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getEndVector() const;
    bool endVectorIsSet() const;
    void unsetEndVector();

    void setEndVector(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    double getLength() const;
    bool lengthIsSet() const;
    void unsetLength();

    void setLength(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getMidPoint() const;
    bool midPointIsSet() const;
    void unsetMidPoint();

    void setMidPoint(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getQuarterPoint() const;
    bool quarterPointIsSet() const;
    void unsetQuarterPoint();

    void setQuarterPoint(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getStartPoint() const;
    bool startPointIsSet() const;
    void unsetStartPoint();

    void setStartPoint(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getStartVector() const;
    bool startVectorIsSet() const;
    void unsetStartVector();

    void setStartVector(const std::shared_ptr<BTVector3d_389>& value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    std::shared_ptr<BTVector3d_389> m_EndPoint;
    bool m_EndPointIsSet;
    std::shared_ptr<BTVector3d_389> m_EndVector;
    bool m_EndVectorIsSet;
    double m_Length;
    bool m_LengthIsSet;
    std::shared_ptr<BTVector3d_389> m_MidPoint;
    bool m_MidPointIsSet;
    std::shared_ptr<BTVector3d_389> m_QuarterPoint;
    bool m_QuarterPointIsSet;
    std::shared_ptr<BTVector3d_389> m_StartPoint;
    bool m_StartPointIsSet;
    std::shared_ptr<BTVector3d_389> m_StartVector;
    bool m_StartVectorIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelEdgeGeometry_1125_H_ */
