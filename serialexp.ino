void setup() {
  pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  char ch;
      if(Serial.available()>0)   //if Serial data available?
      {
          ch= Serial.read();  //if yes, read data in ch variable
          switch(ch)
           {
                case 'a': digitalWrite(11,HIGH); // LED ON
                          Serial.println("Tubelight ON");
                          break;
                case 'b': digitalWrite(11,LOW); //LED OFF
                          Serial.println("Tubelight OFF");
                          break;
                case 'c': digitalWrite(10,HIGH); // LED ON
                          Serial.println("FAN ON");
                          break;
                case 'd': digitalWrite(10,LOW); //LED OFF
                          Serial.println("FAN OFF");
                          break;
           } 
      }    
}
