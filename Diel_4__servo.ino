/* Patrik Molnár Diel 4.- Servo*/

#include <Servo.h>

Servo moje_servo;

void setup(){
  moje_servo.attach(6);
}

void loop(){
  for(int x=0; x<180; x++){
    moje_servo.write(x);
    delay(10);
  }
  for(int y=180; y>0; y--){
    moje_servo.write(y);
    delay(10);
  }
}


