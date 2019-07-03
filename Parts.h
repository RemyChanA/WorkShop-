/**************************************v.d*********************************************************/
struct Finger
{
    int volt;
    int degree;

};
struct Wrist
{
    int volt;
    int degree;
    struct Finger *F;
};
struct Elbow
{
    int volt ;
    int degree;
    struct Wrist *W;
};
struct Shoulder
{
    int volt;
    int degree;
    struct Elbow *E;
};

struct ARM
{
    struct Shoulder s;
    struct Elbow e;
    struct Wrist w;
    struct Finger f;
}Right_ARM,Left_ARM;

/*****************************************************/

struct foot
{
    int volt;
    int degree;
};

struct knee
{
    int volt;
    int degree;
    struct foot *foot_ptr

};

struct waist_end
{
    int volt;
    int degree;
    struct knee *k;
};


struct Leg
{
    struct waist_end w_e;
    struct knee k;
    struct foot f;


}Right_Leg,Left_Leg;




