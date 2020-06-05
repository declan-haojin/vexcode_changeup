#include "vex.h"
#include "manual.h"

using namespace vex;

competition Competition;


void pre_auton(void) {

}

void autonomous(void) {
  
}

void usercontrol(void) {
  while (1) {
    chassis_manual(SENS * AXIS_CONTROL1, SENS * AXIS_CONTROL2);
    grab_manual();
    support_manual();
    arm_manual();
    
    wait(20, msec); 
  }
}

int main() {
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  while (true) {
    wait(100, msec);
  }
}
