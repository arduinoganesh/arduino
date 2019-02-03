int LDR = A0;
void setup() {
Serial.begin(9600);
}

void loop() {
 int val = analogRead(LDR);
 Serial.println(val);
}
