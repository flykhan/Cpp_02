#ifndef HIGHSTUDENT_H
#define HIGHSTUDENT_H
#include "Student.h"
#include "Child.h"
class HighStudent : public Student, public Child
{
protected:
    float height;

public:
    HighStudent(const string &name = "wanger", int age = 15, const string &color = "blue" , float h = 1.75);
    ~HighStudent();
    void play();
};

#endif