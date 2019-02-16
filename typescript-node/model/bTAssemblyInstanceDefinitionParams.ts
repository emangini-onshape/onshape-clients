/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export class BTAssemblyInstanceDefinitionParams {
    'isWholePartStudio'?: boolean;
    'revision'?: string;
    'microversionId'?: string;
    'partId'?: string;
    'configuration'?: string;
    'versionId'?: string;
    'documentId'?: string;
    'elementId'?: string;
    'featureId'?: string;
    'partNumber'?: string;
    'isAssembly'?: boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "isWholePartStudio",
            "baseName": "isWholePartStudio",
            "type": "boolean"
        },
        {
            "name": "revision",
            "baseName": "revision",
            "type": "string"
        },
        {
            "name": "microversionId",
            "baseName": "microversionId",
            "type": "string"
        },
        {
            "name": "partId",
            "baseName": "partId",
            "type": "string"
        },
        {
            "name": "configuration",
            "baseName": "configuration",
            "type": "string"
        },
        {
            "name": "versionId",
            "baseName": "versionId",
            "type": "string"
        },
        {
            "name": "documentId",
            "baseName": "documentId",
            "type": "string"
        },
        {
            "name": "elementId",
            "baseName": "elementId",
            "type": "string"
        },
        {
            "name": "featureId",
            "baseName": "featureId",
            "type": "string"
        },
        {
            "name": "partNumber",
            "baseName": "partNumber",
            "type": "string"
        },
        {
            "name": "isAssembly",
            "baseName": "isAssembly",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return BTAssemblyInstanceDefinitionParams.attributeTypeMap;
    }
}

