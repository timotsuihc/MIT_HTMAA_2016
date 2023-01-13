/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

  int x = 1;
  
void setup() {
  Serial.begin(9600);

}

// the loop function runs over and over again forever
void loop() {

  Serial.write("A");
  delay(20);
  Serial.write(":");
  delay(20);
  Serial.write(59);
  delay(20);
  Serial.write(99);
  delay (940);
  x ++ ;
  
  
}

