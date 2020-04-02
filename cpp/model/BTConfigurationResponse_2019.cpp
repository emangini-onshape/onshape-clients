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



#include "BTConfigurationResponse_2019.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfigurationResponse_2019::BTConfigurationResponse_2019()
{
    m_ConfigurationParametersIsSet = false;
    m_CurrentConfigurationIsSet = false;
    m_LibraryVersion = 0;
    m_LibraryVersionIsSet = false;
    m_MicroversionSkew = false;
    m_MicroversionSkewIsSet = false;
    m_RejectMicroversionSkew = false;
    m_RejectMicroversionSkewIsSet = false;
    m_SerializationVersion = utility::conversions::to_string_t("");
    m_SerializationVersionIsSet = false;
    m_SourceMicroversion = utility::conversions::to_string_t("");
    m_SourceMicroversionIsSet = false;
}

BTConfigurationResponse_2019::~BTConfigurationResponse_2019()
{
}

void BTConfigurationResponse_2019::validate()
{
    // TODO: implement validation
}

web::json::value BTConfigurationResponse_2019::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConfigurationParametersIsSet)
    {
        val[utility::conversions::to_string_t("configurationParameters")] = ModelBase::toJson(m_ConfigurationParameters);
    }
    if(m_CurrentConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("currentConfiguration")] = ModelBase::toJson(m_CurrentConfiguration);
    }
    if(m_LibraryVersionIsSet)
    {
        val[utility::conversions::to_string_t("libraryVersion")] = ModelBase::toJson(m_LibraryVersion);
    }
    if(m_MicroversionSkewIsSet)
    {
        val[utility::conversions::to_string_t("microversionSkew")] = ModelBase::toJson(m_MicroversionSkew);
    }
    if(m_RejectMicroversionSkewIsSet)
    {
        val[utility::conversions::to_string_t("rejectMicroversionSkew")] = ModelBase::toJson(m_RejectMicroversionSkew);
    }
    if(m_SerializationVersionIsSet)
    {
        val[utility::conversions::to_string_t("serializationVersion")] = ModelBase::toJson(m_SerializationVersion);
    }
    if(m_SourceMicroversionIsSet)
    {
        val[utility::conversions::to_string_t("sourceMicroversion")] = ModelBase::toJson(m_SourceMicroversion);
    }

    return val;
}

bool BTConfigurationResponse_2019::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurationParameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationParameters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMConfigurationParameter_819>> refVal_configurationParameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_configurationParameters);
            setConfigurationParameters(refVal_configurationParameters);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentConfiguration"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMParameter_1>> refVal_currentConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_currentConfiguration);
            setCurrentConfiguration(refVal_currentConfiguration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("libraryVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("libraryVersion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_libraryVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_libraryVersion);
            setLibraryVersion(refVal_libraryVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microversionSkew")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microversionSkew"));
        if(!fieldValue.is_null())
        {
            bool refVal_microversionSkew;
            ok &= ModelBase::fromJson(fieldValue, refVal_microversionSkew);
            setMicroversionSkew(refVal_microversionSkew);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rejectMicroversionSkew")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rejectMicroversionSkew"));
        if(!fieldValue.is_null())
        {
            bool refVal_rejectMicroversionSkew;
            ok &= ModelBase::fromJson(fieldValue, refVal_rejectMicroversionSkew);
            setRejectMicroversionSkew(refVal_rejectMicroversionSkew);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serializationVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serializationVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_serializationVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_serializationVersion);
            setSerializationVersion(refVal_serializationVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sourceMicroversion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sourceMicroversion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sourceMicroversion;
            ok &= ModelBase::fromJson(fieldValue, refVal_sourceMicroversion);
            setSourceMicroversion(refVal_sourceMicroversion);
        }
    }
    return ok;
}

void BTConfigurationResponse_2019::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ConfigurationParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationParameters"), m_ConfigurationParameters));
    }
    if(m_CurrentConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currentConfiguration"), m_CurrentConfiguration));
    }
    if(m_LibraryVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("libraryVersion"), m_LibraryVersion));
    }
    if(m_MicroversionSkewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversionSkew"), m_MicroversionSkew));
    }
    if(m_RejectMicroversionSkewIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rejectMicroversionSkew"), m_RejectMicroversionSkew));
    }
    if(m_SerializationVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("serializationVersion"), m_SerializationVersion));
    }
    if(m_SourceMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sourceMicroversion"), m_SourceMicroversion));
    }
}

bool BTConfigurationResponse_2019::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("configurationParameters")))
    {
        std::vector<std::shared_ptr<BTMConfigurationParameter_819>> refVal_configurationParameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationParameters")), refVal_configurationParameters );
        setConfigurationParameters(refVal_configurationParameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currentConfiguration")))
    {
        std::vector<std::shared_ptr<BTMParameter_1>> refVal_currentConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currentConfiguration")), refVal_currentConfiguration );
        setCurrentConfiguration(refVal_currentConfiguration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("libraryVersion")))
    {
        int32_t refVal_libraryVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("libraryVersion")), refVal_libraryVersion );
        setLibraryVersion(refVal_libraryVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("microversionSkew")))
    {
        bool refVal_microversionSkew;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversionSkew")), refVal_microversionSkew );
        setMicroversionSkew(refVal_microversionSkew);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rejectMicroversionSkew")))
    {
        bool refVal_rejectMicroversionSkew;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rejectMicroversionSkew")), refVal_rejectMicroversionSkew );
        setRejectMicroversionSkew(refVal_rejectMicroversionSkew);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serializationVersion")))
    {
        utility::string_t refVal_serializationVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("serializationVersion")), refVal_serializationVersion );
        setSerializationVersion(refVal_serializationVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sourceMicroversion")))
    {
        utility::string_t refVal_sourceMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sourceMicroversion")), refVal_sourceMicroversion );
        setSourceMicroversion(refVal_sourceMicroversion);
    }
    return ok;
}

std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& BTConfigurationResponse_2019::getConfigurationParameters()
{
    return m_ConfigurationParameters;
}

void BTConfigurationResponse_2019::setConfigurationParameters(const std::vector<std::shared_ptr<BTMConfigurationParameter_819>>& value)
{
    m_ConfigurationParameters = value;
    m_ConfigurationParametersIsSet = true;
}

bool BTConfigurationResponse_2019::configurationParametersIsSet() const
{
    return m_ConfigurationParametersIsSet;
}

void BTConfigurationResponse_2019::unsetConfigurationParameters()
{
    m_ConfigurationParametersIsSet = false;
}
std::vector<std::shared_ptr<BTMParameter_1>>& BTConfigurationResponse_2019::getCurrentConfiguration()
{
    return m_CurrentConfiguration;
}

void BTConfigurationResponse_2019::setCurrentConfiguration(const std::vector<std::shared_ptr<BTMParameter_1>>& value)
{
    m_CurrentConfiguration = value;
    m_CurrentConfigurationIsSet = true;
}

bool BTConfigurationResponse_2019::currentConfigurationIsSet() const
{
    return m_CurrentConfigurationIsSet;
}

void BTConfigurationResponse_2019::unsetCurrentConfiguration()
{
    m_CurrentConfigurationIsSet = false;
}
int32_t BTConfigurationResponse_2019::getLibraryVersion() const
{
    return m_LibraryVersion;
}

void BTConfigurationResponse_2019::setLibraryVersion(int32_t value)
{
    m_LibraryVersion = value;
    m_LibraryVersionIsSet = true;
}

bool BTConfigurationResponse_2019::libraryVersionIsSet() const
{
    return m_LibraryVersionIsSet;
}

void BTConfigurationResponse_2019::unsetLibraryVersion()
{
    m_LibraryVersionIsSet = false;
}
bool BTConfigurationResponse_2019::isMicroversionSkew() const
{
    return m_MicroversionSkew;
}

void BTConfigurationResponse_2019::setMicroversionSkew(bool value)
{
    m_MicroversionSkew = value;
    m_MicroversionSkewIsSet = true;
}

bool BTConfigurationResponse_2019::microversionSkewIsSet() const
{
    return m_MicroversionSkewIsSet;
}

void BTConfigurationResponse_2019::unsetMicroversionSkew()
{
    m_MicroversionSkewIsSet = false;
}
bool BTConfigurationResponse_2019::isRejectMicroversionSkew() const
{
    return m_RejectMicroversionSkew;
}

void BTConfigurationResponse_2019::setRejectMicroversionSkew(bool value)
{
    m_RejectMicroversionSkew = value;
    m_RejectMicroversionSkewIsSet = true;
}

bool BTConfigurationResponse_2019::rejectMicroversionSkewIsSet() const
{
    return m_RejectMicroversionSkewIsSet;
}

void BTConfigurationResponse_2019::unsetRejectMicroversionSkew()
{
    m_RejectMicroversionSkewIsSet = false;
}
utility::string_t BTConfigurationResponse_2019::getSerializationVersion() const
{
    return m_SerializationVersion;
}

void BTConfigurationResponse_2019::setSerializationVersion(const utility::string_t& value)
{
    m_SerializationVersion = value;
    m_SerializationVersionIsSet = true;
}

bool BTConfigurationResponse_2019::serializationVersionIsSet() const
{
    return m_SerializationVersionIsSet;
}

void BTConfigurationResponse_2019::unsetSerializationVersion()
{
    m_SerializationVersionIsSet = false;
}
utility::string_t BTConfigurationResponse_2019::getSourceMicroversion() const
{
    return m_SourceMicroversion;
}

void BTConfigurationResponse_2019::setSourceMicroversion(const utility::string_t& value)
{
    m_SourceMicroversion = value;
    m_SourceMicroversionIsSet = true;
}

bool BTConfigurationResponse_2019::sourceMicroversionIsSet() const
{
    return m_SourceMicroversionIsSet;
}

void BTConfigurationResponse_2019::unsetSourceMicroversion()
{
    m_SourceMicroversionIsSet = false;
}
}
}
}
}


