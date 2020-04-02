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
 * CustomerSubscriptionCollection.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerSubscriptionCollection_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerSubscriptionCollection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include <map>
#include "RequestOptions.h"
#include <vector>
#include "Subscription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CustomerSubscriptionCollection
    : public ModelBase
{
public:
    CustomerSubscriptionCollection();
    virtual ~CustomerSubscriptionCollection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CustomerSubscriptionCollection members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Subscription>>& getData();
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::vector<std::shared_ptr<Subscription>>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isHasMore() const;
    bool hasMoreIsSet() const;
    void unsetHasMore();

    void setHasMore(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestOptions> getRequestOptions() const;
    bool requestOptionsIsSet() const;
    void unsetRequestOptions();

    void setRequestOptions(const std::shared_ptr<RequestOptions>& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<Object>>& getRequestParams();
    bool requestParamsIsSet() const;
    void unsetRequestParams();

    void setRequestParams(const std::map<utility::string_t, std::shared_ptr<Object>>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsetTotalCount();

    void setTotalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();

    void setUrl(const utility::string_t& value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
    std::vector<std::shared_ptr<Subscription>> m_Data;
    bool m_DataIsSet;
    bool m_HasMore;
    bool m_HasMoreIsSet;
    std::shared_ptr<RequestOptions> m_RequestOptions;
    bool m_RequestOptionsIsSet;
    std::map<utility::string_t, std::shared_ptr<Object>> m_RequestParams;
    bool m_RequestParamsIsSet;
    int32_t m_TotalCount;
    bool m_TotalCountIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CustomerSubscriptionCollection_H_ */
