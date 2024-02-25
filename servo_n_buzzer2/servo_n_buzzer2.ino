#include <Servo.h>
int button = 0;
Servo servo; // create servo object to control a servo
void setup() {
  servo.attach(7);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(11,INPUT_PULLUP);
}

void loop() {
//  servo.write(180);
//  delay(200);
//  tone(4,5000);
//  digitalWrite(12,HIGH);
//  delay(200);
//  servo.write(0);
//  noTone(4);
//  digitalWrite(12,LOW);
//  delay(200);

  button = digitalRead(11);
  
  if (button==1){
    servo.write(90);
    delay(200);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    tone(4,5000);
  }
  else{
    servo.write(0);
    noTone(4);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(200);
  }
}
