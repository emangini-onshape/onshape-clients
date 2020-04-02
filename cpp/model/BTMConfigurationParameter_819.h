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
 * BTMConfigurationParameter_819.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameter_819_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameter_819_H_


#include "../ModelBase.h"

#include "BTTreeNode_20.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTMConfigurationParameter_819
    : public ModelBase
{
public:
    BTMConfigurationParameter_819();
    virtual ~BTMConfigurationParameter_819();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTMConfigurationParameter_819 members

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
    std::shared_ptr<BTTreeNode_20> getGeneratedParameterId() const;
    bool generatedParameterIdIsSet() const;
    void unsetGeneratedParameterId();

    void setGeneratedParameterId(const std::shared_ptr<BTTreeNode_20>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImportMicroversion() const;
    bool importMicroversionIsSet() const;
    void unsetImportMicroversion();

    void setImportMicroversion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetNodeId();

    void setNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterId() const;
    bool parameterIdIsSet() const;
    void unsetParameterId();

    void setParameterId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetParameterName();

    void setParameterName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParameterType() const;
    bool parameterTypeIsSet() const;
    void unsetParameterType();

    void setParameterType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isValid() const;
    bool validIsSet() const;
    void unsetValid();

    void setValid(bool value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    std::shared_ptr<BTTreeNode_20> m_GeneratedParameterId;
    bool m_GeneratedParameterIdIsSet;
    utility::string_t m_ImportMicroversion;
    bool m_ImportMicroversionIsSet;
    utility::string_t m_NodeId;
    bool m_NodeIdIsSet;
    utility::string_t m_ParameterId;
    bool m_ParameterIdIsSet;
    utility::string_t m_ParameterName;
    bool m_ParameterNameIsSet;
    utility::string_t m_ParameterType;
    bool m_ParameterTypeIsSet;
    bool m_Valid;
    bool m_ValidIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTMConfigurationParameter_819_H_ */
