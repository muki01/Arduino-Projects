#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#define BUTON 0x807F00FF
#define BUTONN 0xFF6897



int recvpin = 13;

int led1 = 5;

IRrecv irrecv(recvpin);

decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  
  pinMode(led1, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    serialPrintUint64(results.value, HEX);
    Serial.println("");       
    
    if (results.value == BUTON)
    {
      digitalWrite(led1, !digitalRead(led1));

      if(digitalRead(led1) == HIGH)
      Serial.print("Led yandi - ");
      else
      Serial.print("Led sondu - ");
    }
    if (results.value == BUTONN)
    {
      digitalWrite(led1, !digitalRead(led1));

      if(digitalRead(led1) == HIGH)
      Serial.print("Led yandi - ");
      else
      Serial.print("Led sondu - ");
    }
    delay(500);
    irrecv.resume();
  }
}
