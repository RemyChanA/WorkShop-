#include "headers.h"

void robo_init (void)
{
    Right_ARM.s.volt = Initialize ;
    degree_modify(&Right_ARM.s.volt,&Right_ARM.s.degree);
    Right_ARM.e.volt = Initialize ;
    degree_modify(&Right_ARM.e.volt,&Right_ARM.e.degree);
    Right_ARM.w.volt = Initialize ;
    degree_modify(&Right_ARM.w.volt,&Right_ARM.w.degree);
    Right_ARM.f.volt = Initialize ;
    degree_modify(&Right_ARM.f.volt,&Right_ARM.f.degree);

    Left_ARM.s.volt = move_ninety ;
    degree_modify(&Left_ARM.s.volt,&Left_ARM.s.degree);
    Left_ARM.e.volt = move_ninety ;
    degree_modify(&Left_ARM.e.volt,&Left_ARM.e.degree);
    Left_ARM.w.volt = move_ninety ;
    degree_modify(&Left_ARM.w.volt,&Left_ARM.w.degree);
    Left_ARM.f.volt = move_ninety ;
    degree_modify(&Left_ARM.f.volt,&Left_ARM.f.degree);

    Right_Leg.w_e.volt = move_one_eighty ;
    degree_modify(&Right_Leg.w_e.volt,&Right_Leg.w_e.degree);
    Right_Leg.k.volt = move_one_eighty ;
    degree_modify(&Right_Leg.k.volt,&Right_Leg.k.degree);
    Right_Leg.f.volt = move_one_eighty ;
    degree_modify(&Right_Leg.f.volt,&Right_Leg.f.degree);


    Left_Leg.w_e.volt = move_three_sixty ;
    degree_modify(&Left_Leg.w_e.volt,&Left_Leg.w_e.degree);
    Left_Leg.k.volt = move_three_sixty ;
    degree_modify(&Left_Leg.k.volt,&Left_Leg.k.degree);
    Left_Leg.f.volt = move_three_sixty ;
    degree_modify(&Left_Leg.f.volt,&Left_Leg.f.degree);

}

void degree_modify(int *volt , int *degree)
{
    if ((*volt)== Initialize)
    {
        *degree = zero;
    }

    else if  ((*volt)== move_ninety)
    {
        *degree = ninety;
    }
    else if ((*volt)== move_one_eighty)
    {
        *degree = one_eighty;
    }
    else if ((*volt)== move_three_sixty)
    {
        *degree = three_sixty;
    }
}


