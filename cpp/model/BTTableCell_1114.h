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
 * BTTableCell_1114.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCell_1114_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCell_1114_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTTableCell_1114
    : public ModelBase
{
public:
    BTTableCell_1114();
    virtual ~BTTableCell_1114();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTTableCell_1114 members

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
    bool isIsEverVisible() const;
    bool isEverVisibleIsSet() const;
    void unsetIsEverVisible();

    void setIsEverVisible(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsReadOnly() const;
    bool isReadOnlyIsSet() const;
    void unsetIsReadOnly();

    void setIsReadOnly(bool value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    bool m_IsEverVisible;
    bool m_IsEverVisibleIsSet;
    bool m_IsReadOnly;
    bool m_IsReadOnlyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTTableCell_1114_H_ */
