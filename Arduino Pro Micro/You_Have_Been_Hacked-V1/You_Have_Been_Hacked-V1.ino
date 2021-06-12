#include <Keyboard.h> 
void setup()
{
  Keyboard.begin();
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("iexplore -k https://www.malcare.com/wp-content/uploads/2018/07/Getting-hacked-harmful-website.jpg");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}
void loop() {}
