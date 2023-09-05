#include <Servo.h>
int ir = 2;
int obstacle =0;
int pos =0;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
pinMode(ir,INPUT);
Serial.begin(9600);
//myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
obstacle = digitalRead(ir);
if(obstacle == 0){
  myservo.write(180);
  delay(2500);
  myservo.write(0);
  delay(10000);
}


//delay(30000); //30 seconds
//delay(3000000); // 50 minutes
}
