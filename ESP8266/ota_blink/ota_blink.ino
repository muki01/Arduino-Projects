#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

const char* ssid = "MERCUSYS_F412";
const char* password = "94023498";

void setup() {
  Serial.begin(115200);
  Serial.println("Başlatılıyor");
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Bağlantı hatası, yeniden başlıyor!!!");
    delay(5000); //5sn bekle
    ESP.restart();//sistemi yeniden başlat
  }

 ArduinoOTA.onStart([]() {
    String type;
    if (ArduinoOTA.getCommand() == U_FLASH)
      type = "sketch";
    else // U_SPIFFS
      type = "filesystem";

    Serial.println("Start updating " + type);
  });
  ArduinoOTA.onEnd([]() {
    Serial.println("\nEnd");
  });
  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
  });
  ArduinoOTA.onError([](ota_error_t error) {
    Serial.printf("Hata[%u]: ", error);
    if (error == OTA_AUTH_ERROR) Serial.println("Yetki Hatası");
    else if (error == OTA_BEGIN_ERROR) Serial.println("Baslatma Basarisiz");
    else if (error == OTA_CONNECT_ERROR) Serial.println("Baglanti Basarisiz");
    else if (error == OTA_RECEIVE_ERROR) Serial.println("Veri Alinamadi");
    else if (error == OTA_END_ERROR) Serial.println("Sonlandirma Basarisiz");
  });
  ArduinoOTA.begin();//OTA'yi başlatıyor
  Serial.println("Sistem Hazir");
  Serial.print("IP Adresiniz: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  ArduinoOTA.handle();

}
