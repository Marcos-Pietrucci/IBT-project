#!/bin/bash
THINGSBOARD_HOST_NAME=3maple.iot.ibtsystems.it
THINGSBOARD_PORT=1888
ACCESS_TOKEN2=v4zBL1klFJUnpYVCBZiL
ACCESS_TOKEN1=P5D5CLyyAElvNuVYNz7h
DEVICE=v1/devices/me/telemetry
ID2=0cb3dcd0-9b26-11ed-b333-bb089c8bc7ac
ID1=ee0f2aa0-9b25-11ed-b333-bb089c8bc7ac

VAL=$(( $RANDOM % 100 + 1 ))
echo Device_2 \(Pluto\)\: value\: $VAL
mosquitto_pub -d -q 1 -h "$THINGSBOARD_HOST_NAME" -p "$THINGSBOARD_PORT" -t "$DEVICE" -u "$ACCESS_TOKEN2" -m {value:$VAL}; 
echo Press any key to send to next device
read -n 1

VAL=$(( $RANDOM % 100 + 1 ))
echo Device_1 \(Pippo\) value\: $VAL
mosquitto_pub -d -q 1 -h "$THINGSBOARD_HOST_NAME" -p "$THINGSBOARD_PORT" -t "$DEVICE" -u "$ACCESS_TOKEN1" -m {value:$VAL}; 
echo Done