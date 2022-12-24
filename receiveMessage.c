#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gala.pb-c.c"

#define MAX_MSG_SIZE 1024

static size_t
read_buffer (unsigned max_length, uint8_t *out)
{
  FILE *fptr;

  fptr = fopen("message.txt","r");

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
  PayloadN1 *msg; // AMessage

  // Read packed message from standard-input.
  uint8_t buf[MAX_MSG_SIZE];
  size_t msg_len = read_buffer (MAX_MSG_SIZE, buf);

  // Unpack the message using protobuf-c.
  msg = payload_n1__unpack(NULL, msg_len, buf);	
  if (msg == NULL)
  {
    fprintf(stderr, "error unpacking incoming message\n");
    exit(1);
  }

  NodeInfos *info = msg->int_;
  DataN1 *data = msg->ext;

  printf("Received data\n NodeInfos:\n");

  printf("  battery_voltage: %d\n", info->battery_voltage);
  printf("  fw_version: %d\n", info->fw_version);
  printf("  packet_rolling_num: %d\n", info->packet_rolling_num);

  printf("\n DataN1:\n");

  printf("  indoor_wb_temperature: %d\n", data->indoor_wb_temperature);
  printf("  indoor_light: %d\n", data->indoor_light);
  printf("  indoor_humidity: %d\n", data->indoor_humidity);
  printf("  indoor_db_temperature: %d\n", data->indoor_db_temperature);

  // Free the unpacked message
  payload_n1__free_unpacked(msg, NULL);
  return 0;
}