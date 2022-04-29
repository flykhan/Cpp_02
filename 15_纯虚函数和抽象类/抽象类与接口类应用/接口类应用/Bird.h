#ifndef BIRD_H
#define BIRD_H
#include "Flyable.h"
#include <iostream>
using namespace std;
class Bird : public Flyable
{
public:
    Bird();
    virtual ~Bird();
    virtual void fly();
};
#endif