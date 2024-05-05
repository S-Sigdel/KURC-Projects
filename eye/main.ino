#include<Servo.h>
//definition for the value from the user
#define numberOfServo 6
#define digitsPerValue 3 //angle can be max of 3 digits

//function declaration
void calibrate();
void close();
void open();
void lookLeft();
void lookRight();
void lookCenter();
void lookUp();
void lookDown();
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

void close(){
  eyelidBottomRight.startEaseTo(0);
  eyelidBottomLeft.startEaseTo(0);
  eyelidTopLeft.startEaseTo(60);
  eyelidTopRight.startEaseTo(60);
}
void open(){
  eyelidBottomRight.startEaseTo(60);
  eyelidBottomLeft.startEaseTo(60);
  eyelidTopLeft.startEaseTo(0);
  eyelidTopRight.startEaseTo(0);

}
void lookLeft(){
  yaw.startEaseTo(70);
}
void lookRight(){
  yaw.startEaseTo(110);
}
void lookCenter(){
  yaw.startEaseTo(90);
}
void lookUp(){
  pitch.startEaseTo(120);
}
void lookDown(){
  pitch.startEaseTo(80);
}
void lookCenter(){
    pitch.startEaseTo(100);
  }
