#include "operable.h"

class Door : public IOperable
{
private:
    void *ptrMotor = nullptr;

public:
    Door();
    ~Door();
    void Signal();
    void Operate();
};