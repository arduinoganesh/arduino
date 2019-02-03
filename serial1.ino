void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.println("Welcome Mr Ganesh!! ");
}

void loop() {
    if(Serial.available()>0)
    {
      char ch = Serial.read();
      switch(ch) {
          case 'a':  digitalWrite(2,HIGH);   Serial.println("LED 1 ON");break;
          case 'b':  digitalWrite(2,LOW);   break;
          case 'c':  digitalWrite(3,HIGH);   break;
          case 'd':  digitalWrite(3,LOW);   break;
          case 'e':  digitalWrite(4,HIGH);   break;
          case 'f':  digitalWrite(4,LOW);   break;
          case 'g':  digitalWrite(5,HIGH);   break;
          case 'h':  digitalWrite(5,LOW);   break;
      }
  }
}
