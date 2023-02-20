import serial
from paho.mqtt import client as mqtt_client
 
ser = serial.Serial(
    port='/dev/cu.wchusbserial110',
    baudrate=115200,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    bytesize=serial.EIGHTBITS,
    timeout = None
)
 
while 1:
    hexData= ser.read().hex()
    print hexData
    os.system('echo -ne "'.hexData.'" | mosquitto_pub -d -q 1 -h "3maple.iot.ibtsystems.it" -p "1888" -t "v1/devices/me/telemetry" -u "uECKj3EmRyYOuLMHOcLU"  -s')
