#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
using namespace std;
class Student : public Person
{
public:
    Student();
    ~Student();
    virtual void work();
};
#endif