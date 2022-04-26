#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Cat : public Animal
{
public:
    string skinColor;

protected:
    int age;
    string name;

public:
    Cat();
    virtual ~Cat();
    void color();
};
#endif