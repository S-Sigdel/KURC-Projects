#include<Servo.h>
//function declaration
#define numberOfServo 6
#define digitsPerValue 3 //angle can be max of 3 digits

void calibrate();
//global variable declaration to be used in the programs

Servo eyelidTopRight, eyelidTopLeft, yaw, pitch, eyelidBottomRight, eyelidBottomLeft;
//declaring variable as needed
int inputArray[numberOfServo];
int stringLength= numberOfServo * digitsPerValue + 1;
//added one because string begins with $ to avoid garbage data output
//$030030030030100090 [example of the eye open with eyeball in center]

void setup() {
  //serial port used for data transfer
  Serial.begin(9600);

  //pins attaching of servos
  eyelidTopRight.attach(2);
  eyelidTopLeft.attach(3);
  eyelidBottomRight.attach(4);
  eyelidBottomLeft.attach(5);
  yaw.attach(6);
  pitch.attach(7);

  //initial calibrate
  calibrate();
}

void loop(){

}

void calibrate() {
    eyelidBottomLeft.write(60);
    eyelidBottomRight.write(60);
    eyelidTopLeft.write(0);
    eyelidTopRight.write(0);
    yaw.write(90);
    pitch.write(100);
  }


