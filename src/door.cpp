#include "../include/door.h"
#include "../include/motor.h"

Door::Door()
{
    Door::ptrMotor = new Motor();
}

Door::~Door()
{
    delete (Motor *)Door::ptrMotor;
}

void Door::Signal()
{
    ((Motor *)(Door::ptrMotor))->Signal();
}

void Door::Operate()
{
    ((Motor *)(Door::ptrMotor))->Operate();
}