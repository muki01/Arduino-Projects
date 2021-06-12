#include "pitches.h"          
                                                                                        

  int CanonTone[] = {                                                                                                         
   NOTE_E3, NOTE_G4, NOTE_C5, NOTE_E5, NOTE_B2, NOTE_G4, NOTE_B4, NOTE_D5,  
   NOTE_C3, NOTE_E4, NOTE_A4, NOTE_C5, NOTE_G2, NOTE_E4, NOTE_G4, NOTE_B4,  
   NOTE_A2, NOTE_C4, NOTE_F4, NOTE_A4, NOTE_E1, NOTE_C4, NOTE_E4, NOTE_G4,  
   NOTE_A2, NOTE_D4, NOTE_F4, NOTE_A4, NOTE_B2, NOTE_D4, NOTE_G4, NOTE_B4,  
   NOTE_E3, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5,   
   NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_G4,   
   NOTE_F4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4,   
   NOTE_F4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,  
   NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,  
   NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C5, NOTE_B4, NOTE_C5,  
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5,  
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4,  
   NOTE_C5,0 };


  int MarioTone[] =                                                                                                                
  {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_G4,
  NOTE_G3,
  NOTE_C4, NOTE_G3, NOTE_E3, NOTE_A3, NOTE_B3, NOTE_AS3,
  NOTE_A3, NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_F4,
  NOTE_G4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_B3,
  NOTE_C4, NOTE_G3, NOTE_E3, NOTE_A3, NOTE_B3, NOTE_AS3,
  NOTE_A3, NOTE_G3, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_F4,
  NOTE_G4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_B3,
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_GS3,
  NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_G4,
  NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_C5, NOTE_C5,
  NOTE_C5,
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_GS3,
  NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_DS4,
  NOTE_D4, NOTE_C4,
  NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_C4, NOTE_A3, NOTE_G3, NOTE_C4, NOTE_C4, NOTE_C4,
  NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_C4, NOTE_A3, NOTE_G3
  }; 


  int CoffTone[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_G5,
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5
 };

  int noteDurations[] =                          
  {  
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 
  8, 8, 8, 8,   
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  8,16,16,8,16,16,16,16,16,16,16,16,16, 16,  
  1 
  };  



  int MarioDurations[] =                       
  {
  8, 4, 4, 8, 4, 2, 2,
  3, 3, 3, 4, 4, 8, 4, 8, 8, 8, 4, 8, 4, 3, 8, 8, 3,
  3, 3, 3, 4, 4, 8, 4, 8, 8, 8, 4, 8, 4, 3, 8, 8, 2,
  8, 8, 8, 4, 4, 8, 8, 4, 8, 8, 3, 8, 8, 8, 4, 4, 4, 8, 2,
  8, 8, 8, 4, 4, 8, 8, 4, 8, 8, 3, 3, 3, 1,
  8, 4, 4, 8, 4, 8, 4, 8, 2, 8, 4, 4, 8, 4, 1,
  8, 4, 4, 8, 4, 8, 4, 8, 2
  };



  int CoffDurations[] = {
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,
  };
  
  const int ledPin1 = 16;
  const int ledPin2 = 2;


void setup() {             
  pinMode(11, OUTPUT);   
  pinMode(16,OUTPUT);
  pinMode(2,OUTPUT);
  digitalWrite(16, LOW);
  digitalWrite(2, LOW);                               
}

void loop() {

//-------------------------CANON--------------------------------------- 

    
    for (int thisNote=0; thisNote <145; thisNote++)
    {
      int noteDuration = 1800/noteDurations[thisNote];
      tone(11, CanonTone[thisNote], noteDuration);
      LEDon();
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(11);
      LEDoff();
    }
   
  delay(3000);

//-------------------------MARIO---------------------------------------  


   for (int thisNote = 0; thisNote < 98; thisNote++)
   {
    int MarioDuration = 1000 / MarioDurations[thisNote];
    tone(11, MarioTone[thisNote], MarioDuration);
    LEDon();
    int pauseBetweenNotes = MarioDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(11);
      LEDoff();
   }
    delay(3000);  

//-------------------------COFFIN---------------------------------------

   for (int thisNote = 0; thisNote < 102; thisNote++) 
   {
    int noteDuration = 750 / CoffDurations[thisNote];
    tone(11, CoffTone[thisNote], noteDuration);
    LEDon();
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(11);
      LEDoff();
  }
  delay(3000);




  tone(11, 587, 450.0);
    delay(375);
    tone(11, 554, 337.5);
    delay(375);
    tone(11, 493, 112.5);
    delay(125);
    tone(11, 440, 675.0);
    delay(750);
    tone(11, 391, 225.0);
    delay(250);
    tone(11, 369, 450.0);
    delay(500);
    tone(11, 329, 450.0);
    delay(500);
    tone(11, 293, 675.0);
    delay(750);
    tone(11, 440, 225.0);
    delay(250);
    tone(11, 493, 670.3125);
    delay(750);
    tone(11, 493, 225.0);
    delay(250);
    tone(11, 554, 670.3125);
    delay(750);
    tone(11, 554, 225.0);
    delay(250);
    tone(11, 587, 670.3125);
    delay(750);
    tone(11, 587, 220.3125);
    delay(250);
    tone(11, 587, 225.0);
    delay(250);
    tone(11, 554, 225.0);
    delay(250);
    tone(11, 493, 225.0);
    delay(250);
    tone(11, 440, 220.3125);
    delay(250);
    tone(11, 440, 337.5);
    delay(375);
    tone(11, 391, 112.5);
    delay(125);
    tone(11, 369, 225.0);
    delay(250);
    tone(11, 587, 220.3125);
    delay(250);
    tone(11, 587, 225.0);
    delay(250);
    tone(11, 554, 225.0);
    delay(250);
    tone(11, 493, 225.0);
    delay(250);
    tone(11, 440, 220.3125);
    delay(250);
    tone(11, 440, 337.5);
    delay(375);
    tone(11, 391, 112.5);
    delay(125);
    tone(11, 369, 220.3125);
    delay(250);
    tone(11, 369, 220.3125);
    delay(250);
    tone(11, 369, 220.3125);
    delay(250);
    tone(11, 369, 220.3125);
    delay(250);
    tone(11, 369, 220.3125);
    delay(250);
    tone(11, 369, 112.5);
    delay(125);
    tone(11, 391, 112.5);
    delay(125);
    tone(11, 440, 675.0);
    delay(750);
    tone(11, 391, 112.5);
    delay(125);
    tone(11, 369, 112.5);
    delay(125);
    tone(11, 329, 220.3125);
    delay(250);
    tone(11, 329, 220.3125);
    delay(250);
    tone(11, 329, 220.3125);
    delay(250);
    tone(11, 329, 112.5);
    delay(125);
    tone(11, 369, 112.5);
    delay(125);
    tone(11, 391, 675.0);
    delay(750);
    tone(11, 369, 112.5);
    delay(125);
    tone(11, 329, 112.5);
    delay(125);
    tone(11, 293, 225.0);
    delay(250);
    tone(11, 587, 450.0);
    delay(500);
    tone(11, 493, 225.0);
    delay(250);
    tone(11, 440, 337.5);
    delay(375);
    tone(11, 391, 112.5);
    delay(125);
    tone(11, 369, 225.0);
    delay(250);
    tone(11, 391, 225.0);
    delay(250);
    tone(11, 369, 450.0);
    delay(500);
    tone(11, 329, 450.0);


    delay(3000);



    tone(11, 311, 312.4995);    
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 415, 156.24975);
    delay(173);
    tone(11, 466, 156.24975);
    delay(173);
    tone(11, 415, 156.24975);
    delay(173);
    tone(11, 391, 156.24975);
    delay(173);
    tone(11, 349, 312.4995);
    delay(347);
    tone(11, 349, 234.374625);
    delay(260);
    delay(86);
    tone(11, 349, 312.4995);
    delay(347);
    tone(11, 466, 312.4995);
    delay(347);
    tone(11, 466, 156.24975);
    delay(173);
    tone(11, 523, 156.24975);
    delay(173);
    tone(11, 466, 156.24975);
    delay(173);
    tone(11, 415, 156.24975);
    delay(173);
    tone(11, 391, 312.4995);
    delay(347);
    tone(11, 311, 234.374625);
    delay(260);
    delay(86);
    tone(11, 311, 312.4995);
    delay(347);
    tone(11, 523, 312.4995);
    delay(347);
    tone(11, 523, 156.24975);
    delay(173);
    tone(11, 554, 156.24975);
    delay(173);
    tone(11, 523, 156.24975);
    delay(173);
    tone(11, 466, 156.24975);
    delay(173);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 349, 234.374625);
    delay(260);
    delay(86);
    tone(11, 311, 156.24975);
    delay(173);
    tone(11, 311, 156.24975);
    delay(173);
    tone(11, 349, 234.374625);
    delay(260);
    delay(86);
    tone(11, 466, 234.374625);
    delay(260);
    delay(86);
    tone(11, 391, 234.374625);
    delay(260);
    delay(86);
    tone(11, 415, 546.874125);
    delay(607);
    delay(86);
    tone(11, 311, 312.4995);
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 391, 624.999);
    delay(694);
    tone(11, 391, 312.4995);
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 391, 312.4995);
    delay(347);
    tone(11, 349, 312.4995);
    delay(347);
    tone(11, 311, 546.874125);
    delay(607);
    delay(86);
    tone(11, 466, 312.4995);
    delay(347);
    tone(11, 523, 312.4995);
    delay(347);
    tone(11, 466, 312.4995);
    delay(347);
    tone(11, 415, 312.4995);
    delay(347);
    tone(11, 622, 312.4995);
    delay(347);
    tone(11, 311, 312.4995);
    delay(347);
    tone(11, 311, 156.24975);
    delay(173);
    tone(11, 311, 156.24975);
    delay(173);
    tone(11, 349, 234.374625);
    delay(260);
    delay(86);
    tone(11, 466, 234.374625);
    delay(260);
    delay(86);
    tone(11, 391, 234.374625);
    delay(260);
    delay(86);
    tone(11, 415, 546.874125);


    delay(3000);



    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 329, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 493, 1294.962);
    delay(1438);
    tone(11, 349, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 349, 323.7405);
    delay(360);
    tone(11, 293, 323.7405);
    delay(360);
    tone(11, 493, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 329, 1294.962);
    delay(1438);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 329, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 493, 1294.962);
    delay(1438);
    tone(11, 349, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 349, 323.7405);
    delay(360);
    tone(11, 293, 323.7405);
    delay(360);
    tone(11, 493, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 587, 323.7405);
    delay(360);
    tone(11, 523, 1294.962);
    delay(1438);
    tone(11, 440, 320.368203125);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 329, 323.7405);
    delay(360);
    tone(11, 391, 647.481);
    delay(720);
    tone(11, 349, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 349, 323.7405);
    delay(360);
    tone(11, 329, 1294.962);
    delay(1438);
    tone(11, 293, 323.7405);
    delay(360);
    tone(11, 329, 323.7405);
    delay(360);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 493, 320.368203125);
    delay(360);
    tone(11, 493, 320.368203125);
    delay(360);
    tone(11, 493, 647.481);
    delay(720);
    tone(11, 523, 320.368203125);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 493, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 349, 161.87025);
    delay(180);
    tone(11, 293, 809.35125);
    delay(900);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 329, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 523, 323.7405);
    delay(360);
    tone(11, 493, 1294.962);
    delay(1438);
    tone(11, 349, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 349, 323.7405);
    delay(360);
    tone(11, 293, 323.7405);
    delay(360);
    tone(11, 493, 323.7405);
    delay(360);
    tone(11, 440, 323.7405);
    delay(360);
    tone(11, 391, 967.849203125);
    delay(1075);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 161.87025);
    delay(180);
    tone(11, 440, 161.87025);
    delay(180);
    tone(11, 391, 323.7405);
    delay(360);
    tone(11, 587, 323.7405);
    delay(360);
    tone(11, 523, 971.2215);


    delay(3000);



    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 416.6655);
    delay(463);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 416.6655);
    delay(463);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 587, 208.33275);
    delay(230);
    tone(11, 391, 312.499125);
    delay(347);
    tone(11, 440, 104.166375);
    delay(115);
    tone(11, 493, 833.331);
    delay(926);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 523, 312.499125);
    delay(347);
    tone(11, 523, 104.166375);
    delay(115);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 104.166375);
    delay(115);
    tone(11, 493, 104.166375);
    delay(115);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 440, 208.33275);
    delay(230);
    tone(11, 440, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 440, 416.6655);
    delay(463);
    tone(11, 587, 416.6655);
    delay(463);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 416.6655);
    delay(463);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 416.6655);
    delay(463);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 587, 208.33275);
    delay(230);
    tone(11, 391, 312.499125);
    delay(347);
    tone(11, 440, 104.166375);
    delay(115);
    tone(11, 493, 833.331);
    delay(926);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 523, 312.499125);
    delay(347);
    tone(11, 523, 104.166375);
    delay(115);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 208.33275);
    delay(230);
    tone(11, 493, 104.166375);
    delay(115);
    tone(11, 493, 104.166375);
    delay(115);
    tone(11, 587, 208.33275);
    delay(230);
    tone(11, 587, 208.33275);
    delay(230);
    tone(11, 523, 208.33275);
    delay(230);
    tone(11, 440, 208.33275);
    delay(230);
    tone(11, 391, 208.33275);
    delay(230);
    tone(11, 587, 208.33275);
    delay(230);
    tone(11, 783, 208.33275);

    delay(3000);
}

int currentLEDpin=16;
void LEDon()
{
    digitalWrite(currentLEDpin, HIGH);
}

void LEDoff()
{
    digitalWrite(currentLEDpin, LOW);
    if (currentLEDpin==16) currentLEDpin=2;
    else if (currentLEDpin==2) currentLEDpin=16;

}
