#include <Servo.h>
Servo motor = Servo();
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  motor.attach(3);
  Serial.begin(9600); // to start serial communication Serial.begin(9600 b/s);
  // = - assign 
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = Serial.read();

  if(x == '1'){
    digitalWrite(5, LOW);
    digitalWrite(11, HIGH);
    delay(500);
    motor.write(0);
    delay(100);
    }
  
  if(x == '2'){
    digitalWrite(11, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    motor.write(90);
    delay(100);
    }
}
