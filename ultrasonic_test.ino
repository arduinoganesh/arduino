int trigPin = 9;
int echoPin = 10;
long duration;
int distance;

void setup() 
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}
void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  // This is total Duration ie to and fro
 
  // speed of sound = 343 m/s   ie 34300 cm/s
  //speed = dist / time
  // so, distance = speed * time 
  
  distance= (duration*0.0343)/2;    //One side distance = (time * speed)/2 

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}

