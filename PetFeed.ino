#include <Servo.h>
int ir = 2;  //Connecting the IR Sensor at pin 2
int obstacle =0;
Servo myservo;  //initialising servo
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);   //Connecting servo at pin 9
pinMode(ir,INPUT);  //Connecting the IR Sensor at pin 2
Serial.begin(9600);
//myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
obstacle = digitalRead(ir);   //reading data from the IR sensor
if(obstacle == 0){
  myservo.write(180);  //telling the servo to rotate 180 degrees from current position i.e 0
  delay(2500);  //letting the food to drop for 2.5 seconds
  myservo.write(0); //telling servo to go back to its original position
  delay(10000); //setting delay until next time the loop runs, it is currently 10 seconds only for testing/demonstration purpose
}


//delay(30000); //30 seconds
//delay(3000000); // 50 minutes
}
