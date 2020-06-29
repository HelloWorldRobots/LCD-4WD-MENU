/* Created By Akshat Sharma. Modified at 6/29/2020 */
/* This, is for LCD without any pot. (Incase you were wondering).. */

#include <LiquidCrystal.h> 
const int ButtonPin = 2;
int ButtonState; 
int Contrast=0;
LiquidCrystal lcd(5, 8, 10, 11, 12, 13);

void setup() {
  analogWrite(6, Contrast);
  pinMode(ButtonPin, INPUT_PULLUP);
   lcd.begin(16,2);
  program();
  
  

}

void loop() {
 

}

void program(){
  String start[] = {"Following Mode", "Obstacle Avoider", "Maze Mode", "Manual Mode"};
  lcd.print("Select the mode");
  delay(1000);
  lcd.clear();
  for(int i = 0; i < 4; i++){

    lcd.begin(16,2);
    lcd.print(start[i]);
    delay(2500);
    int ButtonState = digitalRead(ButtonPin);
    if(ButtonState == LOW){
      lcd.clear();
      delay(500);
      lcd.print("Setting it up...");
      delay(500);
      lcd.clear();
      lcd.print("Set to " + start[i]);
      delay(670);
      lcd.clear();
 
      for(int o = 5; o > 0; o--){
      lcd.clear();
      lcd.print("Starting...");
      delay(1000);
      }
      /*if( i == 1){
        // Do.. Following Mode
        
      }
      if( i == 2){
        // Do.. Obstacle Avoider
        
      }
      if( i == 3){
        // Do.. Maze Mode
        
      }
      if( i == 4){
        // Do.. Manual Mode
        
      }
      */
      lcd.clear();
      lcd.print(start[i]);
      break;
    }
    lcd.clear();
    delay(500);
    
    
  }
}
