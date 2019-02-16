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


export class BodyPartMediaType {
    'type'?: string;
    'subtype'?: string;
    'parameters'?: { [key: string]: string; };
    'wildcardType'?: boolean;
    'wildcardSubtype'?: boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "subtype",
            "baseName": "subtype",
            "type": "string"
        },
        {
            "name": "parameters",
            "baseName": "parameters",
            "type": "{ [key: string]: string; }"
        },
        {
            "name": "wildcardType",
            "baseName": "wildcardType",
            "type": "boolean"
        },
        {
            "name": "wildcardSubtype",
            "baseName": "wildcardSubtype",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return BodyPartMediaType.attributeTypeMap;
    }
}

