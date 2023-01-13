
#include <LiquidCrystal.h>


LiquidCrystal lcd(5, 4, 3, 2, 1, 0);
int x = 0;

void setup()
{
  lcd.begin(16, 2);
  
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  x++;
  lcd.print(x);
  delay (100);
  lcd.clear();
  delay (100);

}
