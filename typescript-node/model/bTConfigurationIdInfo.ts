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


export class BTConfigurationIdInfo {
    'btdbConfigurationId'?: string;
    'thumbnailConfigurationId'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "btdbConfigurationId",
            "baseName": "btdbConfigurationId",
            "type": "string"
        },
        {
            "name": "thumbnailConfigurationId",
            "baseName": "thumbnailConfigurationId",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTConfigurationIdInfo.attributeTypeMap;
    }
}

