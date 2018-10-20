int ledPin=13;
  int inputPin=2;
  
  int val=0;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(13,OUTPUT);
  pinMode(inputPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(inputPin);
if(val==HIGH)
{
  Serial.print("Motion Detected\n");
  digitalWrite(13,HIGH);
  delay(1000);
}
else
{
Serial.print("Motion Ended\n");
digitalWrite(13,LOW);
delay(1000);
}
}
