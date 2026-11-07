#include <ESP8266WiFi.h>

void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP("Bedava_Wifi");
}

void loop() {
}