#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gala.pb-c.h"

#define MAX_MSG_SIZE 1024

#define printField(message, field) printf("  " #field ": %d\n", message->field);


static size_t
read_buffer (unsigned max_length, uint8_t *out)
{
  FILE *fptr;

  fptr = fopen("bin/message.txt","r");

  size_t cur_len = 0;
  size_t nread;
  while ((nread=fread(out + cur_len, 1, max_length - cur_len, fptr)) != 0)
  {
    cur_len += nread;
    if (cur_len == max_length)
    {
      fprintf(stderr, "max message length exceeded\n");
      exit(1);
    }
  }
  return cur_len;
}

int main (int argc, const char * argv[]) 
{
  // Read packed message from standard-input.
  uint8_t buf[MAX_MSG_SIZE];
  size_t msg_len = read_buffer (MAX_MSG_SIZE, buf);

  // Unpack the message using protobuf-c.
  N1Message* msg = n1__message__unpack(NULL, msg_len, buf);	
  if (msg == NULL)
  {
    fprintf(stderr, "error unpacking incoming message\n");
    exit(1);
  }

  Header *info = msg->int_;
  N1Data *data = msg->ext;

  printf("Received data\n NodeInfos:\n");

  printField(info, battery_voltage);
  printField(info, fw_version);
  printField(info, packet_rolling_num);
  printField(info, nodeid);
  printField(info, unixtime);

  printf("\n DataN1:\n");

  printField(data, indoor_wb_temperature);
  printField(data, indoor_light);
  printField(data, indoor_humidity);
  printField(data, indoor_db_temperature);

  // Free the unpacked message
  n1__message__free_unpacked(msg, NULL);
  return 0;
}