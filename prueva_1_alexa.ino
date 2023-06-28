#include <Arduino.h>
#ifdef ESP32
  #include <WiFi.h>
#else
  #include "ESP8266WiFi.h"
#endif
#include "fauxmoESP.h"

#define WIFI_SSID "Telcel_B311_46CC"  
#define WIFI_PASS "9d9mE8DqbYH"  
#define SERIAL_BAUDRATE 115200

fauxmoESP fauxmo;
#define RELAY1 0
#define ID_ONE "cuarto" 


void wifiSetup() {

    
    WiFi.mode(WIFI_STA);

   
    Serial.printf("[WIFI] Connecting to %s ", WIFI_SSID);
    WiFi.begin(WIFI_SSID, WIFI_PASS);

    
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(100);
    }
    Serial.println();

 
    Serial.printf("[WIFI] STATION Mode, SSID: %s, IP address: %s\n", WiFi.SSID().c_str(), WiFi.localIP().toString().c_str());

}

void setup() {

    pinMode(RELAY1, OUTPUT);
    digitalWrite(RELAY1, LOW);
    Serial.begin(SERIAL_BAUDRATE);

    
    wifiSetup();

    fauxmo.createServer(true); 
    fauxmo.setPort(80); 
    fauxmo.enable(true);

    
    fauxmo.addDevice(ID_ONE);

    fauxmo.onSetState([](unsigned char device_id, const char * device_name, bool state, unsigned char value) {
        
       
       Serial.printf("[MAIN] Device #%d (%s) state: %s value: %d\n", device_id, device_name, state ? "ON" : "OFF", value);

        if (strcmp(device_name, ID_ONE)==0) {
            digitalWrite(RELAY1, state ? HIGH : LOW);
      
     
        }
        
    });

}

void loop() {
  fauxmo.handle();
}
