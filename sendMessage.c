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


  info.battery_voltage = 10;
  info.fw_version = 100;
  info.packet_rolling_num = 10;

  data.indoor_wb_temperature = -20;
  data.indoor_light = 21;
  data.indoor_humidity = 22;
  data.indoor_db_temperature = 23;

  msg.int_ = &info;
  msg.ext  = &data;

  len = payload_n1__get_packed_size(&msg);
  
  buf = malloc(len);
  payload_n1__pack(&msg,buf);
  
  fprintf(stderr,"Writing %d serialized bytes\n",len); // See the length of message
  wToFile(buf, len);

  free(buf); // Free the allocated serialized buffer
  return 0;
}