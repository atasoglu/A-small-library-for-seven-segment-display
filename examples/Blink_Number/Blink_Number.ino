#include <se7enDisp.h>
se7enDisp ssd(4,5,6,7,8,9,10); // connection pins

void setup() {
  ssd.setCathode();
  // ssd.setAnode();
}

void loop() {
  ssd.blinkNum(5,3);
  // first parameter : number
  // second parameter : iteration
  // third parameter : delaying time (default value: 1000)
  delay(500);
}
