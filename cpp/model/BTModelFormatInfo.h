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
 * BTModelFormatInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTModelFormatInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTModelFormatInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTModelFormatInfo
    : public ModelBase
{
public:
    BTModelFormatInfo();
    virtual ~BTModelFormatInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTModelFormatInfo members

    /// <summary>
    /// 
    /// </summary>
    bool isCouldBeAssembly() const;
    bool couldBeAssemblyIsSet() const;
    void unsetCouldBeAssembly();

    void setCouldBeAssembly(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTranslatorName() const;
    bool translatorNameIsSet() const;
    void unsetTranslatorName();

    void setTranslatorName(const utility::string_t& value);


protected:
    bool m_CouldBeAssembly;
    bool m_CouldBeAssemblyIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_TranslatorName;
    bool m_TranslatorNameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTModelFormatInfo_H_ */
