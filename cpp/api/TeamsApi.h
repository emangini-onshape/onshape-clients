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
 * TeamsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_TeamsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_TeamsApi_H_


#include "../ApiClient.h"

#include "BTGlobalTreeNodeListResponseBTTeamInfo.h"
#include "BTTeamInfo.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  TeamsApi 
{
public:

    explicit TeamsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~TeamsApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="prefix"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="uid"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="companyId"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="includeCompanyOwnedTeams"> (optional, default to false)</param>
    pplx::task<std::shared_ptr<BTGlobalTreeNodeListResponseBTTeamInfo>> find(
        boost::optional<utility::string_t> prefix,
        boost::optional<utility::string_t> uid,
        boost::optional<utility::string_t> companyId,
        boost::optional<bool> includeCompanyOwnedTeams
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="tid"></param>
    pplx::task<std::shared_ptr<BTTeamInfo>> getTeam(
        utility::string_t tid
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_TeamsApi_H_ */

