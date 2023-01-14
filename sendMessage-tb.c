#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "gala.pb-c.c"
unsigned N = 10;

int nOfBits(int n){
  int c=0;
  for(int i=0; i<32; i++)
  {   
    // Check if the bit at position i is set to 1
    if( (1 << i) & n)
      c=i;
  }
  return c+1;
}

void wToFile(void *buf, unsigned len, unsigned index){
  int num;
  FILE *fptr;

  char fileName[20];
  sprintf (fileName, "bin/message%d.txt", index);
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
  if (argc==1){
    printf("Usage %s [outputFlag] [numOfTries]\n  [outputFlag]\n\tf\tWrite files with buffer\n\tn\tDon't save files\n  [numOfTries]\n\t\t(optional)", argv[0]);
    return 0;
  }
  if (argc==3){
    N = atoi(argv[2]);
  }

  srand(time(NULL));                // Initialization, should only be called once.
  void *buf;                        // Buffer to store serialized data
  unsigned len;                     // Length of serialized data

  PayloadN1 msg = PAYLOAD_N1__INIT; // Initialize payload message
  PayloadN1 *payloadN1Arr[0];
  BlobMessage blobMsg = BLOB_MESSAGE__INIT; // Initialize Blob msg 
  NodeInfos info = NODE_INFOS__INIT;// Initialize info message
  DataN1 data = DATA_N1__INIT;      // Initialize data message

  int avg=0;  //average overhead

  //I test N payloads and calculate an avg overhead
  for(int i=0; i<N; i++){

    unsigned totBits = 0; //bits required for data transmitted in this payload

    info.has_battery_voltage = 1;
    info.battery_voltage = rand()%12; // Values are "randomized" in a possible range
    totBits += nOfBits(info.battery_voltage);

    info.has_fw_version = 1;
    info.fw_version = rand()%100;
    totBits += nOfBits(info.fw_version);
    
    info.has_packet_rolling_num =1;
    info.packet_rolling_num = rand()%10000;
    totBits += nOfBits(info.packet_rolling_num);
    
    info.has_nodeid =1;
    info.nodeid = rand()%100000;
    totBits += nOfBits(info.nodeid);
    
    info.has_unixtime =1;
    info.unixtime = rand();
    totBits += nOfBits(info.unixtime);

    data.has_indoor_wb_temperature =1;
    data.indoor_wb_temperature = (rand()%40)*( (rand()%2) ? 1:-1);
    totBits += nOfBits(data.indoor_wb_temperature);
    
    data.has_indoor_light =1;
    data.indoor_light = rand()%100000;
    totBits += nOfBits(data.indoor_light);
    
    data.has_indoor_humidity =1;
    data.indoor_humidity = rand()%100;
    totBits += nOfBits(data.indoor_humidity);
    
    data.has_indoor_db_temperature =1;
    data.indoor_db_temperature = (rand()%40)*( (rand()%2) ? 1:-1);
    totBits += nOfBits(data.indoor_db_temperature);

    msg.int_ = &info;
    msg.ext  = &data;
    payloadN1Arr[0] = &msg;
    blobMsg.n_node1_messages = 1;
    blobMsg.node1_messages = payloadN1Arr;

    //len = payload_n1__get_packed_size(&msg);
    len = blob_message__get_packed_size(&blobMsg);
    avg += len-(totBits/8.0);
    fprintf(stderr,"%d - Writing %d serialized bytes, total bits: %d, overhead:  %2.f \n", i+1, len, totBits, len - totBits/8.0); // See the length of message

    if (argc>=2 && argv[1][0]=='f'){
      buf = malloc(len);
      //payload_n1__pack(&msg, buf);
      blob_message__pack(&blobMsg, buf);
      
      wToFile(buf, len, i);

      free(buf);  // Free the allocated serialized buffer
    }
  }

  fprintf(stderr,"Test result: %d tries, avg overhead:%2.f bytes\n", N, (float)avg/N);
  return 0;
}