#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK D6
#define DIO D5
#define buzzer D0

#define red D3
#define yellow D2
#define green D1

TM1637Display display(CLK, DIO);

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sayi = 15;
  int n=0;
  display.setBrightness(7);
  while(n<sayi)
  {
    sayi--;
    delay(1000);
    display.showNumberDec(sayi, false);
    Serial.print(sayi);
    if(sayi<16 && sayi>3)
    {
      digitalWrite(green,HIGH);
      digitalWrite(red,LOW);
      }
    if(sayi<4 && sayi>0)
    {
      digitalWrite(green,LOW);
      digitalWrite(yellow,HIGH);
      tone(buzzer,400);
      }
    if(sayi==0){
      digitalWrite(yellow,LOW);
      digitalWrite(red,HIGH);
      tone(buzzer,0);
      sayi = 15;
      while(n<sayi){
      sayi--;
    delay(1000);
    display.showNumberDec(sayi, false);
    if(sayi<4)
    {
      digitalWrite(red,LOW);
      digitalWrite(yellow,HIGH);
      }
      if(sayi==0)
    {
      digitalWrite(green,HIGH);
      digitalWrite(yellow,LOW);
      }
    }
    }
    
}
}
