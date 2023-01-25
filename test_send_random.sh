#!/bin/bash
THINGSBOARD_HOST_NAME=mqtt.thingsboard.cloud
ACCESS_TOKEN=fxcvtibeuwxwuibc
DEVICE=v1/devices/mbp/telemetry
ID=44d05870-9bc9-11ed-a667-e9eba22b9df6
SECRET=segreto

rm bin/messagerndN1.txt 
bin/sendMessages_test r
mosquitto_pub -d -q 1 -h "$THINGSBOARD_HOST_NAME" -p "1883" -t "$DEVICE" -u "$ACCESS_TOKEN" -i "$ID" -f "./bin/messagerndN1.txt"; 