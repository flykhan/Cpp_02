#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person
{
public:
    Student();
    virtual ~Student();
    virtual void work();
};
#endif