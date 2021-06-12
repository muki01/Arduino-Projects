#include <virtuabotixRTC.h>  
virtuabotixRTC saat(6,7,8);   //clk=6  dat=7 rst=8

void setup() {
  Serial.begin(9600);
  //saat.setDS1302Time(55, 48, 01, 2, 23, 03, 2021);
  
}

void loop() {
  saat.updateTime();                                   //RTC'den zamanı okuyoruz
  Serial.print(saat.dayofmonth);
  Serial.print("/");
  Serial.print(saat.month);
  Serial.print("/");
  Serial.print(saat.year);
  Serial.print("/");
  Serial.print(saat.hours);
  Serial.print("/");
  Serial.print(saat.minutes);
  Serial.print("/");
  Serial.println(saat.seconds);
  delay(1000);
}
