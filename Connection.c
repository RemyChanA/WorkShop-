/*************************************f.d****************************************************/
#include "headers.h"

void Robo_Leg_Connect(void)
{
  Right_Leg.w_e.k = & Right_Leg.k;
  Right_Leg.k.foot_ptr = & Right_Leg.f;
  printf("\n Robot right leg is connect successfully");

  Left_Leg.w_e.k = & Left_Leg.k;
  Left_Leg.k.foot_ptr = & Left_Leg.f;
  printf("\n Robot left leg is connect successfully");
}

void Robo_ARM_Connect(void)
{
 Right_ARM.s.E = & Right_ARM.e;
 Right_ARM.e.W = & Right_ARM.w;
 Right_ARM.w.F = & Right_ARM.f;
 printf("\n Robot right arm is connect successfully");

 Left_ARM.s.E = & Left_ARM.e;
 Left_ARM.e.W = & Left_ARM.w;
 Left_ARM.w.F = & Left_ARM.f;
 printf("\n Robot left arm is connect successfully");
}

void Robo_connect(void)
{
    Robo_ARM_Connect();
    Robo_Leg_Connect();
}

void Robo_display(void)
{
    printf("\n Displaying the robot \n");


    printf("\n Right arm display \n");

    printf("\n Right arm shoulder volt : %i \t Right arm shoulder degree = %i",Right_ARM.s.volt ,Right_ARM.s.degree);
    printf("\n Right arm elbow volt : %i \t right arm elbow degree = %i",Right_ARM.e.volt,Right_ARM.e.degree);
    printf("\n right arm wrist volt : %i \t right arm wrist degree = %i",Right_ARM.w.volt,Right_ARM.w.degree);
    printf("\n right arm finger volt : %i \t right arm finger degree = %i ",Right_ARM.f.volt,Right_ARM.f.degree);

    printf("\n \n left arm display \n");

    printf("\n left arm shoulder volt : %i \t left arm shoulder degree = %i",Left_ARM.s.volt ,Left_ARM.s.degree);
    printf("\n left arm elbow volt : %i \t left arm elbow degree = %i",Left_ARM.e.volt,Left_ARM.e.degree);
    printf("\n left arm wrist volt : %i \t left arm wrist degree = %i",Left_ARM.w.volt,Left_ARM.w.degree);
    printf("\n left arm finger volt : %i \t left arm finger degree = %i ",Left_ARM.f.volt,Left_ARM.f.degree);

    printf("\n\n  Right leg display \n");

    printf("\n Right leg waist end volt : %i \t and  degree = %i",Right_Leg.w_e.volt ,Right_Leg.w_e.degree);
    printf("\n Right leg  knee volt : %i \t and degree = %i",Right_Leg.k.volt,Right_Leg.k.degree);
    printf("\n right leg  foot volt : %i \t and degree = %i",Right_Leg.f.volt,Right_Leg.f.degree);

    printf("\n \n Left leg display \n");

    printf("\n Left leg waist end volt : %i \t and  degree = %i",Left_Leg.w_e.volt ,Left_Leg.w_e.degree);
    printf("\n Left leg  knee volt : %i \t and degree = %i",Left_Leg.k.volt,Left_Leg.k.degree);
    printf("\n Left leg  foot volt : %i \t and degree = %i",Left_Leg.f.volt,Left_Leg.f.degree);

}

