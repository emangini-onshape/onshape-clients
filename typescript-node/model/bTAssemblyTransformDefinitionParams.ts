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

import { BTOccurrence } from './bTOccurrence';

export class BTAssemblyTransformDefinitionParams {
    'transform'?: Array<number>;
    'occurrences'?: Array<BTOccurrence>;
    'isRelative'?: boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "transform",
            "baseName": "transform",
            "type": "Array<number>"
        },
        {
            "name": "occurrences",
            "baseName": "occurrences",
            "type": "Array<BTOccurrence>"
        },
        {
            "name": "isRelative",
            "baseName": "isRelative",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return BTAssemblyTransformDefinitionParams.attributeTypeMap;
    }
}

