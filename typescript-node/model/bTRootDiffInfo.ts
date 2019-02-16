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

import { BTDiffInfo } from './bTDiffInfo';

export class BTRootDiffInfo {
    'sourceWorkspaceId'?: string;
    'sourceConfiguration'?: string;
    'targetConfiguration'?: string;
    'sourceMicroversionId'?: string;
    'sourceVersionId'?: string;
    'targetMicroversionId'?: string;
    'targetWorkspaceId'?: string;
    'targetVersionId'?: string;
    'type'?: BTRootDiffInfo.TypeEnum;
    'targetId'?: string;
    'sourceValue'?: string;
    'targetValue'?: string;
    'sourceId'?: string;
    'collectionChanges'?: { [key: string]: Array<BTDiffInfo>; };
    'changes'?: { [key: string]: BTDiffInfo; };

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "sourceWorkspaceId",
            "baseName": "sourceWorkspaceId",
            "type": "string"
        },
        {
            "name": "sourceConfiguration",
            "baseName": "sourceConfiguration",
            "type": "string"
        },
        {
            "name": "targetConfiguration",
            "baseName": "targetConfiguration",
            "type": "string"
        },
        {
            "name": "sourceMicroversionId",
            "baseName": "sourceMicroversionId",
            "type": "string"
        },
        {
            "name": "sourceVersionId",
            "baseName": "sourceVersionId",
            "type": "string"
        },
        {
            "name": "targetMicroversionId",
            "baseName": "targetMicroversionId",
            "type": "string"
        },
        {
            "name": "targetWorkspaceId",
            "baseName": "targetWorkspaceId",
            "type": "string"
        },
        {
            "name": "targetVersionId",
            "baseName": "targetVersionId",
            "type": "string"
        },
        {
            "name": "type",
            "baseName": "type",
            "type": "BTRootDiffInfo.TypeEnum"
        },
        {
            "name": "targetId",
            "baseName": "targetId",
            "type": "string"
        },
        {
            "name": "sourceValue",
            "baseName": "sourceValue",
            "type": "string"
        },
        {
            "name": "targetValue",
            "baseName": "targetValue",
            "type": "string"
        },
        {
            "name": "sourceId",
            "baseName": "sourceId",
            "type": "string"
        },
        {
            "name": "collectionChanges",
            "baseName": "collectionChanges",
            "type": "{ [key: string]: Array<BTDiffInfo>; }"
        },
        {
            "name": "changes",
            "baseName": "changes",
            "type": "{ [key: string]: BTDiffInfo; }"
        }    ];

    static getAttributeTypeMap() {
        return BTRootDiffInfo.attributeTypeMap;
    }
}

export namespace BTRootDiffInfo {
    export enum TypeEnum {
        NONE = <any> 'NONE',
        MOVED = <any> 'MOVED',
        MODIFIED = <any> 'MODIFIED',
        MOVEDANDMODIFIED = <any> 'MOVED_AND_MODIFIED',
        ADDED = <any> 'ADDED',
        DELETED = <any> 'DELETED',
        UNKNOWN = <any> 'UNKNOWN'
    }
}
