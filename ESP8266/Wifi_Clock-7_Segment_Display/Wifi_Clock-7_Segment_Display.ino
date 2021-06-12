#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <TM1637Display.h>     //

#define CLK D2                       // Define the connections pins:
#define DIO D3
#define Buzzer D1
#define Btn D5

TM1637Display display = TM1637Display(CLK, DIO);              // Create display object of type TM1637Display:

const char *ssid     = "MERCUSYS_F412";
const char *password = "94023498";

const long utcOffsetInSeconds = 7200;  

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

void setup(){
  pinMode(A0,INPUT);
  pinMode(D1,OUTPUT);
  pinMode(Btn,INPUT);
  Serial.begin(115200);
   // Clear the display:
  display.clear();
  
  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }
  Serial.println();
  Serial.print("Connected to the Wi-Fi");

  timeClient.begin();
}

void loop() {
  int A,B;
  int durum=digitalRead(Btn);
  int x=analogRead(A0);
  x = map(x,0,1023,-1,7);
  
  timeClient.update();
  if (x<0) display.setBrightness(x, false); 
  else 
  display.setBrightness(x);                   // Set the brightness:
  
  A = timeClient.getHours() * 100 + timeClient.getMinutes();
  B = timeClient.getSeconds();
  
    display.showNumberDecEx(A, 0b01000000 , true, 4, 0); 

  if (A==925){
    if (durum == 1){
      delay(30000);
    }
    else{
    tone(Buzzer, 440);
    delay(100);
    tone(Buzzer, 0);
    delay(100);
    }
  }
  Serial.print(x);
}
