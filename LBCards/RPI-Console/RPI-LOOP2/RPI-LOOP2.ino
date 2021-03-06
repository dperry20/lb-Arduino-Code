/////////////////////////////////////////////////////////////////////////
// RPI-LOOP2 - Receive a character and return character
/////////////////////////////////////////////////////////////////////////

#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3); // RX, TX

/////////////////////////////////////////////////////////////////////////
// setup() - Hit reset on the sensor shield to run
/////////////////////////////////////////////////////////////////////////

void setup() 
{
  mySerial.begin(9600);
  mySerial.println("The quick brown fox jumped over the lazy dog");
  mySerial.println("0123456789");
  mySerial.println("asdfghjkl");
  mySerial.println("Hit keys to test");
}

/////////////////////////////////////////////////////////////////////////
// loop()
/////////////////////////////////////////////////////////////////////////

void loop()
{
  if (mySerial.available() > 0)
  {
    mySerial.write(mySerial.read());
  }
}

