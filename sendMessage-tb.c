#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "gala.pb-c.c"

int nOfBits(int n){
  int c=0;
  for(int i=0; i<32; i++)
  {   
    // Check if the bit at position i is set to 1
    if( (1 << i) & n)
      c=i;
  }
  return c;
}

void wToFile(void *buf, unsigned len, unsigned index){
  int num;
  FILE *fptr;

  char fileName[20];
  sprintf (fileName, "message%d.txt", index);
  fptr = fopen(fileName, "w");

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
  srand(time(NULL));                // Initialization, should only be called once.
  PayloadN1 msg = PAYLOAD_N1__INIT; // AMessage
  void *buf;                        // Buffer to store serialized data
  unsigned len;                     // Length of serialized data
  NodeInfos info = NODE_INFOS__INIT;
  DataN1 data = DATA_N1__INIT;
  int avg=0;

  for(int i=0; i<1000; i++){

    unsigned totBits = 0;

    info.battery_voltage = rand()%12;
    totBits += nOfBits(info.battery_voltage);
    info.fw_version = rand()%100;
    totBits += nOfBits(info.fw_version);
    info.packet_rolling_num = rand()%10000;
    totBits += nOfBits(info.packet_rolling_num);

    data.indoor_wb_temperature = (rand()%40)*( (rand()%2) ? 1:-1);
    totBits += nOfBits(data.indoor_wb_temperature);
    data.indoor_light = rand()%100000;
    totBits += nOfBits(data.indoor_light);
    data.indoor_humidity = rand()%100;
    totBits += nOfBits(data.indoor_humidity);
    data.indoor_db_temperature = (rand()%40)*( (rand()%2) ? 1:-1);
    totBits += nOfBits(data.indoor_db_temperature);

    msg.int_ = &info;
    msg.ext  = &data;

    len = payload_n1__get_packed_size(&msg);
    
    buf = malloc(len);
    payload_n1__pack(&msg,buf);
    
    fprintf(stderr,"Writing %d serialized bytes, total bits: %d, overhead:  %2.f \n",len, totBits, len - totBits/8.0); // See the length of message
    wToFile(buf, len, i);
    avg += len-(totBits/8.0);

    free(buf); // Free the allocated serialized buffer
  }
  fprintf(stderr,"1000 tries, avg overhead:%2.f bytes\n",avg/1000.0); // See the length of message
  return 0;
}