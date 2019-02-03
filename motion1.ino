int pir = 7;

void setup() {
  Serial.begin(9600);
 pinMode(pir,INPUT); 
 Serial.println("Motion Sensor Demo");
}
void loop() {
  int pirstatus = digitalRead(pir);

  if(pirstatus == 1)
  {
    Serial.println("Motion Detected!! ");
  }
  else if(pirstatus == 0)
  {
    Serial.println("Motion Not Detected!! ");
  }
}
