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



#include "BTPFunctionDeclaration_246.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPFunctionDeclaration_246::BTPFunctionDeclaration_246()
{
}

BTPFunctionDeclaration_246::~BTPFunctionDeclaration_246()
{
}

void BTPFunctionDeclaration_246::validate()
{
    // TODO: implement validation
}

web::json::value BTPFunctionDeclaration_246::toJson() const
{
    web::json::value val = this->BTPFunctionOrPredicateDeclaration_247::toJson();
    

    return val;
}

bool BTPFunctionDeclaration_246::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTPFunctionOrPredicateDeclaration_247::fromJson(val);
    
    return ok;
}

void BTPFunctionDeclaration_246::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AtomicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("atomic"), m_Atomic));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_DocumentationTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentationType"), m_DocumentationType));
    }
    if(m_EndSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endSourceLocation"), m_EndSourceLocation));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ShortDescriptorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shortDescriptor"), m_ShortDescriptor));
    }
    if(m_SpaceAfterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfter"), m_SpaceAfter));
    }
    if(m_SpaceBeforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceBefore"), m_SpaceBefore));
    }
    if(m_SpaceDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceDefault"), m_SpaceDefault));
    }
    if(m_StartSourceLocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startSourceLocation"), m_StartSourceLocation));
    }
    if(m_DeprecatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deprecated"), m_Deprecated));
    }
    if(m_SymbolNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("symbolName"), m_SymbolName));
    }
    if(m_ArgumentsToDocumentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("argumentsToDocument"), m_ArgumentsToDocument));
    }
    if(m_DeprecatedExplanationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deprecatedExplanation"), m_DeprecatedExplanation));
    }
    if(m_ForExportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("forExport"), m_ForExport));
    }
    if(m_SpaceAfterExportIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfterExport"), m_SpaceAfterExport));
    }
    if(m_AnnotationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("annotation"), m_Annotation));
    }
    if(m_ArgumentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arguments"), m_Arguments));
    }
    if(m_BodyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("body"), m_Body));
    }
    if(m_PreconditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("precondition"), m_Precondition));
    }
    if(m_SpaceAfterArglistIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceAfterArglist"), m_SpaceAfterArglist));
    }
    if(m_SpaceInEmptyListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("spaceInEmptyList"), m_SpaceInEmptyList));
    }
    if(m_ReturnTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("returnType"), m_ReturnType));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
}

bool BTPFunctionDeclaration_246::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("atomic")))
    {
        bool refVal_atomic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("atomic")), refVal_atomic );
        setAtomic(refVal_atomic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentationType")))
    {
        utility::string_t refVal_documentationType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentationType")), refVal_documentationType );
        setDocumentationType(refVal_documentationType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endSourceLocation")))
    {
        int32_t refVal_endSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endSourceLocation")), refVal_endSourceLocation );
        setEndSourceLocation(refVal_endSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shortDescriptor")))
    {
        utility::string_t refVal_shortDescriptor;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shortDescriptor")), refVal_shortDescriptor );
        setShortDescriptor(refVal_shortDescriptor);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfter")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfter")), refVal_spaceAfter );
        setSpaceAfter(refVal_spaceAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceBefore")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceBefore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceBefore")), refVal_spaceBefore );
        setSpaceBefore(refVal_spaceBefore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceDefault")))
    {
        bool refVal_spaceDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceDefault")), refVal_spaceDefault );
        setSpaceDefault(refVal_spaceDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startSourceLocation")))
    {
        int32_t refVal_startSourceLocation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startSourceLocation")), refVal_startSourceLocation );
        setStartSourceLocation(refVal_startSourceLocation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deprecated")))
    {
        bool refVal_deprecated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deprecated")), refVal_deprecated );
        setDeprecated(refVal_deprecated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("symbolName")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_symbolName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("symbolName")), refVal_symbolName );
        setSymbolName(refVal_symbolName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("argumentsToDocument")))
    {
        std::vector<std::shared_ptr<BTPArgumentDeclaration_232>> refVal_argumentsToDocument;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("argumentsToDocument")), refVal_argumentsToDocument );
        setArgumentsToDocument(refVal_argumentsToDocument);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deprecatedExplanation")))
    {
        utility::string_t refVal_deprecatedExplanation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deprecatedExplanation")), refVal_deprecatedExplanation );
        setDeprecatedExplanation(refVal_deprecatedExplanation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("forExport")))
    {
        bool refVal_forExport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("forExport")), refVal_forExport );
        setForExport(refVal_forExport);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfterExport")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfterExport;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfterExport")), refVal_spaceAfterExport );
        setSpaceAfterExport(refVal_spaceAfterExport);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("annotation")))
    {
        std::shared_ptr<BTPAnnotation_231> refVal_annotation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("annotation")), refVal_annotation );
        setAnnotation(refVal_annotation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("arguments")))
    {
        std::vector<std::shared_ptr<BTPArgumentDeclaration_232>> refVal_arguments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("arguments")), refVal_arguments );
        setArguments(refVal_arguments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("body")))
    {
        std::shared_ptr<BTPStatementBlock_271> refVal_body;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("body")), refVal_body );
        setBody(refVal_body);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("precondition")))
    {
        std::shared_ptr<BTPStatement_269> refVal_precondition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("precondition")), refVal_precondition );
        setPrecondition(refVal_precondition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceAfterArglist")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceAfterArglist;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceAfterArglist")), refVal_spaceAfterArglist );
        setSpaceAfterArglist(refVal_spaceAfterArglist);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("spaceInEmptyList")))
    {
        std::shared_ptr<BTPSpace_10> refVal_spaceInEmptyList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("spaceInEmptyList")), refVal_spaceInEmptyList );
        setSpaceInEmptyList(refVal_spaceInEmptyList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("returnType")))
    {
        std::shared_ptr<BTPTypeName_290> refVal_returnType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("returnType")), refVal_returnType );
        setReturnType(refVal_returnType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        std::shared_ptr<BTPIdentifier_8> refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    return ok;
}

}
}
}
}


