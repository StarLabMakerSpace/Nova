 /*
Nova_Button

Serial port will print "Button Press",When the button pressed.

Created 15 Dec 2015
By Blue

https://github.com/StarLabMakerSpace/Nova/wiki
*/

#include <Nova.h>

Button button = Button(S0); // A0、A1、A2、A3、S0、S1、S2、S3 

void setup() {
Serial.begin(9600);
}

void loop() {

  if(button.state() == true)
  {
    Serial.println("Button Pressed");
  }
}
