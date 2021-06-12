#include "pitches.h"   
#define O1 000          
                                                                                        

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

  int noteDurations[] =                          
  {  
  8, 8, 8, 8, 8, 8, 8, 8,  
  8, 8, 8, 8, 8, 8, 8, 8,   
  8, 8, 8, 8, 8, 8, 8, 8,   
  8, 8, 8, 8, 8, 8, 8, 8,   
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
  

  int Canonlength;                          
  int Marioplength;                


void setup() {             
pinMode(D1, OUTPUT);                                         
Canonlength=sizeof(CanonTone)/sizeof(CanonTone[0]);          
Marioplength=sizeof(MarioTone)/sizeof(MarioTone[0]); 
}

void loop() {

//-------------------------CANON--------------------------------------- 

    
    for (int thisNote=0; thisNote <Canonlength; thisNote++)
    {
      int noteDuration = 1800/noteDurations[thisNote];
      tone(D1, CanonTone[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
    }
   
  delay(3000);

//-------------------------MARIO---------------------------------------  


   for (int thisNote = 0; thisNote < Marioplength; thisNote++)
   {
    int MarioDuration = 1000 / MarioDurations[thisNote];
    tone(D1, MarioTone[thisNote], MarioDuration);
    int pauseBetweenNotes = MarioDuration * 1.30;
    delay(pauseBetweenNotes);
   }
    delay(3000);                                      
}
