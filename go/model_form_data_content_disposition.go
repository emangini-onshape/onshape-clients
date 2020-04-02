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
import (
	"time"
)
// FormDataContentDisposition struct for FormDataContentDisposition
type FormDataContentDisposition struct {
	CreationDate time.Time `json:"creationDate,omitempty"`
	FileName string `json:"fileName,omitempty"`
	ModificationDate time.Time `json:"modificationDate,omitempty"`
	Name string `json:"name,omitempty"`
	Parameters map[string]string `json:"parameters,omitempty"`
	ReadDate time.Time `json:"readDate,omitempty"`
	Size int64 `json:"size,omitempty"`
	Type string `json:"type,omitempty"`
}