// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo Bob;  // create servo object to control a servo 
   // a maximum of eight servo objects can be created 

Servo Rob;

 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  Bob.attach(9);  // attaches the servo on pin 9 to the servo object 
  Rob.attach(10);  // attaches the servo on pin 10 to the servo object 
} 
 
 
void loop() 
{ 
 Bob.write(0);
 Rob.write(0);
 delay(500);
 Bob.write(40);
 Rob.write(0);
 delay(500);
 Bob.write(80);
 Rob.write(0);
 delay(500);
 Bob.write(120);
 Rob.write(0);
 delay(500);
 Bob.write(160);
 Rob.write(0);
 delay(500);
} 
