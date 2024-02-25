int LED[7] = {7,8,9,10,11,12,13};

void setup() {
//  pinMode(7,OUTPUT);
//  pinMode(8,OUTPUT);
//  pinMode(9,OUTPUT);
//  pinMode(10,OUTPUT);
//  pinMode(11,OUTPUT);
//  pinMode(12,OUTPUT);
//  pinMode(13,OUTPUT);

  for (int x=0;x<7;x++)
  {
    pinMode(LED[x],OUTPUT);
  }
}

void loop() {
//  digitalWrite(7,HIGH);
//  delay(500);
//  digitalWrite(8,HIGH);
//  delay(500);
//  digitalWrite(9,HIGH);
//  delay(500);
//  digitalWrite(10,HIGH);
//  delay(500);
//  digitalWrite(11,HIGH);
//  delay(500);
//  digitalWrite(12,HIGH);
//  delay(500);
//  digitalWrite(13,HIGH);
//  delay(500);
//  digitalWrite(7,LOW);
//  delay(500);
//  digitalWrite(8,LOW);
//  delay(500);
//  digitalWrite(9,LOW);
//  delay(500);
//  digitalWrite(10,LOW);
//  delay(500);
//  digitalWrite(11,LOW);
//  delay(500);
//  digitalWrite(12,LOW);
//  delay(500);
//  digitalWrite(13,LOW);
//  delay(500);

  for (int x=0;x<7;x++)
  {
  digitalWrite(LED[x],HIGH);
  delay(500);
  }
  for (int x=0;x<7;x++)
  {
  digitalWrite(LED[x],LOW);
  delay(500);
  }
}
