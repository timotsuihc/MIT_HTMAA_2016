#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

LiquidCrystal lcd(5, 4, 3, 2, 1, 0);

SoftwareSerial mySerial(7, -1); // RX, TX

int x;
int h;



void setup() {
  // put your setup code here, to run once:

    pinMode (6, INPUT);
      
    lcd.begin(16, 2);
    mySerial.begin(9600);
      while (!mySerial) {
    ; // wait for serial port to connect. Needed for native USB port only
    }
   
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  h = digitalRead(6);

    lcd.setCursor(7, 1);
    lcd.print (h);
    lcd.setCursor(0, 0);



 



 if (mySerial.available()) {

  
  while (1) {
    
  x = mySerial.read();
  delay(19);

  if ( x > 70 ){
    delay (800);
    lcd.clear();
    break;

  }
    lcd.print(x);

  
  }
}
}
