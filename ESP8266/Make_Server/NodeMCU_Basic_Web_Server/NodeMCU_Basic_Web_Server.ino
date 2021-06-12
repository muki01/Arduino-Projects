#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "index.h"

int LEDPin = 2;
 
const char* ssid = "MERCUSYS_F412";
const char* password = "94023498";
 
ESP8266WebServer server(80);   //instantiate server at port 80 (http port)

void setup(void){
  //make the LED pin output and initially turned off
  pinMode(LEDPin, OUTPUT);
  digitalWrite(LEDPin, LOW);
   
  delay(1000);
  Serial.begin(115200);
  WiFi.begin(ssid, password); //begin WiFi connection
  Serial.println("");
 
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
   
  server.on("/", [](){
    server.send(200, "text/html", page);
  });
  server.on("/LEDOn", [](){
    server.send(200, "text/html", page);
    digitalWrite(LEDPin, HIGH);
    delay(1000);
  });
  server.on("/LEDOff", [](){
    server.send(200, "text/html", page);
    digitalWrite(LEDPin, LOW);
    delay(1000); 
  });
  server.begin();
  Serial.println("Web server started!");
}
 
void loop(void){
  server.handleClient();
}
