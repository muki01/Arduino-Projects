#include "BluetoothSerial.h"

BluetoothSerial ESP_BT; //Object for Bluetooth

int btread;
int LED = 19;

void setup() {
  Serial.begin(9600);
  ESP_BT.begin("ESP32_LED_Control");               //Name of your Bluetooth Signal
  Serial.println("Bluetooth Device is Ready to Pair");

  pinMode (LED, OUTPUT);
}

void loop() {
  
  if (ESP_BT.available()) //Check if we receive anything from Bluetooth
  {
    btread = ESP_BT.read(); //Read what we recevive 
    Serial.print("Received:"); Serial.println(btread);

    if (btread == 49)
        {
        digitalWrite(LED, HIGH);
        ESP_BT.println("LED turned ON");
        }
        
    if (btread == 48)
        {
        digitalWrite(LED, LOW);
        ESP_BT.println("LED turned OFF");
        }     
  }
  delay(20);
}
