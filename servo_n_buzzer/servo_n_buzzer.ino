#include <Servo.h>

Servo servo; // create servo object to control a servo
int buzzer = 4;
int button = 11;
int Led1 = 12;
int Led2 = 13;
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  servo.attach(7);// attaches the servo on pin 9 to the servo object
 // servo.write(0);// rotate slowly servo to 0 degrees immediately
  pinMode(buzzer,OUTPUT);
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(button,INPUT);
  int position = 0;
  Serial.begin(9600);
}

void loop() 
{
  // read the state of the pushbutton value:
  buttonState = digitalRead(button);

//  if (digitalRead(button) == LOW) {
//    digitalWrite(Led1, HIGH);
//    digitalWrite(Led2, LOW);
//    digitalWrite(buzzer, HIGH);
//    servo.write(90);
//    
//  }else
//    
//    digitalWrite(Led1, LOW);
//    digitalWrite(Led2, HIGH);
//    digitalWrite(buzzer, LOW);
//    servo.write(0);
//
button = digitalRead(11);

if (button==1){
  digitalWrite(12,HIGH);
  tone(buzzer,500,200);
}
else{
  digitalWrite(12,LOW);
  tone(buzzer,0,0);
}
}
