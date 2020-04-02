/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// BtmParameterBoolean144 struct for BtmParameterBoolean144
type BtmParameterBoolean144 struct {
	BtType string `json:"btType,omitempty"`
	ImportMicroversion string `json:"importMicroversion,omitempty"`
	NodeId string `json:"nodeId,omitempty"`
	ParameterId string `json:"parameterId,omitempty"`
	Value bool `json:"value,omitempty"`
}