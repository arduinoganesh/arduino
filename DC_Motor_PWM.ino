void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  }

void loop() {
   int sensorValue = analogRead(A0);
   int percent= map(sensorValue,0,1023,0,100); //anolog value mapping

Serial.println(percent);
//analogWrite(2,percent);   // PWM for speed control 
{
   if (percent >= 30)
   {                  //motor rotate 
digitalWrite(8,HIGH);
digitalWrite(9,LOW);

   }
else  // both input high motor stop
{
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);

}
   }
/*
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(2000);
*/
}

