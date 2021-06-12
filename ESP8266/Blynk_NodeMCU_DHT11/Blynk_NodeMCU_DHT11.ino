#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

#define DHTPIN D7
#define DHTTYPE DHT11


DHT dht(DHTPIN, DHTTYPE);

char auth[] = "Z6BrlLO4ck6WJOdCcwDR_Th04RRw2tbd";

char ssid[] = "MERCUSYS_F412";
char pass[] = "94023498";

BlynkTimer timer;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
  dht.begin();
  
  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
void sendSensor()
{
  float nem = dht.readHumidity();
  float sicaklik = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit

  Blynk.virtualWrite(V0, nem);
  Blynk.virtualWrite(V1, sicaklik);
}
