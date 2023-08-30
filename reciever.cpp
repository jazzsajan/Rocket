#include <SoftwareSerial.h>

SoftwareSerial hc12(10, 11); // RX, TX pins for HC-12 module
int data = 0;

void setup() {
  Serial.begin(9600); // Serial monitor baud rate
  hc12.begin(9600); // HC-12 default baud rate
}

void loop() {
  if (hc12.available()) { // checks if there's data received from HC-12
    data = hc12.read(); // reads the received data
    Serial.println(data); // prints the received data on Serial monitor
  }
}

//recieve data
