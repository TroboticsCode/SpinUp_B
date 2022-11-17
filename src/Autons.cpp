#include "vex.h"
#include "Autons.h"
#include "Functions.h"
#include "DriveFunctionsConfig.h"

//Put your auton routines in here

void Auton1()
{
  //setRotGains(0, 0, 0, 20, 10); //update PID gains to tune robot
  //setLinGains(0, 0, 0, 20, 10) 
  spinner.setVelocity(100,pct);
  //starts in back-left corner
  moveLinear(-6,80,10000);
  moveRotate(360,100,10000);
  spinner.spin(forward);
  wait(2,sec);
  spinner.stop(coast);
  moveLinear(-3,100,10000);
  moveRotate(-360,100,10000);
  moveLinear(12,100,10000);
  spinner.spin(forward);
  wait(2,sec);
  spinner.stop(coast);
}

void Auton2(void)
{
}
void Auton3(void)
{
}