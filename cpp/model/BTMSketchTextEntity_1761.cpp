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



#include "BTMSketchTextEntity_1761.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMSketchTextEntity_1761::BTMSketchTextEntity_1761()
{
    m_FontName = utility::conversions::to_string_t("");
    m_FontNameIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_Ascent = 0.0;
    m_AscentIsSet = false;
    m_BaselineStartX = 0.0;
    m_BaselineStartXIsSet = false;
    m_BaselineStartY = 0.0;
    m_BaselineStartYIsSet = false;
    m_BaselineDirectionX = 0.0;
    m_BaselineDirectionXIsSet = false;
    m_BaselineDirectionY = 0.0;
    m_BaselineDirectionYIsSet = false;
}

BTMSketchTextEntity_1761::~BTMSketchTextEntity_1761()
{
}

void BTMSketchTextEntity_1761::validate()
{
    // TODO: implement validation
}

web::json::value BTMSketchTextEntity_1761::toJson() const
{
    web::json::value val = this->BTMSketchGeomEntity_5::toJson();
    
    if(m_FontNameIsSet)
    {
        val[utility::conversions::to_string_t("fontName")] = ModelBase::toJson(m_FontName);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }
    if(m_AscentIsSet)
    {
        val[utility::conversions::to_string_t("ascent")] = ModelBase::toJson(m_Ascent);
    }
    if(m_BaselineStartXIsSet)
    {
        val[utility::conversions::to_string_t("baselineStartX")] = ModelBase::toJson(m_BaselineStartX);
    }
    if(m_BaselineStartYIsSet)
    {
        val[utility::conversions::to_string_t("baselineStartY")] = ModelBase::toJson(m_BaselineStartY);
    }
    if(m_BaselineDirectionXIsSet)
    {
        val[utility::conversions::to_string_t("baselineDirectionX")] = ModelBase::toJson(m_BaselineDirectionX);
    }
    if(m_BaselineDirectionYIsSet)
    {
        val[utility::conversions::to_string_t("baselineDirectionY")] = ModelBase::toJson(m_BaselineDirectionY);
    }

    return val;
}

bool BTMSketchTextEntity_1761::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMSketchGeomEntity_5::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("fontName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fontName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fontName;
            ok &= ModelBase::fromJson(fieldValue, refVal_fontName);
            setFontName(refVal_fontName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_text);
            setText(refVal_text);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ascent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ascent"));
        if(!fieldValue.is_null())
        {
            double refVal_ascent;
            ok &= ModelBase::fromJson(fieldValue, refVal_ascent);
            setAscent(refVal_ascent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baselineStartX")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baselineStartX"));
        if(!fieldValue.is_null())
        {
            double refVal_baselineStartX;
            ok &= ModelBase::fromJson(fieldValue, refVal_baselineStartX);
            setBaselineStartX(refVal_baselineStartX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baselineStartY")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baselineStartY"));
        if(!fieldValue.is_null())
        {
            double refVal_baselineStartY;
            ok &= ModelBase::fromJson(fieldValue, refVal_baselineStartY);
            setBaselineStartY(refVal_baselineStartY);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baselineDirectionX")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baselineDirectionX"));
        if(!fieldValue.is_null())
        {
            double refVal_baselineDirectionX;
            ok &= ModelBase::fromJson(fieldValue, refVal_baselineDirectionX);
            setBaselineDirectionX(refVal_baselineDirectionX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baselineDirectionY")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baselineDirectionY"));
        if(!fieldValue.is_null())
        {
            double refVal_baselineDirectionY;
            ok &= ModelBase::fromJson(fieldValue, refVal_baselineDirectionY);
            setBaselineDirectionY(refVal_baselineDirectionY);
        }
    }
    return ok;
}

void BTMSketchTextEntity_1761::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ControlBoxIdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("controlBoxIds"), m_ControlBoxIds));
    }
    if(m_EntityIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityId"), m_EntityId));
    }
    if(m_EntityIdAndReplaceInDependentFieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityIdAndReplaceInDependentFields"), m_EntityIdAndReplaceInDependentFields));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_IsConstructionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isConstruction"), m_IsConstruction));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameters"), m_Parameters));
    }
    if(m_FontNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fontName"), m_FontName));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    }
    if(m_AscentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ascent"), m_Ascent));
    }
    if(m_BaselineStartXIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("baselineStartX"), m_BaselineStartX));
    }
    if(m_BaselineStartYIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("baselineStartY"), m_BaselineStartY));
    }
    if(m_BaselineDirectionXIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("baselineDirectionX"), m_BaselineDirectionX));
    }
    if(m_BaselineDirectionYIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("baselineDirectionY"), m_BaselineDirectionY));
    }
}

bool BTMSketchTextEntity_1761::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("controlBoxIds")))
    {
        std::vector<utility::string_t> refVal_controlBoxIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("controlBoxIds")), refVal_controlBoxIds );
        setControlBoxIds(refVal_controlBoxIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entityId")))
    {
        utility::string_t refVal_entityId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityId")), refVal_entityId );
        setEntityId(refVal_entityId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("entityIdAndReplaceInDependentFields")))
    {
        utility::string_t refVal_entityIdAndReplaceInDependentFields;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityIdAndReplaceInDependentFields")), refVal_entityIdAndReplaceInDependentFields );
        setEntityIdAndReplaceInDependentFields(refVal_entityIdAndReplaceInDependentFields);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isConstruction")))
    {
        bool refVal_isConstruction;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isConstruction")), refVal_isConstruction );
        setIsConstruction(refVal_isConstruction);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameters")))
    {
        std::vector<std::shared_ptr<BTMParameter_1>> refVal_parameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameters")), refVal_parameters );
        setParameters(refVal_parameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fontName")))
    {
        utility::string_t refVal_fontName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fontName")), refVal_fontName );
        setFontName(refVal_fontName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        utility::string_t refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ascent")))
    {
        double refVal_ascent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ascent")), refVal_ascent );
        setAscent(refVal_ascent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("baselineStartX")))
    {
        double refVal_baselineStartX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("baselineStartX")), refVal_baselineStartX );
        setBaselineStartX(refVal_baselineStartX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("baselineStartY")))
    {
        double refVal_baselineStartY;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("baselineStartY")), refVal_baselineStartY );
        setBaselineStartY(refVal_baselineStartY);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("baselineDirectionX")))
    {
        double refVal_baselineDirectionX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("baselineDirectionX")), refVal_baselineDirectionX );
        setBaselineDirectionX(refVal_baselineDirectionX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("baselineDirectionY")))
    {
        double refVal_baselineDirectionY;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("baselineDirectionY")), refVal_baselineDirectionY );
        setBaselineDirectionY(refVal_baselineDirectionY);
    }
    return ok;
}

utility::string_t BTMSketchTextEntity_1761::getFontName() const
{
    return m_FontName;
}

void BTMSketchTextEntity_1761::setFontName(const utility::string_t& value)
{
    m_FontName = value;
    m_FontNameIsSet = true;
}

bool BTMSketchTextEntity_1761::fontNameIsSet() const
{
    return m_FontNameIsSet;
}

void BTMSketchTextEntity_1761::unsetFontName()
{
    m_FontNameIsSet = false;
}
utility::string_t BTMSketchTextEntity_1761::getText() const
{
    return m_Text;
}

void BTMSketchTextEntity_1761::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool BTMSketchTextEntity_1761::textIsSet() const
{
    return m_TextIsSet;
}

void BTMSketchTextEntity_1761::unsetText()
{
    m_TextIsSet = false;
}
double BTMSketchTextEntity_1761::getAscent() const
{
    return m_Ascent;
}

void BTMSketchTextEntity_1761::setAscent(double value)
{
    m_Ascent = value;
    m_AscentIsSet = true;
}

bool BTMSketchTextEntity_1761::ascentIsSet() const
{
    return m_AscentIsSet;
}

void BTMSketchTextEntity_1761::unsetAscent()
{
    m_AscentIsSet = false;
}
double BTMSketchTextEntity_1761::getBaselineStartX() const
{
    return m_BaselineStartX;
}

void BTMSketchTextEntity_1761::setBaselineStartX(double value)
{
    m_BaselineStartX = value;
    m_BaselineStartXIsSet = true;
}

bool BTMSketchTextEntity_1761::baselineStartXIsSet() const
{
    return m_BaselineStartXIsSet;
}

void BTMSketchTextEntity_1761::unsetBaselineStartX()
{
    m_BaselineStartXIsSet = false;
}
double BTMSketchTextEntity_1761::getBaselineStartY() const
{
    return m_BaselineStartY;
}

void BTMSketchTextEntity_1761::setBaselineStartY(double value)
{
    m_BaselineStartY = value;
    m_BaselineStartYIsSet = true;
}

bool BTMSketchTextEntity_1761::baselineStartYIsSet() const
{
    return m_BaselineStartYIsSet;
}

void BTMSketchTextEntity_1761::unsetBaselineStartY()
{
    m_BaselineStartYIsSet = false;
}
double BTMSketchTextEntity_1761::getBaselineDirectionX() const
{
    return m_BaselineDirectionX;
}

void BTMSketchTextEntity_1761::setBaselineDirectionX(double value)
{
    m_BaselineDirectionX = value;
    m_BaselineDirectionXIsSet = true;
}

bool BTMSketchTextEntity_1761::baselineDirectionXIsSet() const
{
    return m_BaselineDirectionXIsSet;
}

void BTMSketchTextEntity_1761::unsetBaselineDirectionX()
{
    m_BaselineDirectionXIsSet = false;
}
double BTMSketchTextEntity_1761::getBaselineDirectionY() const
{
    return m_BaselineDirectionY;
}

void BTMSketchTextEntity_1761::setBaselineDirectionY(double value)
{
    m_BaselineDirectionY = value;
    m_BaselineDirectionYIsSet = true;
}

bool BTMSketchTextEntity_1761::baselineDirectionYIsSet() const
{
    return m_BaselineDirectionYIsSet;
}

void BTMSketchTextEntity_1761::unsetBaselineDirectionY()
{
    m_BaselineDirectionYIsSet = false;
}
}
}
}
}


