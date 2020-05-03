
#include <Servo.h> 

int servoPin = 3,servopin2=4,servopin3=5;; 
// Create a servo object 
Servo Servo1; 
Servo Servo2;
Servo Servo3;
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Servo2.attach(servopin2);
   Servo3.attach(servopin3);
}
void loop(){ 
   // Make servo go to 0 degrees 
   Servo1.write(90); 
   delay(1500); 
   // Make servo go to 90 degrees 
   Servo2.write(135); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo3.write(0); 
   delay(2000); 
    Servo2.write(90); 
   delay(1000); 
    Servo1.write(160); 
   delay(1500); 
    Servo3.write(180); 
   delay(2000); 
 
   

}


