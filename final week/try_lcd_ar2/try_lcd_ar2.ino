

#include <SoftwareSerial.h>
#include <LiquidCrystal.h>


// software serial RX TX



LiquidCrystal lcd(5, 4, 3, 2, 1, 0);
int x = 0;

void setup()
{
  lcd.begin(16, 2);

 
}

void loop() {
  // put your main code here, to run repeatedly:

    lcd.print(x);
    delay (300);
   }



