#include <TM1637Display.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define CLK D3
#define DIO D4
#define DHTPIN D2

// Degişkenler
int temperaturee;
int nem;

// Dereceleri Oluşturalım
const uint8_t celsius[] = {
  SEG_A | SEG_B | SEG_F | SEG_G,  
  SEG_A | SEG_D | SEG_E | SEG_F   // C
};

// Create degree Fahrenheit symbol
const uint8_t fahrenheit[] = {
  SEG_G,  
  SEG_B | SEG_C | SEG_E | SEG_G | SEG_F   // F
};

// DHT türünü ayarlayınız

#define DHTTYPE DHT11   // DHT 11 
//#define DHTTYPE DHT22   // DHT 22  (AM2302)
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

//TM1637Display görüntüleme nesnesi oluşturalım
TM1637Display display = TM1637Display(CLK, DIO);

// DHT türünde dht nesnesi oluşturun
DHT dht = DHT(DHTPIN, DHTTYPE);

void setup() {
  //Ekran parlaklığını ayarlayın (0-7)
  display.setBrightness(7);
  // Ekranı temizleyin
  display.clear();
  // Kurulum Sensörü
  dht.begin();
  // seri iletişime 9600 bandında başlayalım
  Serial.begin(9600);
  // Konsolun açılmasını bekleyin
  delay(1000);
}

void loop() {
  //Sıcaklığı Celsius ve Fahrenheit olarak okuyun
  temperaturee = dht.readTemperature();
  nem = dht.readHumidity();
  // Sıcaklığı Seri Monitöre yazdırın
  Serial.println(temperaturee);
  Serial.println(nem);

  // TM1637 ekranında sıcaklığı gösterin
  display.showNumberDec(temperaturee, false, 2, 0);
  display.setSegments(celsius, 2, 2);

  delay(3000);

  display.showNumberDec(nem, false, 2, 0);
  display.setSegments(fahrenheit, 2, 2);

  delay(3000);
}
