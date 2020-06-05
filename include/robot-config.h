using namespace vex;

#define MOTOR_LF_PORT PORT11
#define MOTOR_LB_PORT PORT12
#define MOTOR_RF_PORT PORT9
#define MOTOR_RB_PORT PORT19
#define MOTOR_LG_PORT PORT5
#define MOTOR_RG_PORT PORT6
#define MOTOR_AR_PORT PORT14
#define MOTOR_SU_PORT PORT2

#define MOTOR_LF_TYPE ratio18_1
#define MOTOR_LB_TYPE ratio18_1
#define MOTOR_RF_TYPE ratio18_1
#define MOTOR_RB_TYPE ratio18_1
#define MOTOR_LG_TYPE ratio18_1
#define MOTOR_RG_TYPE ratio18_1
#define MOTOR_AR_TYPE ratio36_1
#define MOTOR_SU_TYPE ratio36_1

#define LEFT_CONTROL

#ifdef LEFT_CONTROL
#define AXIS_CONTROL1 controller1.Axis3.value() + controller1.Axis4.value()
#define AXIS_CONTROL2 controller1.Axis3.value() - controller1.Axis4.value()
#else
#define AXIS_CONTROL1 controller1.Axis2.value() + controller1.Axis1.value()
#define AXIS_CONTROL2 controller1.Axis2.value() - controller1.Axis1.value()
#endif

#define SENS 1.0
#define 


extern brain Brain;
extern controller controller1;
extern motor motorLF;
extern motor motorLB;
extern motor motorRF;
extern motor motorRB;
extern motor motorLG;
extern motor motorRG;
extern motor motorAR;
extern motor motorSU;
extern motor_group chassisLeft;
extern motor_group chassisRight;