#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "gala.pb-c.h"

uint8_t buffer[255];

void printSize(char node_name[], int original_size, int message_size);

#define initPackage(name)\
    void *buf;\
    unsigned len;\
    \
    NodeInfos info = NODE_INFOS__INIT;\
    Data##name data = DATA_##name##__INIT;\
    Payload##name pl = PAYLOAD_##name##__INIT;

#define infoProperty(property, value) {\
    info.has_##property = 1;\
    info.property = value;\
}

#define dataProperty(property, value) {\
    data.has_##property = 1;\
    data.property = value;\
}

#define setPayload(name) {\
    pl.int_ = &info;\
    pl.ext  = &data;\
    len = payload_##name##__get_packed_size(&pl);\
    payload_##name##__pack(&pl,buffer);\
}


void generateN1min(){
    initPackage(N1);

    infoProperty(battery_voltage, 2000);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0);
    infoProperty(nodeid, 0);
    infoProperty(unixtime, 1673956667);  
    
    dataProperty(indoor_wb_temperature, 0);
    dataProperty(indoor_light, 5000);
    dataProperty(indoor_humidity, 0);
    dataProperty(indoor_db_temperature, 0);

    setPayload(n1);

    printSize("minN1", 26, len);
}

void generateN1max(){
    initPackage(N1);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
    
    dataProperty(indoor_wb_temperature, -50);
    dataProperty(indoor_light, 1000000);
    dataProperty(indoor_humidity, 1000);
    dataProperty(indoor_db_temperature, -50);

    setPayload(n1);

    printSize("maxN1", 26, len);
}

void generateN2min(){
    initPackage(N2);

    infoProperty(battery_voltage, 2000);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0);
    infoProperty(nodeid, 0);
    infoProperty(unixtime, 1673956667);  
    
    dataProperty(cow_shock_conunt, 0);
    dataProperty(cow_temperature_min, 0);
    dataProperty(cow_temperature_max, 0);
    dataProperty(cow_temperature_ave, 0);
    
    float arr_cow_features_set_0_fx[10]={0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3};
    data.n_cow_features_set_0_fx = 10;
    data.cow_features_set_0_fx = arr_cow_features_set_0_fx;
    
    dataProperty(behaviour_classes, 0x07030301);

    setPayload(n2);

    printSize("minN2", 64, len);
}

void generateN2max(){
    initPackage(N2);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
    
    dataProperty(cow_shock_conunt, 255);
    dataProperty(cow_temperature_min, -5);
    dataProperty(cow_temperature_max, -5);
    dataProperty(cow_temperature_ave, -20);

    float arr_cow_features_set_0_fx[10]={0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3, 0.3};
    data.n_cow_features_set_0_fx = 10;
    data.cow_features_set_0_fx = arr_cow_features_set_0_fx;
    
    dataProperty(behaviour_classes, 0x07030301);

    setPayload(n2);

    printSize("maxN2", 64, len);
}

void generateN3max(){

    initPackage(N3);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);
    
    dataProperty(drinking_water_volume_cumulated, 0x80000000);
    dataProperty(drinking_water_temperature, 0x000000C8);
    dataProperty(sprinkler_water_volume_cumulated, 0x80000000);
    dataProperty(sprinkler_water_temperature, 0x000000C8);

    setPayload(n3);

    printSize("maxN3", 28, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN3min(){

    initPackage(N3);

    infoProperty(battery_voltage, 2000);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0);
    infoProperty(nodeid, 0);
    infoProperty(unixtime, 1673956667); 
    
    dataProperty(drinking_water_volume_cumulated, 0x00000000);
    dataProperty(drinking_water_temperature, 0x00000032);
    dataProperty(sprinkler_water_volume_cumulated, 0x00000000);
    dataProperty(sprinkler_water_temperature, 0x00000020);

    setPayload(n3);

    printSize("minN3", 28, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN4max(){

    initPackage(N4);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B); 
    
    dataProperty(litter_conductivity, 0x0000FA00);
    dataProperty(litter_temperature, -50);
    dataProperty(litter_vwc, 0.3);

    setPayload(n4);

    printSize("maxN4", 24, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN4min(){

    initPackage(N4);

    infoProperty(battery_voltage, 2000);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0);
    infoProperty(nodeid, 0);
    infoProperty(unixtime, 1673956667); 
    
    dataProperty(litter_conductivity, 0x0000FA00);
    dataProperty(litter_temperature, 0x00000000);
    dataProperty(litter_vwc, 0.3);

    setPayload(n4);

    printSize("minN4", 24, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN5max(){

    initPackage(N5);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
    
    dataProperty(sound_level_min, 0x000000000064);
    dataProperty(sound_level_max, 0x000000000064);
    dataProperty(sound_level_avg, 0x000000000064);
    dataProperty(nh3_ppm, 0x000000000064);
    dataProperty(h2s_ppm, 0x00000000000A);
    dataProperty(co2_ppm, 0x000000001388);
    dataProperty(ch4_ppm, 0x000000000064);

    setPayload(n5);

    printSize("max5", 29, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN5min(){

    initPackage(N5);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
    
    dataProperty(sound_level_min, 0x000000000000);
    dataProperty(sound_level_max, 0x000000000000);
    dataProperty(sound_level_avg, 0x000000000000);
    dataProperty(nh3_ppm, 0x000000000000);
    dataProperty(h2s_ppm, 0x000000000000);
    dataProperty(co2_ppm, 0x000000000000);
    dataProperty(ch4_ppm, 0x000000000000);

    setPayload(n5);

    printSize("min5", 29, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}


void generateN6max(){

    initPackage(N6);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
    
    dataProperty(indoor_wind_speed_min, 0x0000000000C8);
    dataProperty(indoor_wind_speed_max, 0x0000000000C8);
    dataProperty(indoor_wind_speed, 0x0000000000C8);
    dataProperty(indoor_wind_direction, 0x000000000168);
    
    setPayload(n6);

    printSize("max6", 28, len);
}

void generateN6min(){

    initPackage(N6);

    infoProperty(battery_voltage, 0x00000FA0);
    infoProperty(fw_version, 0x000FFFFF);
    infoProperty(packet_rolling_num, 0x000000FF);
    infoProperty(nodeid, 0x000000FF);
    infoProperty(unixtime, 0x63C68D3B);  
 
    dataProperty(indoor_wind_speed_min, 0x000000000000);
    dataProperty(indoor_wind_speed_max, 0x000000000000);
    dataProperty(indoor_wind_speed, 0x000000000000);
    dataProperty(indoor_wind_direction, 0x000000000000);
    
    setPayload(n6);                    // Free the allocated serialized buffer

    printSize("min6", 28, len);
}

void generateN9max(){

    initPackage(N9);
    
    infoProperty(nodeid,                0x000000FF);
    infoProperty(unixtime,              0x0FFFFFFF);
    
    dataProperty(network_type,          1);
    dataProperty(signal_strength,       127);
    dataProperty(latitude,              0.3);
    dataProperty(longitude,             0.3);
    dataProperty(case_temperature,      -50);
    dataProperty(case_humidity,         1000);
    dataProperty(outdoor_temperature,   -50);
    dataProperty(outdoor_humidity,      1000);
    dataProperty(outdoor_wind_speed_min,200);
    dataProperty(outdoor_wind_speed_max,200);
    dataProperty(outdoor_wind_speed,    200);
    dataProperty(outdoor_wind_direction,360);
    dataProperty(outdoor_rainfall,      200);

    setPayload(n9);
    
    printSize("max9", 11 + 44, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN9min(){

    initPackage(N9);
    
    infoProperty(nodeid,                0x000000FF);
    infoProperty(unixtime,              0x0FFFFFFF);
    
    dataProperty(network_type,          1);
    dataProperty(signal_strength,       0);
    dataProperty(latitude,              0.3);
    dataProperty(longitude,             0.3);
    dataProperty(case_temperature,      0);
    dataProperty(case_humidity,         0);
    dataProperty(outdoor_temperature,   0);
    dataProperty(outdoor_humidity,      0);
    dataProperty(outdoor_wind_speed_min,0);
    dataProperty(outdoor_wind_speed_max,0);
    dataProperty(outdoor_wind_speed,    0);
    dataProperty(outdoor_wind_direction,0);
    dataProperty(outdoor_rainfall,      0);

    setPayload(n9);
    
    printSize("min9", 11 + 44, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN10max(){

    initPackage(N10);
    
    infoProperty(nodeid,                0x000000FF);
    infoProperty(unixtime,              0x0FFFFFFF);
    
    dataProperty(latitude,              0.3);
    dataProperty(longitude,             0.3);
    dataProperty(case_temperature,      -50);
    dataProperty(case_humidity,         1000);

    setPayload(n10);
    
    printSize("max10", 11 + 31, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

void generateN10min(){

    initPackage(N10);
    
    infoProperty(nodeid,                0x000000FF);
    infoProperty(unixtime,              0x0FFFFFFF); 
    
    dataProperty(latitude,              0.3);
    dataProperty(longitude,             0.3);
    dataProperty(case_temperature,      0);
    dataProperty(case_humidity,         0);

    setPayload(n10);
    
    printSize("min10", 11 + 31, len);

    //fprintf(stderr,"Writing %d serialized bytes", len); // Print length of binary message
    //buf = malloc(len);              // Allocate buffer for binary message
    //payload_n1__pack(&pl, buf);     // Serialize payload to binary message
    //free(buf);                      // Free the allocated serialized buffer
}

int main (int argc, const char * argv[]) 
{
    generateN1min();
    /*generateN2min();
    generateN3min();
    generateN4min();
    generateN5min();
    generateN6min();
    generateN9min();
    generateN10min();
    generateN1max();
    generateN2max();
    generateN3max();
    generateN4max();
    generateN5max();
    generateN6max();
    generateN9max();
    generateN10max();*/
}

void printSize(char node_name[], int original_size, int message_size) {
    printf("Node: %s,\tOld: %3d,\tNew: %3d\n", node_name, original_size, message_size);
}