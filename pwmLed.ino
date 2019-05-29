void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
}
void loop() {
  int i;
  for(i=0;i<=255;i+=5)
  {
        analogWrite(11,i);
        analogWrite(10,i);
        analogWrite(9,i);
        analogWrite(6,i);
        delay(50);  
  }
}
