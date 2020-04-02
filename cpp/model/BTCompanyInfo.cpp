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



#include "BTCompanyInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCompanyInfo::BTCompanyInfo()
{
    m_AddressIsSet = false;
    m_Admin = false;
    m_AdminIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_DomainPrefix = utility::conversions::to_string_t("");
    m_DomainPrefixIsSet = false;
    m_EnterpriseBaseUrl = utility::conversions::to_string_t("");
    m_EnterpriseBaseUrlIsSet = false;
    m_Href = utility::conversions::to_string_t("");
    m_HrefIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_NoPublicDocuments = false;
    m_NoPublicDocumentsIsSet = false;
    m_OwnerId = utility::conversions::to_string_t("");
    m_OwnerIdIsSet = false;
    m_PurchaseIsSet = false;
    m_SecondaryDomainPrefixesIsSet = false;
    m_State = 0;
    m_StateIsSet = false;
    m_Type = 0;
    m_TypeIsSet = false;
    m_ViewRef = utility::conversions::to_string_t("");
    m_ViewRefIsSet = false;
}

BTCompanyInfo::~BTCompanyInfo()
{
}

void BTCompanyInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTCompanyInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    }
    if(m_AdminIsSet)
    {
        val[utility::conversions::to_string_t("admin")] = ModelBase::toJson(m_Admin);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_DomainPrefixIsSet)
    {
        val[utility::conversions::to_string_t("domainPrefix")] = ModelBase::toJson(m_DomainPrefix);
    }
    if(m_EnterpriseBaseUrlIsSet)
    {
        val[utility::conversions::to_string_t("enterpriseBaseUrl")] = ModelBase::toJson(m_EnterpriseBaseUrl);
    }
    if(m_HrefIsSet)
    {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_NoPublicDocumentsIsSet)
    {
        val[utility::conversions::to_string_t("noPublicDocuments")] = ModelBase::toJson(m_NoPublicDocuments);
    }
    if(m_OwnerIdIsSet)
    {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(m_OwnerId);
    }
    if(m_PurchaseIsSet)
    {
        val[utility::conversions::to_string_t("purchase")] = ModelBase::toJson(m_Purchase);
    }
    if(m_SecondaryDomainPrefixesIsSet)
    {
        val[utility::conversions::to_string_t("secondaryDomainPrefixes")] = ModelBase::toJson(m_SecondaryDomainPrefixes);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_ViewRefIsSet)
    {
        val[utility::conversions::to_string_t("viewRef")] = ModelBase::toJson(m_ViewRef);
    }

    return val;
}

bool BTCompanyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTAddressInfo> refVal_address;
            ok &= ModelBase::fromJson(fieldValue, refVal_address);
            setAddress(refVal_address);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin"));
        if(!fieldValue.is_null())
        {
            bool refVal_admin;
            ok &= ModelBase::fromJson(fieldValue, refVal_admin);
            setAdmin(refVal_admin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domainPrefix")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainPrefix"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_domainPrefix;
            ok &= ModelBase::fromJson(fieldValue, refVal_domainPrefix);
            setDomainPrefix(refVal_domainPrefix);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterpriseBaseUrl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterpriseBaseUrl"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enterpriseBaseUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_enterpriseBaseUrl);
            setEnterpriseBaseUrl(refVal_enterpriseBaseUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_href;
            ok &= ModelBase::fromJson(fieldValue, refVal_href);
            setHref(refVal_href);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_image;
            ok &= ModelBase::fromJson(fieldValue, refVal_image);
            setImage(refVal_image);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("noPublicDocuments")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noPublicDocuments"));
        if(!fieldValue.is_null())
        {
            bool refVal_noPublicDocuments;
            ok &= ModelBase::fromJson(fieldValue, refVal_noPublicDocuments);
            setNoPublicDocuments(refVal_noPublicDocuments);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ownerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerId);
            setOwnerId(refVal_ownerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("purchase")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("purchase"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPurchaseInfo> refVal_purchase;
            ok &= ModelBase::fromJson(fieldValue, refVal_purchase);
            setPurchase(refVal_purchase);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondaryDomainPrefixes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondaryDomainPrefixes"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_secondaryDomainPrefixes;
            ok &= ModelBase::fromJson(fieldValue, refVal_secondaryDomainPrefixes);
            setSecondaryDomainPrefixes(refVal_secondaryDomainPrefixes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_state;
            ok &= ModelBase::fromJson(fieldValue, refVal_state);
            setState(refVal_state);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("viewRef")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewRef"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_viewRef;
            ok &= ModelBase::fromJson(fieldValue, refVal_viewRef);
            setViewRef(refVal_viewRef);
        }
    }
    return ok;
}

void BTCompanyInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("address"), m_Address));
    }
    if(m_AdminIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("admin"), m_Admin));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_DomainPrefixIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("domainPrefix"), m_DomainPrefix));
    }
    if(m_EnterpriseBaseUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enterpriseBaseUrl"), m_EnterpriseBaseUrl));
    }
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_NoPublicDocumentsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("noPublicDocuments"), m_NoPublicDocuments));
    }
    if(m_OwnerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerId"), m_OwnerId));
    }
    if(m_PurchaseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("purchase"), m_Purchase));
    }
    if(m_SecondaryDomainPrefixesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("secondaryDomainPrefixes"), m_SecondaryDomainPrefixes));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_ViewRefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("viewRef"), m_ViewRef));
    }
}

bool BTCompanyInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("address")))
    {
        std::shared_ptr<BTAddressInfo> refVal_address;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("address")), refVal_address );
        setAddress(refVal_address);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("admin")))
    {
        bool refVal_admin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("admin")), refVal_admin );
        setAdmin(refVal_admin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("domainPrefix")))
    {
        utility::string_t refVal_domainPrefix;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("domainPrefix")), refVal_domainPrefix );
        setDomainPrefix(refVal_domainPrefix);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enterpriseBaseUrl")))
    {
        utility::string_t refVal_enterpriseBaseUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enterpriseBaseUrl")), refVal_enterpriseBaseUrl );
        setEnterpriseBaseUrl(refVal_enterpriseBaseUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("href")))
    {
        utility::string_t refVal_href;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("href")), refVal_href );
        setHref(refVal_href);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("noPublicDocuments")))
    {
        bool refVal_noPublicDocuments;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("noPublicDocuments")), refVal_noPublicDocuments );
        setNoPublicDocuments(refVal_noPublicDocuments);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ownerId")))
    {
        utility::string_t refVal_ownerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerId")), refVal_ownerId );
        setOwnerId(refVal_ownerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("purchase")))
    {
        std::shared_ptr<BTPurchaseInfo> refVal_purchase;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("purchase")), refVal_purchase );
        setPurchase(refVal_purchase);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("secondaryDomainPrefixes")))
    {
        std::vector<utility::string_t> refVal_secondaryDomainPrefixes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("secondaryDomainPrefixes")), refVal_secondaryDomainPrefixes );
        setSecondaryDomainPrefixes(refVal_secondaryDomainPrefixes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        int32_t refVal_state;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("state")), refVal_state );
        setState(refVal_state);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        int32_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("viewRef")))
    {
        utility::string_t refVal_viewRef;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("viewRef")), refVal_viewRef );
        setViewRef(refVal_viewRef);
    }
    return ok;
}

std::shared_ptr<BTAddressInfo> BTCompanyInfo::getAddress() const
{
    return m_Address;
}

void BTCompanyInfo::setAddress(const std::shared_ptr<BTAddressInfo>& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool BTCompanyInfo::addressIsSet() const
{
    return m_AddressIsSet;
}

void BTCompanyInfo::unsetAddress()
{
    m_AddressIsSet = false;
}
bool BTCompanyInfo::isAdmin() const
{
    return m_Admin;
}

void BTCompanyInfo::setAdmin(bool value)
{
    m_Admin = value;
    m_AdminIsSet = true;
}

bool BTCompanyInfo::adminIsSet() const
{
    return m_AdminIsSet;
}

void BTCompanyInfo::unsetAdmin()
{
    m_AdminIsSet = false;
}
utility::string_t BTCompanyInfo::getDescription() const
{
    return m_Description;
}

void BTCompanyInfo::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool BTCompanyInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void BTCompanyInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t BTCompanyInfo::getDomainPrefix() const
{
    return m_DomainPrefix;
}

void BTCompanyInfo::setDomainPrefix(const utility::string_t& value)
{
    m_DomainPrefix = value;
    m_DomainPrefixIsSet = true;
}

bool BTCompanyInfo::domainPrefixIsSet() const
{
    return m_DomainPrefixIsSet;
}

void BTCompanyInfo::unsetDomainPrefix()
{
    m_DomainPrefixIsSet = false;
}
utility::string_t BTCompanyInfo::getEnterpriseBaseUrl() const
{
    return m_EnterpriseBaseUrl;
}

void BTCompanyInfo::setEnterpriseBaseUrl(const utility::string_t& value)
{
    m_EnterpriseBaseUrl = value;
    m_EnterpriseBaseUrlIsSet = true;
}

bool BTCompanyInfo::enterpriseBaseUrlIsSet() const
{
    return m_EnterpriseBaseUrlIsSet;
}

void BTCompanyInfo::unsetEnterpriseBaseUrl()
{
    m_EnterpriseBaseUrlIsSet = false;
}
utility::string_t BTCompanyInfo::getHref() const
{
    return m_Href;
}

void BTCompanyInfo::setHref(const utility::string_t& value)
{
    m_Href = value;
    m_HrefIsSet = true;
}

bool BTCompanyInfo::hrefIsSet() const
{
    return m_HrefIsSet;
}

void BTCompanyInfo::unsetHref()
{
    m_HrefIsSet = false;
}
utility::string_t BTCompanyInfo::getId() const
{
    return m_Id;
}

void BTCompanyInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTCompanyInfo::idIsSet() const
{
    return m_IdIsSet;
}

void BTCompanyInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t BTCompanyInfo::getImage() const
{
    return m_Image;
}

void BTCompanyInfo::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool BTCompanyInfo::imageIsSet() const
{
    return m_ImageIsSet;
}

void BTCompanyInfo::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t BTCompanyInfo::getName() const
{
    return m_Name;
}

void BTCompanyInfo::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool BTCompanyInfo::nameIsSet() const
{
    return m_NameIsSet;
}

void BTCompanyInfo::unsetName()
{
    m_NameIsSet = false;
}
bool BTCompanyInfo::isNoPublicDocuments() const
{
    return m_NoPublicDocuments;
}

void BTCompanyInfo::setNoPublicDocuments(bool value)
{
    m_NoPublicDocuments = value;
    m_NoPublicDocumentsIsSet = true;
}

bool BTCompanyInfo::noPublicDocumentsIsSet() const
{
    return m_NoPublicDocumentsIsSet;
}

void BTCompanyInfo::unsetNoPublicDocuments()
{
    m_NoPublicDocumentsIsSet = false;
}
utility::string_t BTCompanyInfo::getOwnerId() const
{
    return m_OwnerId;
}

void BTCompanyInfo::setOwnerId(const utility::string_t& value)
{
    m_OwnerId = value;
    m_OwnerIdIsSet = true;
}

bool BTCompanyInfo::ownerIdIsSet() const
{
    return m_OwnerIdIsSet;
}

void BTCompanyInfo::unsetOwnerId()
{
    m_OwnerIdIsSet = false;
}
std::shared_ptr<BTPurchaseInfo> BTCompanyInfo::getPurchase() const
{
    return m_Purchase;
}

void BTCompanyInfo::setPurchase(const std::shared_ptr<BTPurchaseInfo>& value)
{
    m_Purchase = value;
    m_PurchaseIsSet = true;
}

bool BTCompanyInfo::purchaseIsSet() const
{
    return m_PurchaseIsSet;
}

void BTCompanyInfo::unsetPurchase()
{
    m_PurchaseIsSet = false;
}
std::vector<utility::string_t>& BTCompanyInfo::getSecondaryDomainPrefixes()
{
    return m_SecondaryDomainPrefixes;
}

void BTCompanyInfo::setSecondaryDomainPrefixes(const std::vector<utility::string_t>& value)
{
    m_SecondaryDomainPrefixes = value;
    m_SecondaryDomainPrefixesIsSet = true;
}

bool BTCompanyInfo::secondaryDomainPrefixesIsSet() const
{
    return m_SecondaryDomainPrefixesIsSet;
}

void BTCompanyInfo::unsetSecondaryDomainPrefixes()
{
    m_SecondaryDomainPrefixesIsSet = false;
}
int32_t BTCompanyInfo::getState() const
{
    return m_State;
}

void BTCompanyInfo::setState(int32_t value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool BTCompanyInfo::stateIsSet() const
{
    return m_StateIsSet;
}

void BTCompanyInfo::unsetState()
{
    m_StateIsSet = false;
}
int32_t BTCompanyInfo::getType() const
{
    return m_Type;
}

void BTCompanyInfo::setType(int32_t value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool BTCompanyInfo::typeIsSet() const
{
    return m_TypeIsSet;
}

void BTCompanyInfo::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t BTCompanyInfo::getViewRef() const
{
    return m_ViewRef;
}

void BTCompanyInfo::setViewRef(const utility::string_t& value)
{
    m_ViewRef = value;
    m_ViewRefIsSet = true;
}

bool BTCompanyInfo::viewRefIsSet() const
{
    return m_ViewRefIsSet;
}

void BTCompanyInfo::unsetViewRef()
{
    m_ViewRefIsSet = false;
}
}
}
}
}


