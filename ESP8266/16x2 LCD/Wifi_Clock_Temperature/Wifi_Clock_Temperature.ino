#include <ESP8266WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

//LCD Librarys
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

//DHT Librarys
#include "DHT.h"
#define DHTPIN D3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const char *ssid     = "MERCUSYS_F412";
const char *password = "94023498";

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", 7200);

String weekDays[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
String months[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
byte customChar[] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,
  B00000,
  B00000
};

void setup() {
  dht.begin();
  lcd.begin();
  lcd.createChar(0, customChar);
  Serial.begin(9600);
  
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    lcd.setCursor(0,0);
  lcd.print("Connecting...");
  }
  Serial.println();
  Serial.print("Connected to the Wi-Fi");

  timeClient.begin();
}

void loop() { 
  
 for(int i =0;i<20;i++){
  float humi  = dht.readHumidity();
  float tempC = dht.readTemperature();
  
  timeClient.update();
  unsigned long epochTime = timeClient.getEpochTime();          //EpochTime
  String formattedTime = timeClient.getFormattedTime();         //Full Time
  int currentHour = timeClient.getHours();                      
  int currentMinute = timeClient.getMinutes();
  int currentSecond = timeClient.getSeconds();
  String weekDay = weekDays[timeClient.getDay()];

  //Get a time structure
  struct tm *ptm = gmtime ((time_t *)&epochTime); 
  
  int monthDay = ptm->tm_mday;
  int currentMonth = ptm->tm_mon+1;
  String currentMonthName = months[currentMonth-1];
  int currentYear = ptm->tm_year+1900;
  
  //Print FULL Date:
  String currentDate = String(monthDay) + "." + String(currentMonth) + "." + String(currentYear);
  
  if(i<10){
  lcd.setCursor(0,0);
  lcd.print("Time:");
  lcd.print(formattedTime);
  lcd.setCursor(14,0);
  lcd.write(0);
  lcd.setCursor(0,1);
  lcd.print("Date:");
  lcd.print(currentDate);
  delay(1000);
  }
  if(i>9){
    if (isnan(humi) || isnan(tempC)) {
    lcd.setCursor(0, 0);
    lcd.print("Failed");
  } else {
    lcd.setCursor(0, 0);  // start to print at the first row
    lcd.print("Temp: ");
    lcd.print(tempC);     // print the temperature
    lcd.print((char)223); // print ° character
    lcd.print("C");

    lcd.setCursor(0, 1);  // start to print at the second row
    lcd.print("Humi: ");
    lcd.print(humi);      // print the humidity
    lcd.print("%  ");
  }
  delay(1000);
  }
  Serial.println(i);
    }
     
  }
