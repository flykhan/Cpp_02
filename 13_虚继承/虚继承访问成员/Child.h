#ifndef CHILD_H
#define CHILD_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Child : virtual public Person
{
protected:
    string color;

public:
    Child(const string &name = "wanger", const string &color = "blue");
    ~Child();
};
#endif