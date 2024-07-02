import requests

# Define the endpoint
icr_endpoint = "http://devuser.e42.ai/edith/service/nlp2sql"

# Define the headers
headers = {
    "Authorization": "Bearer 9L9nF124ZBbpr6xrRXZU6qFtJyag87",
    "Content-Type": "application/json",
}

# Define the data
data = {
    "query": "give all details about Iphone 14?",
    "tables_schema": "tables",
    "logic_data": {"productname": "iphone", "specificationvaluelabel": "64gb"},
}

# Send the POST request
response = requests.post(icr_endpoint, headers=headers, json=data)

# Check the status code
if response.status_code == 200:
    # Extract the output from the response JSON
    output = response.json().get("output")
    print(output)
else:
    print(f"Failed to get a response. Status code: {response.status_code}")
    print(response.text)
