//#include <SoftwareSerial.h>
#include <CapacitiveSensor.h>



CapacitiveSensor   cs= CapacitiveSensor(3,2);        // 1 megohm resistor between pins 2 & 3, pin 2 is sensor pin, add wire, foil
//SoftwareSerial mySerial(-1, 7); // RX, TX

int l;
int sense;
int d;
int light;
int t;
int mode;


void setup() {
  // put your setup code here, to run once:
  
  cs.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate

   pinMode(1, OUTPUT);
   pinMode(8, OUTPUT);
   mode = (-5);
   
 // mySerial.begin(4800);

}

void loop() {
  // put your main code here, to run repeatedly:

//------------------------------------------------------------------
    l = sense;
    sense =  cs.capacitiveSensor(30);
    d = ( sense - l );
    delay (5);
   // mySerial.print( abs (d));                  // print sensor output 1
  //  mySerial.print("\n");
//------------------------------------------------------------------

  

  
if ( d > 500 ) {

    mode = mode *(-1) ;
}


if (mode > 0) {

 t++;  
 
}

if ((mode > 0) && ( t > 10)) {

          
          digitalWrite(8, HIGH);
          digitalWrite(1, HIGH);
          delay (((light)/70)* ((light)/70) );
          digitalWrite(1, LOW);
          delay (10);
          light++;

         
}

if (mode < 0) {

  
  digitalWrite(8, LOW);
  t = 0;
  light = 0;
    
     
}

}
