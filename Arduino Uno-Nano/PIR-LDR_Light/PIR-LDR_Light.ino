#define led 2
#define pir 3

void setup() {

    pinMode(led,OUTPUT);
    pinMode(pir,INPUT);
    Serial.begin(9600);
}

void loop() {

  int isik = analogRead(A0);
  int pirdurum = digitalRead(pir);
  Serial.println(isik);
  delay(50);

  if(isik < 200){
    if(pirdurum==HIGH)
    digitalWrite(led,HIGH);
    else
    digitalWrite(led,LOW);
  }

  if(isik > 200){
    digitalWrite(led,LOW);
  }

}
