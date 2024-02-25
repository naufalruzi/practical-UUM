// C++ code
//
#include <Servo.h>

int suis = 0;

Servo servo_7;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  servo_7.attach(7, 500, 2500);
  pinMode(11, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);

  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  servo_7.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
}

void loop()
{
  suis = digitalRead(11);
  delay(100); // Wait for 100 millisecond(s)
  Serial.println(suis);
  if (suis == 0) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    tone(4, 523, 1000); // play tone 60 (C5 = 523 Hz)
    delay(1000); // Wait for 1000 millisecond(s)
    servo_7.write(90);
    delay(5000); // Wait for 5000 millisecond(s)
    servo_7.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}
