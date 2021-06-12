#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//long,float,double,int
LiquidCrystal_I2C lcd(0x27, 16, 2);

//Wifi Clock
#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

const char *ssid     = "BLOK 2 FREE";
const char *password = "";

const long utcOffsetInSeconds = 7200;  

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

void setup() {
  lcd.begin();
  Serial.begin(9600);
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
  int A,B,C;
  timeClient.update();
  A = timeClient.getHours();
  B = timeClient.getMinutes();
  C = timeClient.getSeconds();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Clock:");
  lcd.print(A);
  lcd.print(":");
  lcd.print(B);
  lcd.print(":");
  lcd.print(C);
  delay(1000);
}
