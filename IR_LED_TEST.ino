#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

#define BUTTON_1 0x1FE50AF
#define BUTTON_2 0x1FED827
#define BUTTON_3 0x1FEF807
#define BUTTON_4 0x1FE30CF
#define BUTTON_0 0x1FEE01F
#define BUTTON_OFF 0x1FE48B7

int LED1 = 7;
int LED2 = 6;
int LED3 = 5;
int LED4 = 4;

byte fl1 = 0;
byte fl2 = 0;
byte fl3 = 0;
byte fl4 = 0;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4,OUTPUT);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  
  irrecv.enableIRIn();
}
void loop() {

  if (irrecv.decode(&results))
  {
    if (results.value == BUTTON_1)
    {
      if(fl1==0)
      {
          digitalWrite(LED1, LOW);
          fl1= 1;
      }
      else {
          digitalWrite(LED1, HIGH);
          fl1= 0;  
      }
    }
    if (results.value == BUTTON_2)
    {
      if(fl2==0)
      {
          digitalWrite(LED2, LOW);
          fl2= 1;
      }
      else {
          digitalWrite(LED2, HIGH);
          fl2= 0;  
      }
    }
    if (results.value == BUTTON_3)
    {
     if(fl3==0)
      {
          digitalWrite(LED3, LOW);
          fl3= 1;
      }
      else {
          digitalWrite(LED3, HIGH);
          fl3= 0;  
      }
    }
    if (results.value == BUTTON_4)
    {
      if(fl4==0)
      {
          digitalWrite(LED4, LOW);
          fl4= 1;
      }
      else {
          digitalWrite(LED4, HIGH);
          fl4= 0;  
      }
    }
    if (results.value == BUTTON_0)
    {
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
        fl1 = 0;
        fl2 = 0;
        fl3 = 0;
        fl4 = 0;
    }
     if (results.value == BUTTON_OFF)
    {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
        fl1 = 1;
        fl2 = 1;
        fl3 = 1;
        fl4 = 1;
    
    }
    irrecv.resume();
  }
}
