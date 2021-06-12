#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK D3
#define DIO D4

// The amount of time (in milliseconds) between tests
#define TEST_DELAY   2000

const uint8_t SEG_DONE[] = {
	SEG_A | SEG_B | SEG_E | SEG_F | SEG_G,           // d
	SEG_D | SEG_E | SEG_F,  // O
	SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_G,                        // n
	SEG_B | SEG_C | SEG_D | SEG_F | SEG_G            // E
	};

  const uint8_t SEG_LOL[] = {
  SEG_D | SEG_E | SEG_F,            // d
  SEG_A | SEG_B | SEG_C | SEG_E | SEG_F | SEG_D,
  SEG_D | SEG_E | SEG_F, 
                          
  };


  const uint8_t SEG_FREE[] = {
  SEG_A | SEG_E | SEG_F | SEG_G,            // d
  SEG_E | SEG_G,
  SEG_A | SEG_E | SEG_F | SEG_D | SEG_G,
  SEG_A | SEG_E | SEG_F | SEG_D | SEG_G,                           
  };

TM1637Display display(CLK, DIO);

void setup()
{
}

void loop()
{
  int k=1;
  int sayi=6;
  display.setBrightness(7);

  while(k<sayi)
  {
    sayi--;
    display.showNumberDec(sayi, false); // 
  delay(1000);
    }

  
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, false);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, true);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, false);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, true);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, false);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  display.setBrightness(7, true);  // Turn off
  display.setSegments(SEG_DONE);
  delay(500);
  
   display.setSegments(SEG_LOL);
   delay(TEST_DELAY);
   
   display.setSegments(SEG_FREE);
   delay(TEST_DELAY);

}
