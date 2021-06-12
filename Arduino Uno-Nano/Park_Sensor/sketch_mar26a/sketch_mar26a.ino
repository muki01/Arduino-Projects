#include <Ultrasonic.h>
Ultrasonic ultrasonic(3,2);// 6 trig , 5 echo

const int buzzer = 11; // pin buzzer

void setup(){
 pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop(){
 int dist = ultrasonic.distanceRead();
 if (dist>40){
 noTone(buzzer);}
if (dist < 41 && dist>10) {
  tone(buzzer,1000);
     delay(40);
   noTone(buzzer);
     delay(dist*4);
   }
   if(dist<11){
    tone(buzzer,1000);
   }
   delay(10);
 Serial.println(dist); 
} 
