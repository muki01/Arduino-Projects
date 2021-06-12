#define lm35Pin A0
#define led D5
#define buzzer D6
int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik = 0;

void setup() 
{
 
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  okunan_deger = analogRead(lm35Pin);
  sicaklik_gerilim = (okunan_deger / 1023.0)*5000;
  sicaklik = sicaklik_gerilim /10.0; 
  Serial.println(sicaklik);
  

  if(sicaklik >= 40){
    digitalWrite(led,HIGH);
    tone(buzzer,450);
    delay(300);
    digitalWrite(led,LOW);
    noTone(buzzer);
    delay(300);
  }
  else{

    digitalWrite(led,LOW);
    noTone(buzzer);
    
    
  }
}
