int ledPin = 13;      // LED pin on arduino
int detectorPin = 2;  // obstacle avoidance sensor interface
int val;              // variable to store result

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(detectorPin, INPUT); 
}

void loop()
{
  val = digitalRead(detectorPin);
  if(val == LOW) 
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
}
