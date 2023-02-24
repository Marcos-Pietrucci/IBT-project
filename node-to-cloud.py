import serial
import binascii
import os

ser = serial.Serial(
    port='/dev/cu.wchusbserial10',
    baudrate=115200,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    bytesize=serial.EIGHTBITS,
    timeout = None
)
 
while 1:
    hexData = ser.readline().replace(b'\r\n', b'') 
    #print (binascii.unhexlify(hexData))
    with open("tmp_file.bin", "wb") as binary_file:
        binary_file.write(binascii.unhexlify(hexData))
    os.system('mosquitto_pub -d -q 1 -h "3maple.iot.ibtsystems.it" -p "1888" -t "v1/devices/me/telemetry" -u "uECKj3EmRyYOuLMHOcLU"  -f tmp_file.bin')