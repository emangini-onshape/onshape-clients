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


export class BTPartIdParams {
    'ids'?: Array<string>;
    'linkDocumentId'?: string;
    'configuration'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "ids",
            "baseName": "ids",
            "type": "Array<string>"
        },
        {
            "name": "linkDocumentId",
            "baseName": "linkDocumentId",
            "type": "string"
        },
        {
            "name": "configuration",
            "baseName": "configuration",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTPartIdParams.attributeTypeMap;
    }
}

