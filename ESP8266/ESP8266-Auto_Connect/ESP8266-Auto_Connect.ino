#include <WiFiManager.h> // https://github.com/tzapu/WiFiManager

WiFiManager wm;

void setup() {
    pinMode(D5,INPUT);
    WiFi.mode(WIFI_STA);
    Serial.begin(9600);

    bool res = wm.autoConnect("ESP-WiFi_Settings"); // password protected ap

    if(!res) 
    Serial.println("----------Failed to connect----------");
    else 
    Serial.println("----------Connected to the WiFi !----------");

}

void loop() {
  int butondurum=digitalRead(D5);
    if(butondurum==true){
      butondurum=false;
      WiFi.disconnect(true);
      Serial.println("----------WiFi Disconnected !----------");
      delay(2000);
      wm.resetSettings();
      Serial.println("----------Settings Reseting !----------");
      delay(3000);
      ESP.reset();
    }  
}
