#!/bin/bash
fileToCopy=apiDataAll.jsonAuto.yaml
#  - "DOWNLOAD THE RELEVANT API DEFINITION"
#cp /Users/ethankeller/onshape/api-generator/api_data/$fileToCopy /Users/ethankeller/onshape/python-client
#  Turn the operationIds into more manageable client names
perl -pi -w -e 's/(operationId: \w*)\.\w*/$1/;' $fileToCopy
#  Generate the API client
swagger-codegen generate -i $fileToCopy -l python -o . -c swagger_config.json
# Replace the import statements that are screwed up
cd onshape_client/models
perl -pi -w -e 's/(from [a-z_.0-9]*)1\b/$1_1/;' [^__init__.py]*
