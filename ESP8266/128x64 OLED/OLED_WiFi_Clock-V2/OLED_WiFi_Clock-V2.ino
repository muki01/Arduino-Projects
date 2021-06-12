#include <NTPClient.h>
#include <ESP8266WiFi.h> // provides ESP8266 specific Wi-Fi routines we are calling to connect to network
#include <WiFiUdp.h> //handles sending and receiving of UDP packages
#include <SPI.h> // SPI for interfacing OLED with NodeMCU
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire);

const char *ssid     = "BLOK 2 FREE";
const char *password = "";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", 10800);
String weekDays[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
String months[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void setup(){
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);

  display.clearDisplay();
  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(WHITE);
  display.setCursor(5, 2);

  display.print("CONNECTING...");
  display.display();

  while ( WiFi.status() != WL_CONNECTED ) {
    delay(500);
    Serial.print(".");
  }

  display.clearDisplay();
  display.setCursor(5, 2);
  display.print("WiFi Reddy:)");
  display.display();
  delay(2000);
  
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
  String currentDate = String(currentMonth) + "." + String(monthDay) + "." + String(currentYear);

  display.clearDisplay();
  display.setTextSize(2); // Draw 2X-scale text
  display.setCursor(5, 5);
  
  display.println("/"+formattedTime+"\\");
  display.setCursor(5, 25);
  display.println("|"+weekDay+"|");
  display.setCursor(5, 45);
  display.println("\\"+currentDate+"/");
  display.display();
  delay(1000);
  
}
