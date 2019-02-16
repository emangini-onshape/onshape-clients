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


export class BTPurchaseParams {
    'password'?: string;
    'lightSeats'?: number;
    'userId'?: string;
    'email'?: string;
    'planId'?: string;
    'seats'?: number;
    'domainPrefix'?: string;
    'paymentType'?: number;
    'trialPeriodDays'?: number;
    'allowDeprecatedPlan'?: boolean;
    'resellerName'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "password",
            "baseName": "password",
            "type": "string"
        },
        {
            "name": "lightSeats",
            "baseName": "lightSeats",
            "type": "number"
        },
        {
            "name": "userId",
            "baseName": "userId",
            "type": "string"
        },
        {
            "name": "email",
            "baseName": "email",
            "type": "string"
        },
        {
            "name": "planId",
            "baseName": "planId",
            "type": "string"
        },
        {
            "name": "seats",
            "baseName": "seats",
            "type": "number"
        },
        {
            "name": "domainPrefix",
            "baseName": "domainPrefix",
            "type": "string"
        },
        {
            "name": "paymentType",
            "baseName": "paymentType",
            "type": "number"
        },
        {
            "name": "trialPeriodDays",
            "baseName": "trialPeriodDays",
            "type": "number"
        },
        {
            "name": "allowDeprecatedPlan",
            "baseName": "allowDeprecatedPlan",
            "type": "boolean"
        },
        {
            "name": "resellerName",
            "baseName": "resellerName",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BTPurchaseParams.attributeTypeMap;
    }
}

