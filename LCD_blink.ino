// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //(RS,EN,D4,D5,D6,D7)

void setup() {
  
   // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):

  lcd.setCursor(0,0); //(colum, row)
  lcd.print("GANESH ATTARDE");
 
  lcd.setCursor(0,1);
  lcd.print("SITRC Nashik"); 
  lcd.print((char)223); // to print degree symbol 
  lcd.blink();  //last bit blinking
   
  lcd.noDisplay(); //display OFF
  delay (1000);
  lcd.display(); //display ON
  delay (1000);
}

