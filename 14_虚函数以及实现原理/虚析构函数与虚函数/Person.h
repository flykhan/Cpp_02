#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
public:
    Person();
    virtual ~Person();
    virtual void work();
};

#endif