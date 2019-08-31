#include<Servo.h>

Servo myservo;
void setup() {
   myservo.attach(9);
}

void loop() {
      int potval = analogRead(A0);
      int val = map(potval,0,1023,0,179);
      myservo.write(val);
      delay(50);
}
