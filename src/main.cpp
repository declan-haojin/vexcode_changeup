#include "base.h"
#include "manual.h"
#include "auto.h"

using namespace vex;

competition Competition;

void test()
{
  controller1.Screen.clearScreen();
  controller1.Screen.setCursor(1,1);
  chassis_turn_inerial_control(-37);
  controller1.Screen.print("The deg is %f", INERT_DEG);
}

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

    //test
    if(BUTTON_X) test();
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
