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
 * BTMMate_64.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMMate_64_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMMate_64_H_


#include "BTMParameter_1.h"
#include "BTMMateConnector_66.h"
#include "BTMAssemblyFeature_887.h"
#include "BTMIndividualQueryWithOccurrenceBase_904.h"
#include "BTMParameterQueryWithOccurrenceList_67.h"
#include <cpprest/details/basic_types.h>
#include "BTMFeature_134.h"
#include "BTMMate_64_allOf.h"
#include <vector>
#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMMate_64
    : public BTMAssemblyFeature_887
{
public:
    BTMMate_64();
    virtual ~BTMMate_64();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMMate_64 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTMParameterQueryWithOccurrenceList_67> getMateConnectorQueryList() const;
    bool mateConnectorQueryListIsSet() const;
    void unsetMateConnectorQueryList();

    void setMateConnectorQueryList(const std::shared_ptr<BTMParameterQueryWithOccurrenceList_67>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isPrimaryAxisAlignment() const;
    bool primaryAxisAlignmentIsSet() const;
    void unsetPrimaryAxisAlignment();

    void setPrimaryAxisAlignment(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSecondaryAxisAlignment() const;
    bool secondaryAxisAlignmentIsSet() const;
    void unsetSecondaryAxisAlignment();

    void setSecondaryAxisAlignment(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTVector3d_389> getMateOffset() const;
    bool mateOffsetIsSet() const;
    void unsetMateOffset();

    void setMateOffset(const std::shared_ptr<BTVector3d_389>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMMateConnector_66>>& getMateConnectors();
    bool mateConnectorsIsSet() const;
    void unsetMateConnectors();

    void setMateConnectors(const std::vector<std::shared_ptr<BTMMateConnector_66>>& value);


protected:
    std::shared_ptr<BTMParameterQueryWithOccurrenceList_67> m_MateConnectorQueryList;
    bool m_MateConnectorQueryListIsSet;
    bool m_PrimaryAxisAlignment;
    bool m_PrimaryAxisAlignmentIsSet;
    utility::string_t m_SecondaryAxisAlignment;
    bool m_SecondaryAxisAlignmentIsSet;
    std::shared_ptr<BTVector3d_389> m_MateOffset;
    bool m_MateOffsetIsSet;
    std::vector<std::shared_ptr<BTMMateConnector_66>> m_MateConnectors;
    bool m_MateConnectorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMMate_64_H_ */
