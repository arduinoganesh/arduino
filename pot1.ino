void setup() {
  Serial.begin(9600);
pinMode(2,OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  if(val>500)
  {
    digitalWrite(2,HIGH);
    Serial.println("Alert!!!");
  }
   else
      digitalWrite(2,LOW);
  delay(100);
}
