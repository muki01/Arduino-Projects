#define trigPin D5
#define echoPin D6
#define buzzer D7

int maximumRange = 53;
long duration, distance;

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
Adafruit_SSD1306 display(128, 64, &Wire);

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(5, 2);

  display.print("Distance = ");
  display.print(distance);
  display.print(" cm");
  display.display();

  if (distance > 50)
    noTone(buzzer);
  if (distance < 51 && distance > 35) {
    tone(buzzer, 1800);
    delay(40);
    noTone(buzzer);
    delay(200);
  }
  if (distance < 36 && distance > 25) {
    tone(buzzer, 1800);
    delay(40);
    noTone(buzzer);
    delay(70);
  }
  if (distance < 26)
    tone(buzzer, 1800);

  delay(100);
}
