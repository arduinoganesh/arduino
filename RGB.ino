int red = 9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);  
  Serial.begin(9600);
  
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
}

void loop() {
  char ch;
  if(Serial.available()>0)
  {
      ch = Serial.read();
      switch(ch)
      {
          case 'r':  digitalWrite(red,HIGH);
                     digitalWrite(green,LOW);
                     digitalWrite(blue,LOW);
                     break;
          case 'g':  digitalWrite(red,LOW);
                     digitalWrite(green,HIGH);
                     digitalWrite(blue,LOW);
                     break;  
          case 'b':  digitalWrite(red,LOW);
                     digitalWrite(green,LOW);
                     digitalWrite(blue,HIGH);
                     break;
          case 's':  digitalWrite(red,LOW);
                     digitalWrite(green,LOW);
                     digitalWrite(blue,LOW);
                     break;
      }  
    
  }
 
}
