#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <iostream>
using namespace std;

class Teacher : public Person
{
public:
    Teacher();
    virtual ~Teacher();
    virtual void eat();
    void teach();
};
#endif