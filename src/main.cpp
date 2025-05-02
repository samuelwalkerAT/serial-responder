#include <Arduino.h>
int baudrate = 9600;
void setup()
{
  Serial.begin(baudrate);

  Serial.print("Ready, baudrate: ");
  Serial.println(baudrate);
  delay(100);
}

void loop()
{
  if (Serial.available() > 0)
  {
    // IF ANY MESSAGE COMES THROUGH SAY OK ONC
    if (Serial.readStringUntil('\n'))
    {

      Serial.println("ok");
      delay(100);
    }
  }
}