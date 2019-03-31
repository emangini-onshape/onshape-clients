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

import { BTAppElementContentDeltaInfo } from './bTAppElementContentDeltaInfo';

export class BTAppElementContentEntryInfo {
    'subelementId'?: string;
    'baseContent'?: string;
    'deltas'?: Array<BTAppElementContentDeltaInfo>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "subelementId",
            "baseName": "subelementId",
            "type": "string"
        },
        {
            "name": "baseContent",
            "baseName": "baseContent",
            "type": "string"
        },
        {
            "name": "deltas",
            "baseName": "deltas",
            "type": "Array<BTAppElementContentDeltaInfo>"
        }    ];

    static getAttributeTypeMap() {
        return BTAppElementContentEntryInfo.attributeTypeMap;
    }
}
