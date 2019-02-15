#include <Arduino.h>

/* BOARD INFO */
String DEVICE_NAME      = "Grill";

/* WIFI INFO */
String WIFI_SSID        = "Nat\'s Pixel 3";
String WIFI_PASSWORD    = "espertap";

/* MQTT INFO */
String MQTT_HOST        = "mqtt.cmmc.io";
String MQTT_USERNAME    = "";
String MQTT_PASSWORD    = "";
String MQTT_CLIENT_ID   = "";
String MQTT_PREFIX      = "WORKSHOP/";

int    MQTT_PORT        = 1883;
int PUBLISH_EVERY       = 2L * 1000;
int MQTT_CONNECT_TIMEOUT= 10;
