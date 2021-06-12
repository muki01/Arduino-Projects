#include <BleGamepad.h>
#define BUTTONPIN	35

BleGamepad bleGamepad;

int previousButton1State = HIGH;

void setup() {
  pinMode(BUTTONPIN, INPUT_PULLUP);
  bleGamepad.begin();
}
void loop() {
  if (bleGamepad.isConnected())
  {
    int currentButton1State = digitalRead(BUTTONPIN);
    if (currentButton1State != previousButton1State) {
      if (currentButton1State == LOW)
        bleGamepad.press(BUTTON_1);
      else
        bleGamepad.release(BUTTON_1);
    }
    previousButton1State = currentButton1State;
  }
}
