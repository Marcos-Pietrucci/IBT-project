/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gala.proto */

#ifndef PROTOBUF_C_gala_2eproto__INCLUDED
#define PROTOBUF_C_gala_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct NodeInfos NodeInfos;
typedef struct DataN1 DataN1;
typedef struct PayloadN1 PayloadN1;
typedef struct DataN2 DataN2;
typedef struct PayloadN2 PayloadN2;
typedef struct DataN3 DataN3;
typedef struct PayloadN3 PayloadN3;
typedef struct DataN4 DataN4;
typedef struct PayloadN4 PayloadN4;
typedef struct DataN5 DataN5;
typedef struct PayloadN5 PayloadN5;
typedef struct DataN6 DataN6;
typedef struct PayloadN6 PayloadN6;
typedef struct DataN7 DataN7;
typedef struct PayloadN7 PayloadN7;
typedef struct DataN8 DataN8;
typedef struct PayloadN8 PayloadN8;
typedef struct StatusGateway StatusGateway;
typedef struct DataN9 DataN9;
typedef struct PayloadN9 PayloadN9;
typedef struct PayloadN10 PayloadN10;


/* --- enums --- */

typedef enum _Network {
  /*
   * still no definition for Network enum values
   */
  NETWORK__GPRS = 0,
  NETWORK__UMTS = 1,
  NETWORK__LTE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NETWORK)
} Network;

/* --- messages --- */

struct  NodeInfos
{
  ProtobufCMessage base;
  protobuf_c_boolean has_battery_voltage;
  uint32_t battery_voltage;
  protobuf_c_boolean has_fw_version;
  uint32_t fw_version;
  protobuf_c_boolean has_packet_rolling_num;
  uint32_t packet_rolling_num;
  protobuf_c_boolean has_nodeid;
  uint32_t nodeid;
  protobuf_c_boolean has_unixtime;
  uint32_t unixtime;
};
#define NODE_INFOS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&node_infos__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  DataN1
{
  ProtobufCMessage base;
  protobuf_c_boolean has_indoor_wb_temperature;
  int32_t indoor_wb_temperature;
  protobuf_c_boolean has_indoor_light;
  uint32_t indoor_light;
  protobuf_c_boolean has_indoor_humidity;
  uint32_t indoor_humidity;
  protobuf_c_boolean has_indoor_db_temperature;
  int32_t indoor_db_temperature;
};
#define DATA_N1__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n1__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0 }


struct  PayloadN1
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN1 *ext;
};
#define PAYLOAD_N1__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n1__descriptor) \
    , NULL, NULL }


struct  DataN2
{
  ProtobufCMessage base;
  protobuf_c_boolean has_bma_reset_counter;
  uint32_t bma_reset_counter;
  protobuf_c_boolean has_cow_shock_conunt;
  uint32_t cow_shock_conunt;
  protobuf_c_boolean has_cow_temperature_min;
  uint32_t cow_temperature_min;
  protobuf_c_boolean has_cow_temperature_max;
  uint32_t cow_temperature_max;
  protobuf_c_boolean has_cow_temperature_ave;
  uint32_t cow_temperature_ave;
  /*
   * zero or more values
   */
  size_t n_cow_features_set_0_fx;
  float *cow_features_set_0_fx;
  protobuf_c_boolean has_behaviour_classes;
  uint32_t behaviour_classes;
};
#define DATA_N2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n2__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0 }


struct  PayloadN2
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN2 *ext;
};
#define PAYLOAD_N2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n2__descriptor) \
    , NULL, NULL }


struct  DataN3
{
  ProtobufCMessage base;
  protobuf_c_boolean has_drinking_water_volume_cumulated;
  uint32_t drinking_water_volume_cumulated;
  protobuf_c_boolean has_drinking_water_temperature;
  int32_t drinking_water_temperature;
  protobuf_c_boolean has_sprinkler_water_volume_cumulated;
  uint32_t sprinkler_water_volume_cumulated;
  protobuf_c_boolean has_sprinkler_water_temperature;
  int32_t sprinkler_water_temperature;
};
#define DATA_N3__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n3__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0 }


struct  PayloadN3
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN3 *ext;
};
#define PAYLOAD_N3__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n3__descriptor) \
    , NULL, NULL }


struct  DataN4
{
  ProtobufCMessage base;
  protobuf_c_boolean has_litter_conductivity;
  uint32_t litter_conductivity;
  protobuf_c_boolean has_litter_temperature;
  int32_t litter_temperature;
  protobuf_c_boolean has_litter_vwc;
  float litter_vwc;
};
#define DATA_N4__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n4__descriptor) \
    , 0, 0, 0, 0, 0, 0 }


struct  PayloadN4
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN4 *ext;
};
#define PAYLOAD_N4__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n4__descriptor) \
    , NULL, NULL }


struct  DataN5
{
  ProtobufCMessage base;
  protobuf_c_boolean has_sound_level_min;
  uint32_t sound_level_min;
  protobuf_c_boolean has_sound_level_max;
  uint32_t sound_level_max;
  protobuf_c_boolean has_sound_level_avg;
  uint32_t sound_level_avg;
  protobuf_c_boolean has_nh3_ppm;
  uint32_t nh3_ppm;
  protobuf_c_boolean has_h2s_ppm;
  uint32_t h2s_ppm;
  protobuf_c_boolean has_co2_ppm;
  uint32_t co2_ppm;
  protobuf_c_boolean has_ch4_ppm;
  uint32_t ch4_ppm;
};
#define DATA_N5__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n5__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  PayloadN5
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN5 *ext;
};
#define PAYLOAD_N5__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n5__descriptor) \
    , NULL, NULL }


struct  DataN6
{
  ProtobufCMessage base;
  protobuf_c_boolean has_indoor_wind_speed_min;
  uint32_t indoor_wind_speed_min;
  protobuf_c_boolean has_indoor_wind_speed_max;
  uint32_t indoor_wind_speed_max;
  protobuf_c_boolean has_indoor_wind_speed;
  uint32_t indoor_wind_speed;
  protobuf_c_boolean has_indoor_wind_direction;
  uint32_t indoor_wind_direction;
};
#define DATA_N6__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n6__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0 }


struct  PayloadN6
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN6 *ext;
};
#define PAYLOAD_N6__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n6__descriptor) \
    , NULL, NULL }


struct  DataN7
{
  ProtobufCMessage base;
  protobuf_c_boolean has_dry_contact;
  protobuf_c_boolean dry_contact;
};
#define DATA_N7__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n7__descriptor) \
    , 0, 0 }


struct  PayloadN7
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN7 *ext;
};
#define PAYLOAD_N7__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n7__descriptor) \
    , NULL, NULL }


struct  DataN8
{
  ProtobufCMessage base;
  protobuf_c_boolean has_rele;
  protobuf_c_boolean rele;
};
#define DATA_N8__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n8__descriptor) \
    , 0, 0 }


struct  PayloadN8
{
  ProtobufCMessage base;
  NodeInfos *int_;
  DataN8 *ext;
};
#define PAYLOAD_N8__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n8__descriptor) \
    , NULL, NULL }


struct  StatusGateway
{
  ProtobufCMessage base;
  protobuf_c_boolean has_battery_voltage;
  uint32_t battery_voltage;
  protobuf_c_boolean has_battery_current;
  uint32_t battery_current;
  protobuf_c_boolean has_solar_voltage;
  uint32_t solar_voltage;
  protobuf_c_boolean has_solar_current;
  uint32_t solar_current;
  protobuf_c_boolean has_network_type;
  Network network_type;
  protobuf_c_boolean has_signal_strength;
  uint32_t signal_strength;
  protobuf_c_boolean has_latitude;
  double latitude;
  protobuf_c_boolean has_longitude;
  double longitude;
};
#define STATUS_GATEWAY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&status_gateway__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, NETWORK__GPRS, 0, 0, 0, 0, 0, 0 }


struct  DataN9
{
  ProtobufCMessage base;
  protobuf_c_boolean has_case_temperature;
  int32_t case_temperature;
  protobuf_c_boolean has_case_humidity;
  uint32_t case_humidity;
  protobuf_c_boolean has_outdoor_temperature;
  int32_t outdoor_temperature;
  protobuf_c_boolean has_outdoor_humidity;
  uint32_t outdoor_humidity;
  protobuf_c_boolean has_outdoor_wind_speed_min;
  uint32_t outdoor_wind_speed_min;
  protobuf_c_boolean has_outdoor_wind_speed_max;
  uint32_t outdoor_wind_speed_max;
  protobuf_c_boolean has_outdoor_wind_speed;
  uint32_t outdoor_wind_speed;
  protobuf_c_boolean has_outdoor_wind_direction;
  uint32_t outdoor_wind_direction;
  protobuf_c_boolean has_outdoor_rainfall;
  uint32_t outdoor_rainfall;
};
#define DATA_N9__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&data_n9__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  PayloadN9
{
  ProtobufCMessage base;
  StatusGateway *gwinfo;
  DataN9 *ext;
};
#define PAYLOAD_N9__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n9__descriptor) \
    , NULL, NULL }


struct  PayloadN10
{
  ProtobufCMessage base;
  protobuf_c_boolean has_latitude;
  double latitude;
  protobuf_c_boolean has_longitude;
  double longitude;
  protobuf_c_boolean has_case_temperature;
  int32_t case_temperature;
  protobuf_c_boolean has_case_humidity;
  uint32_t case_humidity;
  size_t n_indoor_insects_count_packed;
  uint32_t *indoor_insects_count_packed;
};
#define PAYLOAD_N10__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&payload_n10__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0,NULL }


/* NodeInfos methods */
void   node_infos__init
                     (NodeInfos         *message);
size_t node_infos__get_packed_size
                     (const NodeInfos   *message);
size_t node_infos__pack
                     (const NodeInfos   *message,
                      uint8_t             *out);
size_t node_infos__pack_to_buffer
                     (const NodeInfos   *message,
                      ProtobufCBuffer     *buffer);
NodeInfos *
       node_infos__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   node_infos__free_unpacked
                     (NodeInfos *message,
                      ProtobufCAllocator *allocator);
/* DataN1 methods */
void   data_n1__init
                     (DataN1         *message);
size_t data_n1__get_packed_size
                     (const DataN1   *message);
size_t data_n1__pack
                     (const DataN1   *message,
                      uint8_t             *out);
size_t data_n1__pack_to_buffer
                     (const DataN1   *message,
                      ProtobufCBuffer     *buffer);
DataN1 *
       data_n1__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n1__free_unpacked
                     (DataN1 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN1 methods */
void   payload_n1__init
                     (PayloadN1         *message);
size_t payload_n1__get_packed_size
                     (const PayloadN1   *message);
size_t payload_n1__pack
                     (const PayloadN1   *message,
                      uint8_t             *out);
size_t payload_n1__pack_to_buffer
                     (const PayloadN1   *message,
                      ProtobufCBuffer     *buffer);
PayloadN1 *
       payload_n1__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n1__free_unpacked
                     (PayloadN1 *message,
                      ProtobufCAllocator *allocator);
/* DataN2 methods */
void   data_n2__init
                     (DataN2         *message);
size_t data_n2__get_packed_size
                     (const DataN2   *message);
size_t data_n2__pack
                     (const DataN2   *message,
                      uint8_t             *out);
size_t data_n2__pack_to_buffer
                     (const DataN2   *message,
                      ProtobufCBuffer     *buffer);
DataN2 *
       data_n2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n2__free_unpacked
                     (DataN2 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN2 methods */
void   payload_n2__init
                     (PayloadN2         *message);
size_t payload_n2__get_packed_size
                     (const PayloadN2   *message);
size_t payload_n2__pack
                     (const PayloadN2   *message,
                      uint8_t             *out);
size_t payload_n2__pack_to_buffer
                     (const PayloadN2   *message,
                      ProtobufCBuffer     *buffer);
PayloadN2 *
       payload_n2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n2__free_unpacked
                     (PayloadN2 *message,
                      ProtobufCAllocator *allocator);
/* DataN3 methods */
void   data_n3__init
                     (DataN3         *message);
size_t data_n3__get_packed_size
                     (const DataN3   *message);
size_t data_n3__pack
                     (const DataN3   *message,
                      uint8_t             *out);
size_t data_n3__pack_to_buffer
                     (const DataN3   *message,
                      ProtobufCBuffer     *buffer);
DataN3 *
       data_n3__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n3__free_unpacked
                     (DataN3 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN3 methods */
void   payload_n3__init
                     (PayloadN3         *message);
size_t payload_n3__get_packed_size
                     (const PayloadN3   *message);
size_t payload_n3__pack
                     (const PayloadN3   *message,
                      uint8_t             *out);
size_t payload_n3__pack_to_buffer
                     (const PayloadN3   *message,
                      ProtobufCBuffer     *buffer);
PayloadN3 *
       payload_n3__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n3__free_unpacked
                     (PayloadN3 *message,
                      ProtobufCAllocator *allocator);
/* DataN4 methods */
void   data_n4__init
                     (DataN4         *message);
size_t data_n4__get_packed_size
                     (const DataN4   *message);
size_t data_n4__pack
                     (const DataN4   *message,
                      uint8_t             *out);
size_t data_n4__pack_to_buffer
                     (const DataN4   *message,
                      ProtobufCBuffer     *buffer);
DataN4 *
       data_n4__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n4__free_unpacked
                     (DataN4 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN4 methods */
void   payload_n4__init
                     (PayloadN4         *message);
size_t payload_n4__get_packed_size
                     (const PayloadN4   *message);
size_t payload_n4__pack
                     (const PayloadN4   *message,
                      uint8_t             *out);
size_t payload_n4__pack_to_buffer
                     (const PayloadN4   *message,
                      ProtobufCBuffer     *buffer);
PayloadN4 *
       payload_n4__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n4__free_unpacked
                     (PayloadN4 *message,
                      ProtobufCAllocator *allocator);
/* DataN5 methods */
void   data_n5__init
                     (DataN5         *message);
size_t data_n5__get_packed_size
                     (const DataN5   *message);
size_t data_n5__pack
                     (const DataN5   *message,
                      uint8_t             *out);
size_t data_n5__pack_to_buffer
                     (const DataN5   *message,
                      ProtobufCBuffer     *buffer);
DataN5 *
       data_n5__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n5__free_unpacked
                     (DataN5 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN5 methods */
void   payload_n5__init
                     (PayloadN5         *message);
size_t payload_n5__get_packed_size
                     (const PayloadN5   *message);
size_t payload_n5__pack
                     (const PayloadN5   *message,
                      uint8_t             *out);
size_t payload_n5__pack_to_buffer
                     (const PayloadN5   *message,
                      ProtobufCBuffer     *buffer);
PayloadN5 *
       payload_n5__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n5__free_unpacked
                     (PayloadN5 *message,
                      ProtobufCAllocator *allocator);
/* DataN6 methods */
void   data_n6__init
                     (DataN6         *message);
size_t data_n6__get_packed_size
                     (const DataN6   *message);
size_t data_n6__pack
                     (const DataN6   *message,
                      uint8_t             *out);
size_t data_n6__pack_to_buffer
                     (const DataN6   *message,
                      ProtobufCBuffer     *buffer);
DataN6 *
       data_n6__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n6__free_unpacked
                     (DataN6 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN6 methods */
void   payload_n6__init
                     (PayloadN6         *message);
size_t payload_n6__get_packed_size
                     (const PayloadN6   *message);
size_t payload_n6__pack
                     (const PayloadN6   *message,
                      uint8_t             *out);
size_t payload_n6__pack_to_buffer
                     (const PayloadN6   *message,
                      ProtobufCBuffer     *buffer);
PayloadN6 *
       payload_n6__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n6__free_unpacked
                     (PayloadN6 *message,
                      ProtobufCAllocator *allocator);
/* DataN7 methods */
void   data_n7__init
                     (DataN7         *message);
size_t data_n7__get_packed_size
                     (const DataN7   *message);
size_t data_n7__pack
                     (const DataN7   *message,
                      uint8_t             *out);
size_t data_n7__pack_to_buffer
                     (const DataN7   *message,
                      ProtobufCBuffer     *buffer);
DataN7 *
       data_n7__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n7__free_unpacked
                     (DataN7 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN7 methods */
void   payload_n7__init
                     (PayloadN7         *message);
size_t payload_n7__get_packed_size
                     (const PayloadN7   *message);
size_t payload_n7__pack
                     (const PayloadN7   *message,
                      uint8_t             *out);
size_t payload_n7__pack_to_buffer
                     (const PayloadN7   *message,
                      ProtobufCBuffer     *buffer);
PayloadN7 *
       payload_n7__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n7__free_unpacked
                     (PayloadN7 *message,
                      ProtobufCAllocator *allocator);
/* DataN8 methods */
void   data_n8__init
                     (DataN8         *message);
size_t data_n8__get_packed_size
                     (const DataN8   *message);
size_t data_n8__pack
                     (const DataN8   *message,
                      uint8_t             *out);
size_t data_n8__pack_to_buffer
                     (const DataN8   *message,
                      ProtobufCBuffer     *buffer);
DataN8 *
       data_n8__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n8__free_unpacked
                     (DataN8 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN8 methods */
void   payload_n8__init
                     (PayloadN8         *message);
size_t payload_n8__get_packed_size
                     (const PayloadN8   *message);
size_t payload_n8__pack
                     (const PayloadN8   *message,
                      uint8_t             *out);
size_t payload_n8__pack_to_buffer
                     (const PayloadN8   *message,
                      ProtobufCBuffer     *buffer);
PayloadN8 *
       payload_n8__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n8__free_unpacked
                     (PayloadN8 *message,
                      ProtobufCAllocator *allocator);
/* StatusGateway methods */
void   status_gateway__init
                     (StatusGateway         *message);
size_t status_gateway__get_packed_size
                     (const StatusGateway   *message);
size_t status_gateway__pack
                     (const StatusGateway   *message,
                      uint8_t             *out);
size_t status_gateway__pack_to_buffer
                     (const StatusGateway   *message,
                      ProtobufCBuffer     *buffer);
StatusGateway *
       status_gateway__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   status_gateway__free_unpacked
                     (StatusGateway *message,
                      ProtobufCAllocator *allocator);
/* DataN9 methods */
void   data_n9__init
                     (DataN9         *message);
size_t data_n9__get_packed_size
                     (const DataN9   *message);
size_t data_n9__pack
                     (const DataN9   *message,
                      uint8_t             *out);
size_t data_n9__pack_to_buffer
                     (const DataN9   *message,
                      ProtobufCBuffer     *buffer);
DataN9 *
       data_n9__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   data_n9__free_unpacked
                     (DataN9 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN9 methods */
void   payload_n9__init
                     (PayloadN9         *message);
size_t payload_n9__get_packed_size
                     (const PayloadN9   *message);
size_t payload_n9__pack
                     (const PayloadN9   *message,
                      uint8_t             *out);
size_t payload_n9__pack_to_buffer
                     (const PayloadN9   *message,
                      ProtobufCBuffer     *buffer);
PayloadN9 *
       payload_n9__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n9__free_unpacked
                     (PayloadN9 *message,
                      ProtobufCAllocator *allocator);
/* PayloadN10 methods */
void   payload_n10__init
                     (PayloadN10         *message);
size_t payload_n10__get_packed_size
                     (const PayloadN10   *message);
size_t payload_n10__pack
                     (const PayloadN10   *message,
                      uint8_t             *out);
size_t payload_n10__pack_to_buffer
                     (const PayloadN10   *message,
                      ProtobufCBuffer     *buffer);
PayloadN10 *
       payload_n10__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   payload_n10__free_unpacked
                     (PayloadN10 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*NodeInfos_Closure)
                 (const NodeInfos *message,
                  void *closure_data);
typedef void (*DataN1_Closure)
                 (const DataN1 *message,
                  void *closure_data);
typedef void (*PayloadN1_Closure)
                 (const PayloadN1 *message,
                  void *closure_data);
typedef void (*DataN2_Closure)
                 (const DataN2 *message,
                  void *closure_data);
typedef void (*PayloadN2_Closure)
                 (const PayloadN2 *message,
                  void *closure_data);
typedef void (*DataN3_Closure)
                 (const DataN3 *message,
                  void *closure_data);
typedef void (*PayloadN3_Closure)
                 (const PayloadN3 *message,
                  void *closure_data);
typedef void (*DataN4_Closure)
                 (const DataN4 *message,
                  void *closure_data);
typedef void (*PayloadN4_Closure)
                 (const PayloadN4 *message,
                  void *closure_data);
typedef void (*DataN5_Closure)
                 (const DataN5 *message,
                  void *closure_data);
typedef void (*PayloadN5_Closure)
                 (const PayloadN5 *message,
                  void *closure_data);
typedef void (*DataN6_Closure)
                 (const DataN6 *message,
                  void *closure_data);
typedef void (*PayloadN6_Closure)
                 (const PayloadN6 *message,
                  void *closure_data);
typedef void (*DataN7_Closure)
                 (const DataN7 *message,
                  void *closure_data);
typedef void (*PayloadN7_Closure)
                 (const PayloadN7 *message,
                  void *closure_data);
typedef void (*DataN8_Closure)
                 (const DataN8 *message,
                  void *closure_data);
typedef void (*PayloadN8_Closure)
                 (const PayloadN8 *message,
                  void *closure_data);
typedef void (*StatusGateway_Closure)
                 (const StatusGateway *message,
                  void *closure_data);
typedef void (*DataN9_Closure)
                 (const DataN9 *message,
                  void *closure_data);
typedef void (*PayloadN9_Closure)
                 (const PayloadN9 *message,
                  void *closure_data);
typedef void (*PayloadN10_Closure)
                 (const PayloadN10 *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    network__descriptor;
extern const ProtobufCMessageDescriptor node_infos__descriptor;
extern const ProtobufCMessageDescriptor data_n1__descriptor;
extern const ProtobufCMessageDescriptor payload_n1__descriptor;
extern const ProtobufCMessageDescriptor data_n2__descriptor;
extern const ProtobufCMessageDescriptor payload_n2__descriptor;
extern const ProtobufCMessageDescriptor data_n3__descriptor;
extern const ProtobufCMessageDescriptor payload_n3__descriptor;
extern const ProtobufCMessageDescriptor data_n4__descriptor;
extern const ProtobufCMessageDescriptor payload_n4__descriptor;
extern const ProtobufCMessageDescriptor data_n5__descriptor;
extern const ProtobufCMessageDescriptor payload_n5__descriptor;
extern const ProtobufCMessageDescriptor data_n6__descriptor;
extern const ProtobufCMessageDescriptor payload_n6__descriptor;
extern const ProtobufCMessageDescriptor data_n7__descriptor;
extern const ProtobufCMessageDescriptor payload_n7__descriptor;
extern const ProtobufCMessageDescriptor data_n8__descriptor;
extern const ProtobufCMessageDescriptor payload_n8__descriptor;
extern const ProtobufCMessageDescriptor status_gateway__descriptor;
extern const ProtobufCMessageDescriptor data_n9__descriptor;
extern const ProtobufCMessageDescriptor payload_n9__descriptor;
extern const ProtobufCMessageDescriptor payload_n10__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gala_2eproto__INCLUDED */
