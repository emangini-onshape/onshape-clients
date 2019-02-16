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

import { ConfigurationEntry } from './configurationEntry';

export class BTConfigurationParams {
    'parameters'?: Array<ConfigurationEntry>;
    'standardContentParametersId'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "parameters",
            "baseName": "parameters",
            "type": "Array<ConfigurationEntry>"
        },
        {
            "name": "standardContentParametersId",
            "baseName": "standardContentParametersId",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTConfigurationParams.attributeTypeMap;
    }
}

