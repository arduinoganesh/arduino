int LDR = A0;
int LED = 2;
int BUZZER = 3;
void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(BUZZER,OUTPUT);
}

void loop() {
 int val = analogRead(LDR);
 Serial.println(val);

 if(val >= 200)
 {
  Serial.println("Burgler Detected !! Raising Alarm....");
  digitalWrite(BUZZER,HIGH);
  digitalWrite(LED,HIGH);
  delay(5000);
  }
  else 
  {
  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,LOW);
  }
  delay(100);
}
