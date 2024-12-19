#include "../include/motor.h"

Motor::Motor()
{
    Motor::ptrLeds = new LED();
    Motor::ptrLeds->begin();
    Wire.begin();
}

Motor::~Motor()
{
    delete Motor::ptrLeds;
}

MotorState Motor::NextState()
{
    switch (Motor::state)
    {
    case MotorState::UP_STOPPED:
    case MotorState::STOPPED:
        return MotorState::DOWN;
    case MotorState::DOWN:
        return MotorState::DOWN_STOPPED;
    case MotorState::DOWN_STOPPED:
        return MotorState::UP;
    case MotorState::UP:
        return MotorState::UP_STOPPED;
    default:
        return MotorState::STOPPED;
    }
}

void Motor::Signal()
{
    Motor::state = Motor::NextState();
}

void Motor::Rotate()
{
    for (int i = 0; i < MOTOR_PHASES; i++)
    {
        const uint8_t code = i < Motor::phase ? 255 : 0;
        Motor::ptrLeds->setLEDColor(i, code, code, 0);
    }
    Motor::ptrLeds->setLEDBrightness(1);

    if (Motor::phase <= 0 || Motor::phase >= MOTOR_PHASES)
    {
        Motor::Signal();
    }
}

void Motor::Operate()
{
    switch (Motor::state)
    {
    case MotorState::UP:
        Motor::phase = Motor::phase - 1 <= 0 ? 0 : Motor::phase - 1;
        Motor::Rotate();
        break;

    case MotorState::DOWN:
        Motor::phase = Motor::phase + 1 >= MOTOR_PHASES ? MOTOR_PHASES : Motor::phase + 1;
        Motor::Rotate();
        break;
    }
}