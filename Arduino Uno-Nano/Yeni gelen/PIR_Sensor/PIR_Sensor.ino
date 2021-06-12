int pirPin = 8;                   //Sensörü takacağımız pin
int led = 12;                 //Servoyu takacağımız pin
int hareket;                      //Sensörden aldığımız veri

void setup() {
  pinMode(led,OUTPUT);
  pinMode(pirPin, INPUT);         //Sensör pinimizi giriş olarak ayarlyoruz.
}

void loop() {
  hareket = digitalRead(pirPin);  //Sensörden okuma yapıyoruz.
  
  if(hareket == HIGH){            //Hareketlilik var ise içerideki komutlar uygulanır.
    digitalWrite(led,HIGH);
  }
  else{                           //Hareketlilik yok ise içerideki komutlar uygulanır.
    digitalWrite(led,LOW); 
  }
  delay(100);
}
