int buzzer = 6;
void setup() {
    pinMode(buzzer,OUTPUT);

}

void loop() {
    int val = analogRead(A0);
    
    digitalWrite(buzzer,HIGH);
    delay(val);
    digitalWrite(buzzer,LOW);
    delay(val);
    
}
