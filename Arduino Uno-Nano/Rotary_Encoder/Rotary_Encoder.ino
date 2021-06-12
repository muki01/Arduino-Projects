int switchPin = 12;                        // button pin
int switchState = HIGH;                    // button value
int num =0;
int pinA = 4;                              // Rotary encoder Pin A
int pinB = 3;                              // Rotary encoder Pin B
int pinAstateCurrent = LOW;                // Current state of Pin A
int pinAStateLast = pinAstateCurrent;      // Last read value of Pin A

void setup() {
  Serial.begin (9600);                     // Initialise the serial monitor

  pinMode (switchPin, INPUT_PULLUP);       // Enable the switchPin as input with a PULLUP resistor
  
  pinMode (pinA, INPUT);                   // Set PinA as input
  pinMode (pinB, INPUT);                   // Set PinB as input
  
}

void loop() {

  // BUTTON
  switchState = digitalRead(switchPin);    // Read the digital value of the switch (LOW/HIGH)

  // If the switch is pressed (LOW), print message
  if (switchState == LOW) {
      Serial.println("Switch pressed");
  }
  

  // ROTATION DIRECTION
  pinAstateCurrent = digitalRead(pinA);    // Read the current state of Pin A
  
  // If there is a minimal movement of 1 step
  if ((pinAStateLast == LOW) && (pinAstateCurrent == HIGH)) {
    
    if (digitalRead(pinB) == HIGH) {      // If Pin B is HIGH
      num=num+2;
      Serial.println(num);             // Print on screen
    } else {
      num=num-2;
      Serial.println(num);            // Print on screen
    }
    
  }
  
  pinAStateLast = pinAstateCurrent;        // Store the latest read value in the currect state variable
  
}
