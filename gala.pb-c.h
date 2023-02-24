/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gala.proto */

#ifndef PROTOBUF_C_gala_2eproto__INCLUDED
#define PROTOBUF_C_gala_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Header Header;
typedef struct N1Data N1Data;
typedef struct N1Message N1Message;
typedef struct N2Data N2Data;
typedef struct N2Message N2Message;
typedef struct N3Data N3Data;
typedef struct N3Message N3Message;
typedef struct N4Data N4Data;
typedef struct N4Message N4Message;
typedef struct N5Data N5Data;
typedef struct N5Message N5Message;
typedef struct N6Data N6Data;
typedef struct N6Message N6Message;
typedef struct N7Data N7Data;
typedef struct N7Message N7Message;
typedef struct N8Data N8Data;
typedef struct N8Message N8Message;
typedef struct N9Data N9Data;
typedef struct N9Message N9Message;
typedef struct N10Data N10Data;
typedef struct N10Message N10Message;
typedef struct NodeMessage NodeMessage;


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

struct  Header
{
  ProtobufCMessage base;
  uint32_t nodeid;
  uint32_t unixtime;
  uint32_t fw_version;
  uint32_t battery_voltage;
  uint32_t packet_rolling_num;
};
#define HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&header__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  N1Data
{
  ProtobufCMessage base;
  int32_t indoor_wb_temperature;
  uint32_t indoor_light;
  uint32_t indoor_humidity;
  int32_t indoor_db_temperature;
};
#define N1__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n1__data__descriptor) \
    , 0, 0, 0, 0 }


struct  N1Message
{
  ProtobufCMessage base;
  Header *int_;
  N1Data *ext;
};
#define N1__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n1__message__descriptor) \
    , NULL, NULL }


struct  N2Data
{
  ProtobufCMessage base;
  uint32_t bma_reset_counter;
  uint32_t cow_shock_conunt;
  uint32_t cow_temperature_min;
  uint32_t cow_temperature_max;
  uint32_t cow_temperature_ave;
  /*
   * zero or more values
   */
  size_t n_cow_features_set_0_fx;
  float *cow_features_set_0_fx;
  uint32_t behaviour_classes;
};
#define N2__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n2__data__descriptor) \
    , 0, 0, 0, 0, 0, 0,NULL, 0 }


struct  N2Message
{
  ProtobufCMessage base;
  Header *int_;
  N2Data *ext;
};
#define N2__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n2__message__descriptor) \
    , NULL, NULL }


struct  N3Data
{
  ProtobufCMessage base;
  uint32_t drinking_water_volume_cumulated;
  int32_t drinking_water_temperature;
  uint32_t sprinkler_water_volume_cumulated;
  int32_t sprinkler_water_temperature;
};
#define N3__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n3__data__descriptor) \
    , 0, 0, 0, 0 }


struct  N3Message
{
  ProtobufCMessage base;
  Header *int_;
  N3Data *ext;
};
#define N3__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n3__message__descriptor) \
    , NULL, NULL }


struct  N4Data
{
  ProtobufCMessage base;
  uint32_t litter_conductivity;
  int32_t litter_temperature;
  float litter_vwc;
};
#define N4__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n4__data__descriptor) \
    , 0, 0, 0 }


struct  N4Message
{
  ProtobufCMessage base;
  Header *int_;
  N4Data *ext;
};
#define N4__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n4__message__descriptor) \
    , NULL, NULL }


struct  N5Data
{
  ProtobufCMessage base;
  uint32_t sound_level_min;
  uint32_t sound_level_max;
  uint32_t sound_level_avg;
  uint32_t nh3_ppm;
  uint32_t h2s_ppm;
  uint32_t co2_ppm;
  uint32_t ch4_ppm;
};
#define N5__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n5__data__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0 }


struct  N5Message
{
  ProtobufCMessage base;
  Header *int_;
  N5Data *ext;
};
#define N5__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n5__message__descriptor) \
    , NULL, NULL }


struct  N6Data
{
  ProtobufCMessage base;
  uint32_t indoor_wind_speed_min;
  uint32_t indoor_wind_speed_max;
  uint32_t indoor_wind_speed;
  uint32_t indoor_wind_direction;
};
#define N6__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n6__data__descriptor) \
    , 0, 0, 0, 0 }


struct  N6Message
{
  ProtobufCMessage base;
  Header *int_;
  N6Data *ext;
};
#define N6__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n6__message__descriptor) \
    , NULL, NULL }


struct  N7Data
{
  ProtobufCMessage base;
  protobuf_c_boolean dry_contact;
};
#define N7__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n7__data__descriptor) \
    , 0 }


struct  N7Message
{
  ProtobufCMessage base;
  Header *int_;
  N7Data *ext;
};
#define N7__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n7__message__descriptor) \
    , NULL, NULL }


struct  N8Data
{
  ProtobufCMessage base;
  protobuf_c_boolean rele;
};
#define N8__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n8__data__descriptor) \
    , 0 }


struct  N8Message
{
  ProtobufCMessage base;
  Header *int_;
  N8Data *ext;
};
#define N8__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n8__message__descriptor) \
    , NULL, NULL }


struct  N9Data
{
  ProtobufCMessage base;
  int32_t case_temperature;
  uint32_t case_humidity;
  int32_t outdoor_temperature;
  uint32_t outdoor_humidity;
  uint32_t outdoor_wind_speed_min;
  uint32_t outdoor_wind_speed_max;
  uint32_t outdoor_wind_speed;
  uint32_t outdoor_wind_direction;
  uint32_t outdoor_rainfall;
  Network network_type;
  uint32_t signal_strength;
  uint32_t solar_voltage;
  uint32_t solar_current;
  double latitude;
  double longitude;
  uint32_t battery_current;
};
#define N9__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n9__data__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0, NETWORK__GPRS, 0, 0, 0, 0, 0, 0 }


struct  N9Message
{
  ProtobufCMessage base;
  Header *int_;
  N9Data *ext;
};
#define N9__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n9__message__descriptor) \
    , NULL, NULL }


struct  N10Data
{
  ProtobufCMessage base;
  double latitude;
  double longitude;
  int32_t case_temperature;
  uint32_t case_humidity;
  size_t n_indoor_insects_count_packed;
  uint32_t *indoor_insects_count_packed;
};
#define N10__DATA__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n10__data__descriptor) \
    , 0, 0, 0, 0, 0,NULL }


struct  N10Message
{
  ProtobufCMessage base;
  Header *int_;
  N10Data *ext;
};
#define N10__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&n10__message__descriptor) \
    , NULL, NULL }


typedef enum {
  NODE__MESSAGE__TEST_ONEOF__NOT_SET = 0,
  NODE__MESSAGE__TEST_ONEOF_N1_MESSAGE = 1,
  NODE__MESSAGE__TEST_ONEOF_N2_MESSAGE = 2,
  NODE__MESSAGE__TEST_ONEOF_N3_MESSAGE = 3,
  NODE__MESSAGE__TEST_ONEOF_N4_MESSAGE = 4,
  NODE__MESSAGE__TEST_ONEOF_N5_MESSAGE = 5,
  NODE__MESSAGE__TEST_ONEOF_N6_MESSAGE = 6,
  NODE__MESSAGE__TEST_ONEOF_N7_MESSAGE = 7,
  NODE__MESSAGE__TEST_ONEOF_N8_MESSAGE = 8,
  NODE__MESSAGE__TEST_ONEOF_N9_MESSAGE = 9,
  NODE__MESSAGE__TEST_ONEOF_N10_MESSAGE = 10
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(NODE__MESSAGE__TEST_ONEOF__CASE)
} NodeMessage__TestOneofCase;

struct  NodeMessage
{
  ProtobufCMessage base;
  NodeMessage__TestOneofCase test_oneof_case;
  union {
    N1Message *n1_message;
    N2Message *n2_message;
    N3Message *n3_message;
    N4Message *n4_message;
    N5Message *n5_message;
    N6Message *n6_message;
    N7Message *n7_message;
    N8Message *n8_message;
    N9Message *n9_message;
    N10Message *n10_message;
  };
};
#define NODE__MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&node__message__descriptor) \
    , NODE__MESSAGE__TEST_ONEOF__NOT_SET, {0} }


/* Header methods */
void   header__init
                     (Header         *message);
size_t header__get_packed_size
                     (const Header   *message);
size_t header__pack
                     (const Header   *message,
                      uint8_t             *out);
size_t header__pack_to_buffer
                     (const Header   *message,
                      ProtobufCBuffer     *buffer);
Header *
       header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   header__free_unpacked
                     (Header *message,
                      ProtobufCAllocator *allocator);
/* N1Data methods */
void   n1__data__init
                     (N1Data         *message);
size_t n1__data__get_packed_size
                     (const N1Data   *message);
size_t n1__data__pack
                     (const N1Data   *message,
                      uint8_t             *out);
size_t n1__data__pack_to_buffer
                     (const N1Data   *message,
                      ProtobufCBuffer     *buffer);
N1Data *
       n1__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n1__data__free_unpacked
                     (N1Data *message,
                      ProtobufCAllocator *allocator);
/* N1Message methods */
void   n1__message__init
                     (N1Message         *message);
size_t n1__message__get_packed_size
                     (const N1Message   *message);
size_t n1__message__pack
                     (const N1Message   *message,
                      uint8_t             *out);
size_t n1__message__pack_to_buffer
                     (const N1Message   *message,
                      ProtobufCBuffer     *buffer);
N1Message *
       n1__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n1__message__free_unpacked
                     (N1Message *message,
                      ProtobufCAllocator *allocator);
/* N2Data methods */
void   n2__data__init
                     (N2Data         *message);
size_t n2__data__get_packed_size
                     (const N2Data   *message);
size_t n2__data__pack
                     (const N2Data   *message,
                      uint8_t             *out);
size_t n2__data__pack_to_buffer
                     (const N2Data   *message,
                      ProtobufCBuffer     *buffer);
N2Data *
       n2__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n2__data__free_unpacked
                     (N2Data *message,
                      ProtobufCAllocator *allocator);
/* N2Message methods */
void   n2__message__init
                     (N2Message         *message);
size_t n2__message__get_packed_size
                     (const N2Message   *message);
size_t n2__message__pack
                     (const N2Message   *message,
                      uint8_t             *out);
size_t n2__message__pack_to_buffer
                     (const N2Message   *message,
                      ProtobufCBuffer     *buffer);
N2Message *
       n2__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n2__message__free_unpacked
                     (N2Message *message,
                      ProtobufCAllocator *allocator);
/* N3Data methods */
void   n3__data__init
                     (N3Data         *message);
size_t n3__data__get_packed_size
                     (const N3Data   *message);
size_t n3__data__pack
                     (const N3Data   *message,
                      uint8_t             *out);
size_t n3__data__pack_to_buffer
                     (const N3Data   *message,
                      ProtobufCBuffer     *buffer);
N3Data *
       n3__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n3__data__free_unpacked
                     (N3Data *message,
                      ProtobufCAllocator *allocator);
/* N3Message methods */
void   n3__message__init
                     (N3Message         *message);
size_t n3__message__get_packed_size
                     (const N3Message   *message);
size_t n3__message__pack
                     (const N3Message   *message,
                      uint8_t             *out);
size_t n3__message__pack_to_buffer
                     (const N3Message   *message,
                      ProtobufCBuffer     *buffer);
N3Message *
       n3__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n3__message__free_unpacked
                     (N3Message *message,
                      ProtobufCAllocator *allocator);
/* N4Data methods */
void   n4__data__init
                     (N4Data         *message);
size_t n4__data__get_packed_size
                     (const N4Data   *message);
size_t n4__data__pack
                     (const N4Data   *message,
                      uint8_t             *out);
size_t n4__data__pack_to_buffer
                     (const N4Data   *message,
                      ProtobufCBuffer     *buffer);
N4Data *
       n4__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n4__data__free_unpacked
                     (N4Data *message,
                      ProtobufCAllocator *allocator);
/* N4Message methods */
void   n4__message__init
                     (N4Message         *message);
size_t n4__message__get_packed_size
                     (const N4Message   *message);
size_t n4__message__pack
                     (const N4Message   *message,
                      uint8_t             *out);
size_t n4__message__pack_to_buffer
                     (const N4Message   *message,
                      ProtobufCBuffer     *buffer);
N4Message *
       n4__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n4__message__free_unpacked
                     (N4Message *message,
                      ProtobufCAllocator *allocator);
/* N5Data methods */
void   n5__data__init
                     (N5Data         *message);
size_t n5__data__get_packed_size
                     (const N5Data   *message);
size_t n5__data__pack
                     (const N5Data   *message,
                      uint8_t             *out);
size_t n5__data__pack_to_buffer
                     (const N5Data   *message,
                      ProtobufCBuffer     *buffer);
N5Data *
       n5__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n5__data__free_unpacked
                     (N5Data *message,
                      ProtobufCAllocator *allocator);
/* N5Message methods */
void   n5__message__init
                     (N5Message         *message);
size_t n5__message__get_packed_size
                     (const N5Message   *message);
size_t n5__message__pack
                     (const N5Message   *message,
                      uint8_t             *out);
size_t n5__message__pack_to_buffer
                     (const N5Message   *message,
                      ProtobufCBuffer     *buffer);
N5Message *
       n5__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n5__message__free_unpacked
                     (N5Message *message,
                      ProtobufCAllocator *allocator);
/* N6Data methods */
void   n6__data__init
                     (N6Data         *message);
size_t n6__data__get_packed_size
                     (const N6Data   *message);
size_t n6__data__pack
                     (const N6Data   *message,
                      uint8_t             *out);
size_t n6__data__pack_to_buffer
                     (const N6Data   *message,
                      ProtobufCBuffer     *buffer);
N6Data *
       n6__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n6__data__free_unpacked
                     (N6Data *message,
                      ProtobufCAllocator *allocator);
/* N6Message methods */
void   n6__message__init
                     (N6Message         *message);
size_t n6__message__get_packed_size
                     (const N6Message   *message);
size_t n6__message__pack
                     (const N6Message   *message,
                      uint8_t             *out);
size_t n6__message__pack_to_buffer
                     (const N6Message   *message,
                      ProtobufCBuffer     *buffer);
N6Message *
       n6__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n6__message__free_unpacked
                     (N6Message *message,
                      ProtobufCAllocator *allocator);
/* N7Data methods */
void   n7__data__init
                     (N7Data         *message);
size_t n7__data__get_packed_size
                     (const N7Data   *message);
size_t n7__data__pack
                     (const N7Data   *message,
                      uint8_t             *out);
size_t n7__data__pack_to_buffer
                     (const N7Data   *message,
                      ProtobufCBuffer     *buffer);
N7Data *
       n7__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n7__data__free_unpacked
                     (N7Data *message,
                      ProtobufCAllocator *allocator);
/* N7Message methods */
void   n7__message__init
                     (N7Message         *message);
size_t n7__message__get_packed_size
                     (const N7Message   *message);
size_t n7__message__pack
                     (const N7Message   *message,
                      uint8_t             *out);
size_t n7__message__pack_to_buffer
                     (const N7Message   *message,
                      ProtobufCBuffer     *buffer);
N7Message *
       n7__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n7__message__free_unpacked
                     (N7Message *message,
                      ProtobufCAllocator *allocator);
/* N8Data methods */
void   n8__data__init
                     (N8Data         *message);
size_t n8__data__get_packed_size
                     (const N8Data   *message);
size_t n8__data__pack
                     (const N8Data   *message,
                      uint8_t             *out);
size_t n8__data__pack_to_buffer
                     (const N8Data   *message,
                      ProtobufCBuffer     *buffer);
N8Data *
       n8__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n8__data__free_unpacked
                     (N8Data *message,
                      ProtobufCAllocator *allocator);
/* N8Message methods */
void   n8__message__init
                     (N8Message         *message);
size_t n8__message__get_packed_size
                     (const N8Message   *message);
size_t n8__message__pack
                     (const N8Message   *message,
                      uint8_t             *out);
size_t n8__message__pack_to_buffer
                     (const N8Message   *message,
                      ProtobufCBuffer     *buffer);
N8Message *
       n8__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n8__message__free_unpacked
                     (N8Message *message,
                      ProtobufCAllocator *allocator);
/* N9Data methods */
void   n9__data__init
                     (N9Data         *message);
size_t n9__data__get_packed_size
                     (const N9Data   *message);
size_t n9__data__pack
                     (const N9Data   *message,
                      uint8_t             *out);
size_t n9__data__pack_to_buffer
                     (const N9Data   *message,
                      ProtobufCBuffer     *buffer);
N9Data *
       n9__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n9__data__free_unpacked
                     (N9Data *message,
                      ProtobufCAllocator *allocator);
/* N9Message methods */
void   n9__message__init
                     (N9Message         *message);
size_t n9__message__get_packed_size
                     (const N9Message   *message);
size_t n9__message__pack
                     (const N9Message   *message,
                      uint8_t             *out);
size_t n9__message__pack_to_buffer
                     (const N9Message   *message,
                      ProtobufCBuffer     *buffer);
N9Message *
       n9__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n9__message__free_unpacked
                     (N9Message *message,
                      ProtobufCAllocator *allocator);
/* N10Data methods */
void   n10__data__init
                     (N10Data         *message);
size_t n10__data__get_packed_size
                     (const N10Data   *message);
size_t n10__data__pack
                     (const N10Data   *message,
                      uint8_t             *out);
size_t n10__data__pack_to_buffer
                     (const N10Data   *message,
                      ProtobufCBuffer     *buffer);
N10Data *
       n10__data__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n10__data__free_unpacked
                     (N10Data *message,
                      ProtobufCAllocator *allocator);
/* N10Message methods */
void   n10__message__init
                     (N10Message         *message);
size_t n10__message__get_packed_size
                     (const N10Message   *message);
size_t n10__message__pack
                     (const N10Message   *message,
                      uint8_t             *out);
size_t n10__message__pack_to_buffer
                     (const N10Message   *message,
                      ProtobufCBuffer     *buffer);
N10Message *
       n10__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   n10__message__free_unpacked
                     (N10Message *message,
                      ProtobufCAllocator *allocator);
/* NodeMessage methods */
void   node__message__init
                     (NodeMessage         *message);
size_t node__message__get_packed_size
                     (const NodeMessage   *message);
size_t node__message__pack
                     (const NodeMessage   *message,
                      uint8_t             *out);
size_t node__message__pack_to_buffer
                     (const NodeMessage   *message,
                      ProtobufCBuffer     *buffer);
NodeMessage *
       node__message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   node__message__free_unpacked
                     (NodeMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Header_Closure)
                 (const Header *message,
                  void *closure_data);
typedef void (*N1Data_Closure)
                 (const N1Data *message,
                  void *closure_data);
typedef void (*N1Message_Closure)
                 (const N1Message *message,
                  void *closure_data);
typedef void (*N2Data_Closure)
                 (const N2Data *message,
                  void *closure_data);
typedef void (*N2Message_Closure)
                 (const N2Message *message,
                  void *closure_data);
typedef void (*N3Data_Closure)
                 (const N3Data *message,
                  void *closure_data);
typedef void (*N3Message_Closure)
                 (const N3Message *message,
                  void *closure_data);
typedef void (*N4Data_Closure)
                 (const N4Data *message,
                  void *closure_data);
typedef void (*N4Message_Closure)
                 (const N4Message *message,
                  void *closure_data);
typedef void (*N5Data_Closure)
                 (const N5Data *message,
                  void *closure_data);
typedef void (*N5Message_Closure)
                 (const N5Message *message,
                  void *closure_data);
typedef void (*N6Data_Closure)
                 (const N6Data *message,
                  void *closure_data);
typedef void (*N6Message_Closure)
                 (const N6Message *message,
                  void *closure_data);
typedef void (*N7Data_Closure)
                 (const N7Data *message,
                  void *closure_data);
typedef void (*N7Message_Closure)
                 (const N7Message *message,
                  void *closure_data);
typedef void (*N8Data_Closure)
                 (const N8Data *message,
                  void *closure_data);
typedef void (*N8Message_Closure)
                 (const N8Message *message,
                  void *closure_data);
typedef void (*N9Data_Closure)
                 (const N9Data *message,
                  void *closure_data);
typedef void (*N9Message_Closure)
                 (const N9Message *message,
                  void *closure_data);
typedef void (*N10Data_Closure)
                 (const N10Data *message,
                  void *closure_data);
typedef void (*N10Message_Closure)
                 (const N10Message *message,
                  void *closure_data);
typedef void (*NodeMessage_Closure)
                 (const NodeMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    network__descriptor;
extern const ProtobufCMessageDescriptor header__descriptor;
extern const ProtobufCMessageDescriptor n1__data__descriptor;
extern const ProtobufCMessageDescriptor n1__message__descriptor;
extern const ProtobufCMessageDescriptor n2__data__descriptor;
extern const ProtobufCMessageDescriptor n2__message__descriptor;
extern const ProtobufCMessageDescriptor n3__data__descriptor;
extern const ProtobufCMessageDescriptor n3__message__descriptor;
extern const ProtobufCMessageDescriptor n4__data__descriptor;
extern const ProtobufCMessageDescriptor n4__message__descriptor;
extern const ProtobufCMessageDescriptor n5__data__descriptor;
extern const ProtobufCMessageDescriptor n5__message__descriptor;
extern const ProtobufCMessageDescriptor n6__data__descriptor;
extern const ProtobufCMessageDescriptor n6__message__descriptor;
extern const ProtobufCMessageDescriptor n7__data__descriptor;
extern const ProtobufCMessageDescriptor n7__message__descriptor;
extern const ProtobufCMessageDescriptor n8__data__descriptor;
extern const ProtobufCMessageDescriptor n8__message__descriptor;
extern const ProtobufCMessageDescriptor n9__data__descriptor;
extern const ProtobufCMessageDescriptor n9__message__descriptor;
extern const ProtobufCMessageDescriptor n10__data__descriptor;
extern const ProtobufCMessageDescriptor n10__message__descriptor;
extern const ProtobufCMessageDescriptor node__message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gala_2eproto__INCLUDED */
