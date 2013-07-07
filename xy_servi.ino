// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo bottomservo;  // create servo object to control a servo 
Servo topservo;

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 
int val2;

void setup() 
{ 
  bottomservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  topservo.attach(10);
}

void loop() 
{ 
  val = analogRead(A0);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  val2 = analogRead(A1); 
  val2 = map(val2, 0, 1023, 0, 179);
  bottomservo.write(val);                  // sets the servo position according to the scaled value 
  topservo.write(val2); 
  tone(11,((val*val2)/40)+1,1000);
  delay(15);                           // waits for the servo to get there 
} 
