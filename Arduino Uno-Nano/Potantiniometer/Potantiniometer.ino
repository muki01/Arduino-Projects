#include <TM1637Display.h>
#define CLK D6
#define DIO D5
TM1637Display display(CLK, DIO);

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(D1,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
  x = map(x,0,1023,0,6);
  analogWrite(D1, x);
  Serial.print(x);
  Serial.println("");
  display.setBrightness(7);
  display.showNumberDec(x, false);
}
