void setup() {
  Serial.begin(9600);
  for(int i=2;i<=5;i++)
  {
      pinMode(i,OUTPUT);
      digitalWrite(i,LOW);  
  }

}

void loop() {
  int val = analogRead(A0);
  Serial.print(val);
  Serial.print("  ");

  int v = map(val,0,1023,1,5);

  Serial.println(v);
  delay(200);

  switch(v)
  {
    case 1: digitalWrite(2,LOW);
            digitalWrite(3,LOW);
            digitalWrite(4,LOW);
            digitalWrite(5,LOW);
            break;
    case 2:  digitalWrite(2,HIGH);
            digitalWrite(3,LOW);
            digitalWrite(4,LOW);
            digitalWrite(5,LOW);
            break;
    case 3:  digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,LOW);
            digitalWrite(5,LOW);
            break;
    case 4:  digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,LOW);
            break;
    case 5:  digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(5,HIGH);
            break;

    
    }
  
}
