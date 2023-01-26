#!/bin/bash
THINGSBOARD_HOST_NAME=3maple.iot.ibtsystems.it
ACCESS_TOKEN=v4zBL1klFJUnpYVCBZiL
DEVICE=v1/devices/me/telemetry
ID=0cb3dcd0-9b26-11ed-b333-bb089c8bc7ac
SECRET=segreto


for FILE in *.txt; 
do 
	echo $FILE
	mosquitto_pub -d -q 1 -h "$THINGSBOARD_HOST_NAME" -p "1888" -t "$DEVICE" -u "$ACCESS_TOKEN" -i "$ID" -f "$FILE"; 
	read -n 1
done