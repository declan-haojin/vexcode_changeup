#include "manual.h"
#include "base.h"

void chassis_manual(int leftSpeed, int rightSpeed, int torq)
{
  m_group(chassisLeft, leftSpeed, torq);
  m_group(chassisRight, rightSpeed, torq);
}