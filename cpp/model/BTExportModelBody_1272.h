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
 * BTExportModelBody_1272.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelBody_1272_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelBody_1272_H_


#include "../ModelBase.h"

#include "BTExportModelEdge_1782.h"
#include "BTExportModelFace_1363.h"
#include <cpprest/details/basic_types.h>
#include "BTExportModelVertex_858.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTExportModelBody_1272
    : public ModelBase
{
public:
    BTExportModelBody_1272();
    virtual ~BTExportModelBody_1272();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTExportModelBody_1272 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTExportModelEdge_1782>>& getEdges();
    bool edgesIsSet() const;
    void unsetEdges();

    void setEdges(const std::vector<std::shared_ptr<BTExportModelEdge_1782>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTExportModelFace_1363>>& getFaces();
    bool facesIsSet() const;
    void unsetFaces();

    void setFaces(const std::vector<std::shared_ptr<BTExportModelFace_1363>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTExportModelVertex_858>>& getVertices();
    bool verticesIsSet() const;
    void unsetVertices();

    void setVertices(const std::vector<std::shared_ptr<BTExportModelVertex_858>>& value);


protected:
    std::vector<std::shared_ptr<BTExportModelEdge_1782>> m_Edges;
    bool m_EdgesIsSet;
    std::vector<std::shared_ptr<BTExportModelFace_1363>> m_Faces;
    bool m_FacesIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    std::vector<std::shared_ptr<BTExportModelVertex_858>> m_Vertices;
    bool m_VerticesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTExportModelBody_1272_H_ */
