#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;
class Student : public Person
{
public:
    Student();
    virtual ~Student();
    virtual void eat();
    void study();
};
#endif