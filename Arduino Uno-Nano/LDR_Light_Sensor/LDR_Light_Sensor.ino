#define buz 11

void setup() {
    pinMode(buz,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  int isik = analogRead(A0);
  Serial.println(isik);
  delay(50);

  if(isik < 400){
    tone(buz,600);
    delay(200);
    noTone(buz);
    delay(200);
  }
  else
  noTone(buz);
}
