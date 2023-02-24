#!/bin/bash
THINGSBOARD_HOST_NAME=3maple.iot.ibtsystems.it
ACCESS_TOKEN=uECKj3EmRyYOuLMHOcLU
DEVICE=v1/devices/me/telemetry
ID=b97bf730-9d7f-11ed-b333-bb089c8bc7ac
SECRET=segreto

rm bin/messagerndN1.txt 
bin/sendMessages_test r
mosquitto_pub -d -q 1 -h "$THINGSBOARD_HOST_NAME" -p "1888" -t "$DEVICE" -u "$ACCESS_TOKEN" -f "./bin/messagerndN1.txt"; 