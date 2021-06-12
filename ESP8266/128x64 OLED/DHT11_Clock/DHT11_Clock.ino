#include <NTPClient.h>
#include <ESP8266WiFi.h> // provides ESP8266 specific Wi-Fi routines we are calling to connect to network
#include <WiFiUDP.h>
#include <SPI.h> // SPI for interfacing OLED with NodeMCU
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "DHT.h"
DHT dht(D6, DHT11);

Adafruit_SSD1306 display(128, 64, &Wire);

const char *ssid     = "BLOK 2 FREE";
const char *password = "";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", 10800);
String weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
String months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  dht.begin();

  display.clearDisplay();
  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(WHITE);
  display.setCursor(5, 2);

  display.print("CONNECTINGTO ");
  display.print(ssid);
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
  for (int i = 0; i < 20; i++) {
    int humi  = dht.readHumidity();
    int tempC = dht.readTemperature();
    int tempF = dht.readTemperature(true);
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
    int currentMonth = ptm->tm_mon + 1;
    String currentMonthName = months[currentMonth - 1];
    int currentYear = ptm->tm_year + 1900;

    //Print FULL Date:
    String currentDate = String(monthDay) + "." + String(currentMonth) + "." + String(currentYear);

    if (i < 10) {
      display.clearDisplay();
      display.setTextSize(2); // Draw 2X-scale text
      display.setCursor(5, 5);

      display.println("/" + formattedTime + "\\");
      display.setCursor(5, 25);
      display.println("|" + weekDay + "|");
      display.setCursor(5, 45);
      display.println("\\" + currentDate + "/");
      display.display();
      delay(1000);
    }

    if (i > 9) {
      display.clearDisplay();
      oledDisplayHeader();
      oledDisplay(3, 5, 28, humi, "%");
      oledDisplay(2, 70, 16, tempC, "C");
      oledDisplay(2, 70, 44, tempF, "F");
      display.display();
      delay(1000);
    }
    Serial.println(i);
  }
}












void oledDisplayHeader() {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Humidity");
  display.setCursor(60, 0);
  display.print("Temperature");
}

void oledDisplay(int size, int x, int y, float value, String unit) {
  int charLen = 12;
  int xo = x + charLen * 3.2;
  int xunit = x + charLen * 3.6;
  int xval = x;
  display.setTextSize(size);
  display.setTextColor(WHITE);

  if (unit == "%") {
    display.setCursor(x, y);
    display.print(value, 0);
    display.print(unit);
  } else {
    if (value > 99) {
      xval = x;
    } else {
      xval = x + charLen;
    }
    display.setCursor(xval, y);
    display.print(value, 0);
    display.drawCircle(xo, y + 2, 2, WHITE); // print degree symbols (  )
    display.setCursor(xunit, y);
    display.print(unit);
  }
}
