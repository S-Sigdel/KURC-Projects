void calibrate() {}
void setup() {

  servo eyelidTopRight, eyelidTopLeft, yaw, pitch, eyelidBottomRight,
        eyelidBottomLeft;

  eyelidTopRight.attach(2);
  eyelidTopLeft.attach(3);
  eyelidBottomRight.attach(4);
  eyelidBottomLeft.attach(5);
  yaw.attach(6);
  pitch.attach(7);
}
void looop(){
  int firstcali=1;
  if(firstcali){

    eyelidBottomLeft.write(60);
    eyelidBottomRight.write(60);
    eyelidTopLeft.write(0);
    eyelidTopRight.write(0);
    yaw.write(90);
    pitch.write(100);

  }
  firstcali++;

}