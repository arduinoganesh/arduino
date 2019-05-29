void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    int val = analogRead(A0);
    Serial.print("LDR Value = ");
    Serial.println(val);
    if(val<=50)
    {
        digitalWrite(13,LOW);
        digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW);
    } 
    else if(val<=100)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,LOW);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     } 
     else if(val<=150)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     } 
     else if(val<=200)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     }  
     else if(val<=250)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     } 
     else if(val<=300)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     }   
     else if(val<=350)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(7,LOW);
        digitalWrite(6,LOW); 
      
     }  
      else if(val<=400)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(6,LOW); 
      
     }  
     else if(val<=450)           
    {
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
        digitalWrite(11,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(6,HIGH); 
      
     }  
    delay(500);
    
}
