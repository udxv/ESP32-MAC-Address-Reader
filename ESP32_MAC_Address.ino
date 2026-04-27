#include <WiFi.h>
#include "esp_wifi.h"

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Initialize WiFi (required)
  WiFi.mode(WIFI_MODE_STA);
  WiFi.begin();   // No need to connect to network
  delay(500);

  uint8_t mac[6];
  esp_wifi_get_mac(WIFI_IF_STA, mac);

  Serial.print("ESP32 MAC Address: ");
  Serial.printf("%02X:%02X:%02X:%02X:%02X:%02X\n",
                mac[0], mac[1], mac[2],
                mac[3], mac[4], mac[5]);
}

void loop() {
}
