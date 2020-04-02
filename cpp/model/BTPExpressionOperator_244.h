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
 * BTPExpressionOperator_244.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionOperator_244_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionOperator_244_H_


#include "BTPExpression_9.h"
#include "BTPExpressionOperator_244_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPSpace_10.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPExpressionOperator_244
    : public BTPExpression_9
{
public:
    BTPExpressionOperator_244();
    virtual ~BTPExpressionOperator_244();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPExpressionOperator_244 members

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
    bool isForExport() const;
    bool forExportIsSet() const;
    void unsetForExport();

    void setForExport(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getOperand1() const;
    bool operand1IsSet() const;
    void unsetOperand1();

    void setOperand1(const std::shared_ptr<BTPExpression_9>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getOperand2() const;
    bool operand2IsSet() const;
    void unsetOperand2();

    void setOperand2(const std::shared_ptr<BTPExpression_9>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getROperator() const;
    bool rOperatorIsSet() const;
    void unsetr_operator();

    void setROperator(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isGlobalNamespace() const;
    bool globalNamespaceIsSet() const;
    void unsetGlobalNamespace();

    void setGlobalNamespace(bool value);

    /// <summary>
    /// 
    /// </summary>
    bool isWrittenAsFunctionCall() const;
    bool writtenAsFunctionCallIsSet() const;
    void unsetWrittenAsFunctionCall();

    void setWrittenAsFunctionCall(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterNamespace() const;
    bool spaceAfterNamespaceIsSet() const;
    void unsetSpaceAfterNamespace();

    void setSpaceAfterNamespace(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceBeforeOperator() const;
    bool spaceBeforeOperatorIsSet() const;
    void unsetSpaceBeforeOperator();

    void setSpaceBeforeOperator(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterOperator() const;
    bool spaceAfterOperatorIsSet() const;
    void unsetSpaceAfterOperator();

    void setSpaceAfterOperator(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getOperand3() const;
    bool operand3IsSet() const;
    void unsetOperand3();

    void setOperand3(const std::shared_ptr<BTPExpression_9>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTPIdentifier_8>>& getRNamespace();
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const std::vector<std::shared_ptr<BTPIdentifier_8>>& value);


protected:
    utility::string_t m_ImportMicroversion;
    bool m_ImportMicroversionIsSet;
    bool m_ForExport;
    bool m_ForExportIsSet;
    std::shared_ptr<BTPExpression_9> m_Operand1;
    bool m_Operand1IsSet;
    std::shared_ptr<BTPExpression_9> m_Operand2;
    bool m_Operand2IsSet;
    utility::string_t m_r_operator;
    bool m_r_operatorIsSet;
    bool m_GlobalNamespace;
    bool m_GlobalNamespaceIsSet;
    bool m_WrittenAsFunctionCall;
    bool m_WrittenAsFunctionCallIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceAfterNamespace;
    bool m_SpaceAfterNamespaceIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceBeforeOperator;
    bool m_SpaceBeforeOperatorIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceAfterOperator;
    bool m_SpaceAfterOperatorIsSet;
    std::shared_ptr<BTPExpression_9> m_Operand3;
    bool m_Operand3IsSet;
    std::vector<std::shared_ptr<BTPIdentifier_8>> m_r_namespace;
    bool m_r_namespaceIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionOperator_244_H_ */
