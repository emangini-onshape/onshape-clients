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



#include "BTViewDataInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTViewDataInfo::BTViewDataInfo()
{
    m_Angle = 0.0;
    m_AngleIsSet = false;
    m_CameraViewportIsSet = false;
    m_IsPerspective = false;
    m_IsPerspectiveIsSet = false;
    m_ViewMatrixIsSet = false;
}

BTViewDataInfo::~BTViewDataInfo()
{
}

void BTViewDataInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTViewDataInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AngleIsSet)
    {
        val[utility::conversions::to_string_t("angle")] = ModelBase::toJson(m_Angle);
    }
    if(m_CameraViewportIsSet)
    {
        val[utility::conversions::to_string_t("cameraViewport")] = ModelBase::toJson(m_CameraViewport);
    }
    if(m_IsPerspectiveIsSet)
    {
        val[utility::conversions::to_string_t("isPerspective")] = ModelBase::toJson(m_IsPerspective);
    }
    if(m_ViewMatrixIsSet)
    {
        val[utility::conversions::to_string_t("viewMatrix")] = ModelBase::toJson(m_ViewMatrix);
    }

    return val;
}

bool BTViewDataInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("angle")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("angle"));
        if(!fieldValue.is_null())
        {
            double refVal_angle;
            ok &= ModelBase::fromJson(fieldValue, refVal_angle);
            setAngle(refVal_angle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cameraViewport")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cameraViewport"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_cameraViewport;
            ok &= ModelBase::fromJson(fieldValue, refVal_cameraViewport);
            setCameraViewport(refVal_cameraViewport);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isPerspective")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isPerspective"));
        if(!fieldValue.is_null())
        {
            bool refVal_isPerspective;
            ok &= ModelBase::fromJson(fieldValue, refVal_isPerspective);
            setIsPerspective(refVal_isPerspective);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewMatrix")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewMatrix"));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_viewMatrix;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewMatrix);
            setViewMatrix(refVal_viewMatrix);
        }
    }
    return ok;
}

void BTViewDataInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AngleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("angle"), m_Angle));
    }
    if(m_CameraViewportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cameraViewport"), m_CameraViewport));
    }
    if(m_IsPerspectiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isPerspective"), m_IsPerspective));
    }
    if(m_ViewMatrixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewMatrix"), m_ViewMatrix));
    }
}

bool BTViewDataInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("angle")))
    {
        double refVal_angle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("angle")), refVal_angle );
        setAngle(refVal_angle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cameraViewport")))
    {
        std::vector<double> refVal_cameraViewport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cameraViewport")), refVal_cameraViewport );
        setCameraViewport(refVal_cameraViewport);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isPerspective")))
    {
        bool refVal_isPerspective;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isPerspective")), refVal_isPerspective );
        setIsPerspective(refVal_isPerspective);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewMatrix")))
    {
        std::vector<double> refVal_viewMatrix;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewMatrix")), refVal_viewMatrix );
        setViewMatrix(refVal_viewMatrix);
    }
    return ok;
}

double BTViewDataInfo::getAngle() const
{
    return m_Angle;
}

void BTViewDataInfo::setAngle(double value)
{
    m_Angle = value;
    m_AngleIsSet = true;
}

bool BTViewDataInfo::angleIsSet() const
{
    return m_AngleIsSet;
}

void BTViewDataInfo::unsetAngle()
{
    m_AngleIsSet = false;
}
std::vector<double>& BTViewDataInfo::getCameraViewport()
{
    return m_CameraViewport;
}

void BTViewDataInfo::setCameraViewport(std::vector<double> value)
{
    m_CameraViewport = value;
    m_CameraViewportIsSet = true;
}

bool BTViewDataInfo::cameraViewportIsSet() const
{
    return m_CameraViewportIsSet;
}

void BTViewDataInfo::unsetCameraViewport()
{
    m_CameraViewportIsSet = false;
}
bool BTViewDataInfo::isIsPerspective() const
{
    return m_IsPerspective;
}

void BTViewDataInfo::setIsPerspective(bool value)
{
    m_IsPerspective = value;
    m_IsPerspectiveIsSet = true;
}

bool BTViewDataInfo::isPerspectiveIsSet() const
{
    return m_IsPerspectiveIsSet;
}

void BTViewDataInfo::unsetIsPerspective()
{
    m_IsPerspectiveIsSet = false;
}
std::vector<double>& BTViewDataInfo::getViewMatrix()
{
    return m_ViewMatrix;
}

void BTViewDataInfo::setViewMatrix(std::vector<double> value)
{
    m_ViewMatrix = value;
    m_ViewMatrixIsSet = true;
}

bool BTViewDataInfo::viewMatrixIsSet() const
{
    return m_ViewMatrixIsSet;
}

void BTViewDataInfo::unsetViewMatrix()
{
    m_ViewMatrixIsSet = false;
}
}
}
}
}


