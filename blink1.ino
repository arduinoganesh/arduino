void setup() {
 for(int led=2;led<=5;led++)
   { 
      pinMode(led,OUTPUT);
      digitalWrite(led,LOW);
   }
}
void loop() {
  for(int led=2;led<=5;led++)  // Left to Right
   { 
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
   }
   for(int led=4;led>=3;led--)  // Right to Left
   { 
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
   }
 }
