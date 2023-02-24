#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gala.pb-c.c"


void wToFile(void *buf, unsigned len){
  int num;
  FILE *fptr;

  fptr = fopen("message.txt","w");

  if(fptr == NULL)
  {
    printf("Error!");   
    exit(1);             
  }

  fwrite(buf,len,1,fptr);
  fclose(fptr);
}

int main (int argc, const char * argv[]) 
{
  PayloadN1 msg = PAYLOAD_N1__INIT; // AMessage
  void *buf;                        // Buffer to store serialized data
  unsigned len;                     // Length of serialized data
  
  NodeInfos info = NODE_INFOS__INIT;
  DataN1 data = DATA_N1__INIT;


  info.has_battery_voltage = 1;
  info.has_fw_version = 1;
  info.has_packet_rolling_num = 1;
  info.has_nodeid = 1;
  info.has_unixtime = 1;

  info.battery_voltage = 0x0A;
  info.fw_version = 0x64;
  info.packet_rolling_num = 0x0A;
  info.nodeid = 0xC8;
  info.unixtime = 0xAABBCCDD;

  data.has_indoor_wb_temperature = 1;
  data.has_indoor_light = 1;
  data.has_indoor_humidity = 1;
  data.has_indoor_db_temperature = 1 ;

  data.indoor_wb_temperature = 0xFFFFFFFF;
  data.indoor_light = 0x000186A0;
  data.indoor_humidity = 0x46;
  data.indoor_db_temperature = 0x19;

  msg.int_ = &info;
  msg.ext  = &data;

  len = payload_n1__get_packed_size(&msg);
  
  buf = malloc(len);
  payload_n1__pack(&msg,buf);
  for (int i = 0; i < len; ++i)
  {
  printf("%02X ", ((uint8_t*)buf)[i]);
  }
  printf("\n");
  
  fprintf(stderr,"Writing %d serialized bytes\n",len); // See the length of message
  wToFile(buf, len);

  free(buf); // Free the allocated serialized buffer
  return 0;
}