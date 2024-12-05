#include <../lib/led/QwiicLedStick.h>
#include "operable.h"

#define MOTOR_PHASES 10

enum MotorState
{
    STOPPED = 0,
    UP = 1,
    UP_STOPPED = 2,
    DOWN = 3,
    DOWN_STOPPED = 4
};

class Motor : public IOperable
{
private:
    LED *ptrLeds = nullptr;
    MotorState state = MotorState::STOPPED;
    byte phase = 0;
    MotorState NextState();
    void Rotate();

public:
    Motor();
    ~Motor();
    void Signal();
    void Operate();
};