#include "base.h"
#include "auto.h"
#include <algorithm>


double chassis_deg()
{
  double chassisDeg[4] = {LF_DEG, LB_DEG, RF_DEG, RB_DEG};
  return (chassisDeg[1] + chassisDeg[2]) * 0.5;
}

void chassis_stop()
{
  chassisLeft.stop(brake);
  chassisRight.stop(brake);
}

void chassis_turn_inerial_control(int deg)
{
  deg += 4.9;
  double KP = 0.57;
  double speed = 0;
  bool direct = (deg > 0);
  deg = abs(deg);
  double err = deg;
  inert_reset();
  chassis_reset();
  
  while(abs(err) > 5)
  {
    err = deg - INERT_DEG;
    speed = KP * err;
    if(direct) chassis(speed, -speed);
    else chassis(-speed, speed);
  }
  chassis_stop();
}