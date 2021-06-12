#include <Joystick.h>
// https://github.com/MHeironimus/ArduinoJoystickLibrary


void setup() {
  Serial.begin(9600);
  // Initialize Button Pins
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);



  // Initialize Joystick Library
  Joystick.begin();
//  Joystick.setXAxisRange(-512, 512);
//  Joystick.setYAxisRange(-512, 512);
}


void loop() {
//  if (analogRead(A0) < 500)
//    {Joystick.setXAxis(analogRead(A0)-512);}
//  else if (analogRead(A0) > 524)
//    {Joystick.setXAxis(analogRead(A0)-511);}
//  else
//    {Joystick.setXAxis(0);}
//
//  if (analogRead(A1) < 500)
//    {Joystick.setYAxis(analogRead(A1)-512);}
//  else if (analogRead(A1) > 524)
//    {Joystick.setYAxis(analogRead(A1)-511);}
//  else
//    {Joystick.setYAxis(0);}

  if (digitalRead(2) == HIGH)
  {Joystick.setButton(0, LOW);}
  else
  {Joystick.setButton(0, HIGH);}

// JOYSTICK !!!!!!!!!----------------------------------------------------------
  if (digitalRead(3) == HIGH && digitalRead(7) == HIGH)
  {Joystick.setXAxis(0);} 
  if (digitalRead(3) == LOW)
  {Joystick.setXAxis(128);}
  if (digitalRead(7) == LOW)
  {Joystick.setXAxis(-127);}

  if (digitalRead(4) == HIGH)
  {Joystick.setButton(2, LOW);}
  else
  {Joystick.setButton(2, HIGH);}

  if (digitalRead(5) == HIGH)
  {Joystick.setButton(3, LOW);}
  else
  {Joystick.setButton(3, HIGH);}

  if (digitalRead(6) == HIGH)
  {Joystick.setButton(4, LOW);}
  else
  {Joystick.setButton(4, HIGH);}

  if (digitalRead(8) == HIGH)
  {Joystick.setButton(6, LOW);}
  else
  {Joystick.setButton(6, HIGH);}

  if (digitalRead(9) == HIGH)
  {Joystick.setButton(7, LOW);}
  else
  {Joystick.setButton(7, HIGH);}

  if (digitalRead(10) == HIGH)
  {Joystick.setButton(8, LOW);}
  else
  {Joystick.setButton(8, HIGH);}

   if (digitalRead(14) == HIGH)
  {Joystick.setButton(9, LOW);}
  else
  {Joystick.setButton(9, HIGH);}

  if (digitalRead(15) == HIGH)
  {Joystick.setButton(1, LOW);}
  else
  {Joystick.setButton(1, HIGH);}

  if (digitalRead(16) == HIGH)
  {Joystick.setButton(11, LOW);}
  else
  {Joystick.setButton(11, HIGH);}
 
  if (digitalRead(A3) == HIGH)
  {Joystick.setButton(12, LOW);}
  else
  {Joystick.setButton(12, HIGH);}
  
  delay(10);
}
