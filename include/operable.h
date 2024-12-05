#ifndef OPERABLE_H
#define OPERABLE_H

class IOperable
{
public:
    virtual ~IOperable() {};
    virtual void Signal() = 0;
    virtual void Operate() = 0;
};

#endif