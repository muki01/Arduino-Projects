#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "MERCUSYS_F412";
char pass[] = "94023498";
char auth[] = "ha-0irLU7fEJhAuOV6XuEQWfuKORyW12";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop(){
  Blynk.run();
}
