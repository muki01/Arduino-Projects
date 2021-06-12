#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "index.h"

int LEDPin = D1;
 
const char* ssid = "ESP8266";
const char* password = "12345678";
 
ESP8266WebServer server(80);   //instantiate server at port 80 (http port)

void setup(void){
  //make the LED pin output and initially turned off
  pinMode(LEDPin, OUTPUT);
  digitalWrite(LEDPin, LOW);
   
  delay(1000);
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password); //begin WiFi connection
  
  Serial.println("");
  Serial.print("Access Point Name: ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
   
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
