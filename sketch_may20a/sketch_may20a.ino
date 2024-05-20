#include <Ultrasonic.h>
Ultrasonic sensor = Ultrasonic(11, 10);
void setup() {
  // put your setup code here, to run once:
   pinMode(6,OUTPUT);
   pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dis = sensor.read(); 

  if(dis <= 15){
    digitalWrite(6, LOW);
    digitalWrite(3, HIGH);
    delay(100);
    }
  if(dis > 15){
    digitalWrite(6, HIGH);
    digitalWrite(3, LOW);
    delay(500);
//    digitalWrite(6, LOW);
//    digitalWrite(3, HIGH);
//    delay(500);
    }
  if(dis == 0){
    digitalWrite(6, HIGH);
    digitalWrite(3, LOW);
    delay(500);
//    digitalWrite(6, LOW);
//    digitalWrite(3, HIGH);
//    delay(500);    }
//   
}}
