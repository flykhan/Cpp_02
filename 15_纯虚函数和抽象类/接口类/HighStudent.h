#ifndef HIGHSTUDENT_H
#define HIGHSTUDENT_H
#include "Student.h"
class HighStudent : public Student
{
public:
    HighStudent();
    virtual ~HighStudent();
    virtual void eat();
    virtual void play();
    virtual void study();
};
#endif