#include <Ultrasonic.h>
Ultrasonic ultrasonic(3,2);// 6 trig , 5 echo


const int buzzer = 11; // pin buzzer

void setup(){
 pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop(){
 int dist = ultrasonic.distanceRead();
  if (dist>50)
  noTone(buzzer);
  if(dist<51 && dist>29){
    tone(buzzer,1000);
    delay(40);
    noTone(buzzer);
    delay(200);
  }
  if(dist<30 && dist>15){
    tone(buzzer,1000);
    delay(40);
    noTone(buzzer);
    delay(100);
  }
  if(dist<16)
  tone(buzzer,1000);
 Serial.println(dist); 
} 
