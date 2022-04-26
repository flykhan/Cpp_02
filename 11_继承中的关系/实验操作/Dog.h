#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Dog : public Animal
{
public:
    string skinColor;

protected:
    int age;
    string name;

public:
    Dog();
    virtual ~Dog();
    void color();
};

#endif