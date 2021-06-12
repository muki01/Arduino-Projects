#include <ESP8266WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>

const char *ssid     = "BLOK 2 FREE";
const char *password = "";

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org");

String weekDays[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
String months[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void setup() {
  Serial.begin(9600);
  
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  timeClient.begin();
}

void loop() {
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
  String currentDate = String(currentYear) + "-" + String(currentMonth) + "-" + String(monthDay);

  Serial.print("Time: ");
  Serial.println(formattedTime);
  Serial.print("Date: ");
  Serial.println(currentDate);

  delay(1000);
}
