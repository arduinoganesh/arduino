// Clockwise and Anti clockwise Motor rotation  

void setup() {

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  }

void loop() {
   
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
delay(2000);

digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(2000);


digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(2000);
}

