#include <Keyboard.h>


int pedalPin1 = 10;
int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(pedalPin1, INPUT_PULLUP);
  digitalWrite(pedalPin1 , 1);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("CTRL");
  //  unsigned long startTime = millis();
  //  while (digitalRead(pedalPin) == LOW)
  //  {
  //    digitalWrite(ledPin, HIGH);
  //  }
  //
  //   duration = millis() - startTime;
  //if (duration > 500)
  //  {
  //    Serial.println("CTRL");
  //    Keyboard.press(KEY_LEFT_CTRL);
  //    delay(100);
  //    Keyboard.releaseAll();
  //
  //  }
  //

  if (digitalRead(pedalPin1) == LOW) {

     Keyboard.press(KEY_LEFT_CTRL);
   //  Keyboard.releaseAll();
     delay(10);
  }
  else
  {
    Keyboard.releaseAll();
    }
    delay(100);
}
