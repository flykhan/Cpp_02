#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
class Teacher : public Person
{
public:
    Teacher();
    ~Teacher();
    virtual void work();
};
#endif