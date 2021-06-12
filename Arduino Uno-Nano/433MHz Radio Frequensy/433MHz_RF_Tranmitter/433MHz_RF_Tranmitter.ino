#include <RH_ASK.h>
#include <SPI.h>

RH_ASK rf_driver;

void setup() {
  rf_driver.init();
}

void loop() {
  const char *msg = "Hello World";
  rf_driver.send((uint8_t *)msg, strlen(msg));
  rf_driver.waitPacketSent();
  delay(200);
}
