void setup()
{
    pinMode(D10, OUTPUT);
}

void loop()
{
  delay(500);
    digitalWrite(D10, HIGH);
    tone(14, 494, 500);
  delay(500);
  digitalWrite(D10, LOW);
}
