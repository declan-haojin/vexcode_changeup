#include "vex.h"
#include "manual.h"
#include "base.h"

using namespace vex;

competition Competition;

void pre_auton(void) {
  all_reset();
}

void autonomous(void) {
  
}

void usercontrol(void) {
  while (1) {
    chassis_manual_basic();
    grab_manual_basic();
    arm_manual_basic();
    support_manual_basic();

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
