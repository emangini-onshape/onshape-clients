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
 * BTBillOfMaterialsTableRow_1425.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRow_1425_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRow_1425_H_


#include "BTBillOfMaterialsTableRow_1425_allOf.h"
#include "BTBillOfMaterialsUniqueItemId_2029.h"
#include "BTTableCell_1114.h"
#include "BTTreeNode_20.h"
#include "BTTableBaseRowMetadata_3181.h"
#include <cpprest/details/basic_types.h>
#include "BTTableRow_1054.h"
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTBillOfMaterialsTableRow_1425
    : public BTTableRow_1054
{
public:
    BTBillOfMaterialsTableRow_1425();
    virtual ~BTBillOfMaterialsTableRow_1425();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTBillOfMaterialsTableRow_1425 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTBillOfMaterialsUniqueItemId_2029> getUniqueItemId() const;
    bool uniqueItemIdIsSet() const;
    void unsetUniqueItemId();

    void setUniqueItemId(const std::shared_ptr<BTBillOfMaterialsUniqueItemId_2029>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getIndentLevel() const;
    bool indentLevelIsSet() const;
    void unsetIndentLevel();

    void setIndentLevel(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExpansionStatus() const;
    bool expansionStatusIsSet() const;
    void unsetExpansionStatus();

    void setExpansionStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExclusionStatus() const;
    bool exclusionStatusIsSet() const;
    void unsetExclusionStatus();

    void setExclusionStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isExcludeIsEditable() const;
    bool excludeIsEditableIsSet() const;
    void unsetExcludeIsEditable();

    void setExcludeIsEditable(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMetadataUpdateHref() const;
    bool metadataUpdateHrefIsSet() const;
    void unsetMetadataUpdateHref();

    void setMetadataUpdateHref(const utility::string_t& value);


protected:
    std::shared_ptr<BTBillOfMaterialsUniqueItemId_2029> m_UniqueItemId;
    bool m_UniqueItemIdIsSet;
    int32_t m_IndentLevel;
    bool m_IndentLevelIsSet;
    utility::string_t m_ExpansionStatus;
    bool m_ExpansionStatusIsSet;
    utility::string_t m_ExclusionStatus;
    bool m_ExclusionStatusIsSet;
    bool m_ExcludeIsEditable;
    bool m_ExcludeIsEditableIsSet;
    utility::string_t m_MetadataUpdateHref;
    bool m_MetadataUpdateHrefIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTBillOfMaterialsTableRow_1425_H_ */
