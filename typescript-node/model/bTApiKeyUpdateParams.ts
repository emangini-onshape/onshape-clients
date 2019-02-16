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


export class BTApiKeyUpdateParams {
    'state'?: number;
    'accessKey'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "state",
            "baseName": "state",
            "type": "number"
        },
        {
            "name": "accessKey",
            "baseName": "accessKey",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTApiKeyUpdateParams.attributeTypeMap;
    }
}

