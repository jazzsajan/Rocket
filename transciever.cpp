//transciever code
#include <SoftwareSerial.h>

SoftwareSerial hc12(10, 11); // RX, TX pins for HC-12 module
int data = 5;

void setup() {
  hc12.begin(9600); // HC-12 default baud rate
}

void loop() {
  hc12.write(data); // sends the data over HC-12
  delay(1000); // delay 1 second before sending next data
  data++; // increments the data for next send
}


//send data
