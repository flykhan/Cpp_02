#ifndef PLAN_H
#define PLAN_H
#include "Flyable.h"
#include <iostream>
using namespace std;
class Plan : public Flyable
{
public:
    Plan();
    virtual ~Plan();
    virtual void fly();
};
#endif