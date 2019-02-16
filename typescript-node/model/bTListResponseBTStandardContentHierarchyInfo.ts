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

import { BTStandardContentHierarchyInfo } from './bTStandardContentHierarchyInfo';

export class BTListResponseBTStandardContentHierarchyInfo {
    'next'?: string;
    'items'?: Array<BTStandardContentHierarchyInfo>;
    'href'?: string;
    'previous'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "next",
            "baseName": "next",
            "type": "string"
        },
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<BTStandardContentHierarchyInfo>"
        },
        {
            "name": "href",
            "baseName": "href",
            "type": "string"
        },
        {
            "name": "previous",
            "baseName": "previous",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTListResponseBTStandardContentHierarchyInfo.attributeTypeMap;
    }
}

