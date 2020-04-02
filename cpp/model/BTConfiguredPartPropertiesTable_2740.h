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
 * BTConfiguredPartPropertiesTable_2740.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredPartPropertiesTable_2740_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredPartPropertiesTable_2740_H_


#include "BTConfiguredPartPropertiesTable_2740_allOf.h"
#include "BTTable_1825.h"
#include <cpprest/details/basic_types.h>
#include "BTTableRow_1054.h"
#include <vector>
#include "BTTableColumnInfo_1222.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTConfiguredPartPropertiesTable_2740
    : public BTTable_1825
{
public:
    BTConfiguredPartPropertiesTable_2740();
    virtual ~BTConfiguredPartPropertiesTable_2740();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTConfiguredPartPropertiesTable_2740 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPartDeterministicId() const;
    bool partDeterministicIdIsSet() const;
    void unsetPartDeterministicId();

    void setPartDeterministicId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPropertyNodeId() const;
    bool propertyNodeIdIsSet() const;
    void unsetPropertyNodeId();

    void setPropertyNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getPartDeterministicIds();
    bool partDeterministicIdsIsSet() const;
    void unsetPartDeterministicIds();

    void setPartDeterministicIds(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_PartDeterministicId;
    bool m_PartDeterministicIdIsSet;
    utility::string_t m_PropertyNodeId;
    bool m_PropertyNodeIdIsSet;
    std::vector<utility::string_t> m_PartDeterministicIds;
    bool m_PartDeterministicIdsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTConfiguredPartPropertiesTable_2740_H_ */
