#include<Servo.h>
//#include <ServoEasing.hpp> 
//definition for the value from the user
//#define numberOfServo 6
//#define digitsPerValue 3 //angle can be max of 3 digits

//function declaration
void calibrate();
void close();
void open();
void lookLeft();
void lookRight();
void lookCenter();
void lookUp();
void lookDown();
void lookCenterVertical();
void lookCenterHorizontal();
//global variable declaration to be used in the programs

Servo eyelidTopRight, eyelidTopLeft, yaw, pitch, eyelidBottomRight, eyelidBottomLeft;
//declaring variable as needed
//int inputArray[numberOfServo];
//int stringLength= numberOfServo * digitsPerValue + 1;
//added one because string begins with $ to avoid garbage data output
//$030030030030100090 [example of the eye open with eyeball in center]

void setup() {
  //serial port used for data transfer
  //Serial.begin(9600); for input later on probably

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
// close();
// open();
// lookLeft();
// lookRight();
// lookCenterHorizontal();
// lookUp();
// lookDown();
// lookCenterVertical();

}

void calibrate() {

  eyelidBottomLeft.write(60);
  eyelidBottomRight.write(60);
  eyelidTopLeft.write(0);
  eyelidTopRight.write(0);
  yaw.write(90);
  pitch.write(100);
}

void close(){
  //servoeasing method
  //eyelidTopLeft.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidTopRight.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidBottomRight.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidBottomLeft.setEasingType(EASE_LINEAR_IN_OUT);

  eyelidBottomRight.write(0);
  eyelidBottomLeft.write(0);
  eyelidTopLeft.write(60);
  eyelidTopRight.write(60);
}
void open(){
  //servoeasing method
  //eyelidTopLeft.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidTopRight.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidBottomRight.setEasingType(EASE_LINEAR_IN_OUT);
  //eyelidBottomLeft.setEasingType(EASE_LINEAR_IN_OUT);


  eyelidBottomRight.write(60);
  eyelidBottomLeft.write(60);
  eyelidTopLeft.write(0);
  eyelidTopRight.write(0);

}
void lookLeft(){
  //yaw.setEasingType(Ease_QUADRATIC_IN_OUT);
  yaw.write(70);
}
void lookRight(){
  //yaw.setEasingType(Ease_QUADRATIC_IN_OUT);
  yaw.write(110);
}
void lookCenterHorizontal(){
  //yaw.setEasingType(Ease_QUADRATIC_IN_OUT);
  yaw.write(90);
}
void lookUp(){
  //pitch.setEasingType(Ease_QUADRATIC_IN_OUT);
  pitch.write(120);
}
void lookDown(){
 // pitch.setEasingType(Ease_QUADRATIC_IN_OUT);
  pitch.write(80);
}
void lookCenterVertical(){
//  pitch.setEasingType(Ease_QUADRATIC_IN_OUT);
  pitch.write(100);
}
