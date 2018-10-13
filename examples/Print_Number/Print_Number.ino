#include <se7enDisp.h>
se7enDisp ssd(4,5,6,7,8,9,10); // connection pins
int incomingNum;

void setup() {
  Serial.begin(9600);
  ssd.setCathode();
  // ssd.setAnode();
}

void loop() {
  if (Serial.available() > 0) {
    incomingNum = Serial.read() - '0'; // byte to decimal conversion via ascii table
    Serial.println(incomingNum);
    ssd.printNum(incomingNum);
    // first parameter : number to print on display
  }
}
