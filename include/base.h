#include "vex.h"

////////////////////////////// MOTION //////////////////////////////
void m(motor motorName, int speed, int torq = 100);
void m_group(motor_group motorGroup, int speed, int torq = 100);
void m_stop_mood(bool isBrake);

////////////////////////////// LOCK //////////////////////////////
void grab_locked();
void arm_locked();
void support_locked();

////////////////////////////// RESET //////////////////////////////
void grab_reset();
void chassis_reset();
void arm_reset();
void support_reset();
void all_reset();