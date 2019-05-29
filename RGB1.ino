int red = 9;
int green = 10;
int blue = 11;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);  
  Serial.begin(9600);
}
void loop() {
      analogWrite(red,225);
      analogWrite(green,17);
      analogWrite(blue,154);
}
