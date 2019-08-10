"""Export a STEP file
"""

from onshape_client.client import Client
from onshape_client.onshape_url import OnshapeElement
from onshape_client.models.bt_translate_format_params import BTTranslateFormatParams
import time
import json
import os.path

client = Client()

# We're saving these files to the home directory ("~")
client.configuration.temp_folder_path = os.path.expanduser("~")

# Turn the URL into an "OnshapeElement"
url = "https://cad.onshape.com/documents/d52538842d07c098d986361f/w/2d3de2dce7022ea4bdd19149/e/5da80a9e428fc1110d0baaf2"
cube = OnshapeElement(url, client=client)

# Create the params. Note there are far more params that can be specified.
params = BTTranslateFormatParams(element_id=cube.eid, format_name="STEP", store_in_document=False, configuration='')

# Call the client
response = client.part_studios_api.translate_format5(cube.did, cube.wvm, cube.wvmid, cube.eid, bt_translate_format_params=params)

translation_id = response.id
state = response.request_state

# Long poll every 2 seconds until the translation is marked as done - alternatively you could submit a webhook
parsed_response = None

# Seconds between polls
polling_interval = 2

time_to_translate=0
while state == 'ACTIVE':
    time.sleep(polling_interval)
    time_to_translate += polling_interval
    response = client.translation_api.get_translation(translation_id, _preload_content=False)
    parsed_response = json.loads(response.data.decode("UTF-8"))
    state = parsed_response["requestState"]
    print("Still actively translating. Time thus far = {}".format(time_to_translate))

# Make the actual download when the translation is done, otherwise report the error
if state == "DONE":
    client.documents_api.download_external_data(cube.did, parsed_response["resultExternalDataIds"][0])
    print("File saved to {}. Took {} seconds to complete the translation.".format(client.configuration.temp_folder_path, time_to_translate))
else:
    print("An error ocurred on the server! Here is the response: \n" + parsed_response)
"""
File saved to <temp_folder_path>
"""