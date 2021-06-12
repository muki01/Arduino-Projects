int sensorPin = A7;                //Sensörü bağlayacağımız pin
int esikDegeri = 100;              //Su miktarı için eşik değeri
int buzzerPin = 3;                 //Buzzerı bağlayacağımız pin
int veri;                          //Sensörden okuduğumuz değer

void setup() {
  pinMode(buzzerPin, OUTPUT);      //Buzzer bağladığımız pini OUTPUT olarak ayarlıyoruz.  
}
void loop() {
  veri = analogRead(sensorPin);    //Sensörden analog veriyi okuyoruz.
  if(veri > esikDegeri){           //Sensör verisi eşik değerini geçerse if içerisindeki kodlar uygulanır.
    tone(buzzerPin, 450);
    delay(100);
    noTone(buzzerPin);
    delay(100);
  }
  else{                            //Sensör verisi eşik değerinden küçük olursa if içerisindeki kodlar uygulanır.
    noTone(buzzerPin);
  }
} 
