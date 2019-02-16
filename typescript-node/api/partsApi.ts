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

import localVarRequest = require('request');
import http = require('http');
import Promise = require('bluebird');

/* tslint:disable:no-unused-locals */
import { BTPartMetadataInfo } from '../model/bTPartMetadataInfo';

import { ObjectSerializer, Authentication, HttpBasicAuth, ApiKeyAuth, OAuth, VoidAuth } from '../model/models';

let defaultBasePath = 'http://localhost';

// ===============================================
// This file is autogenerated - Please do not edit
// ===============================================

export enum PartsApiApiKeys {
}

export class PartsApi {
    protected _basePath = defaultBasePath;
    protected defaultHeaders : any = {};
    protected _useQuerystring : boolean = false;

    protected authentications = {
        'default': <Authentication>new VoidAuth(),
        'OAuth2': new OAuth(),
    }

    constructor(basePath?: string);
    constructor(basePathOrUsername: string, password?: string, basePath?: string) {
        if (password) {
            if (basePath) {
                this.basePath = basePath;
            }
        } else {
            if (basePathOrUsername) {
                this.basePath = basePathOrUsername
            }
        }
    }

    set useQuerystring(value: boolean) {
        this._useQuerystring = value;
    }

    set basePath(basePath: string) {
        this._basePath = basePath;
    }

    get basePath() {
        return this._basePath;
    }

    public setDefaultAuthentication(auth: Authentication) {
        this.authentications.default = auth;
    }

    public setApiKey(key: PartsApiApiKeys, value: string) {
        (this.authentications as any)[PartsApiApiKeys[key]].apiKey = value;
    }

    set accessToken(token: string) {
        this.authentications.OAuth2.accessToken = token;
    }

    /**
     * 
     * @summary Get list of parts
     * @param did Document ID.
     * @param wvm One of w or v or m corresponding to whether a workspace or version or microversion was entered.
     * @param wvmid Workspace (w), Version (v) or Microversion (m) ID.
     * @param elementId Element ID
     * @param withThumbnails Whether or not to include thumbnails (not supported for microversion)
     * @param includePropertyDefaults If true, include metadata schema property defaults in response
     * @param linkDocumentId Id of document that links to the document being accessed. This may provide additional access rights to the document. Allowed only with version (v) path parameter.
     * @param configuration Configuration string.
     */
    public getPartsWMV (did: string, wvm: string, wvmid: string, elementId?: string, withThumbnails?: boolean, includePropertyDefaults?: boolean, linkDocumentId?: string, configuration?: string) : Promise<{ response: http.ClientResponse; body: Array<BTPartMetadataInfo>;  }> {
        const localVarPath = this.basePath + '/api/parts/d/{did}/{wvm}/{wvmid}'
            .replace('{' + 'did' + '}', encodeURIComponent(String(did)))
            .replace('{' + 'wvm' + '}', encodeURIComponent(String(wvm)))
            .replace('{' + 'wvmid' + '}', encodeURIComponent(String(wvmid)));
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'did' is not null or undefined
        if (did === null || did === undefined) {
            throw new Error('Required parameter did was null or undefined when calling getPartsWMV.');
        }

        // verify required parameter 'wvm' is not null or undefined
        if (wvm === null || wvm === undefined) {
            throw new Error('Required parameter wvm was null or undefined when calling getPartsWMV.');
        }

        // verify required parameter 'wvmid' is not null or undefined
        if (wvmid === null || wvmid === undefined) {
            throw new Error('Required parameter wvmid was null or undefined when calling getPartsWMV.');
        }

        if (elementId !== undefined) {
            localVarQueryParameters['elementId'] = ObjectSerializer.serialize(elementId, "string");
        }

        if (withThumbnails !== undefined) {
            localVarQueryParameters['withThumbnails'] = ObjectSerializer.serialize(withThumbnails, "boolean");
        }

        if (includePropertyDefaults !== undefined) {
            localVarQueryParameters['includePropertyDefaults'] = ObjectSerializer.serialize(includePropertyDefaults, "boolean");
        }

        if (linkDocumentId !== undefined) {
            localVarQueryParameters['linkDocumentId'] = ObjectSerializer.serialize(linkDocumentId, "string");
        }

        if (configuration !== undefined) {
            localVarQueryParameters['configuration'] = ObjectSerializer.serialize(configuration, "string");
        }


        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        this.authentications.OAuth2.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: Array<BTPartMetadataInfo>;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "Array<BTPartMetadataInfo>");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @summary Part metadata batch update.
     * @param did Document ID.
     * @param wvm One of w or v or m corresponding to whether a workspace or version or microversion was entered.
     * @param wvmid Workspace (w), Version (v) or Microversion (m) ID.
     * @param editDescription Description of the update (as appear in document history)
     * @param body 
     */
    public updatePartsWMV (did: string, wvm: string, wvmid: string, editDescription?: string, body?: string) : Promise<{ response: http.ClientResponse; body?: any;  }> {
        const localVarPath = this.basePath + '/api/parts/d/{did}/{wvm}/{wvmid}'
            .replace('{' + 'did' + '}', encodeURIComponent(String(did)))
            .replace('{' + 'wvm' + '}', encodeURIComponent(String(wvm)))
            .replace('{' + 'wvmid' + '}', encodeURIComponent(String(wvmid)));
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'did' is not null or undefined
        if (did === null || did === undefined) {
            throw new Error('Required parameter did was null or undefined when calling updatePartsWMV.');
        }

        // verify required parameter 'wvm' is not null or undefined
        if (wvm === null || wvm === undefined) {
            throw new Error('Required parameter wvm was null or undefined when calling updatePartsWMV.');
        }

        // verify required parameter 'wvmid' is not null or undefined
        if (wvmid === null || wvmid === undefined) {
            throw new Error('Required parameter wvmid was null or undefined when calling updatePartsWMV.');
        }

        if (editDescription !== undefined) {
            localVarQueryParameters['editDescription'] = ObjectSerializer.serialize(editDescription, "string");
        }


        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(body, "string")
        };

        this.authentications.OAuth2.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body?: any;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
}
