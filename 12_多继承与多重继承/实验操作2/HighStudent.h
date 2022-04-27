#ifndef HIGHSTUDENT_H
#define HIGHSTUDENT_H
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
class HighStudent : public Student
{
public:
    HighStudent(float height = 173.8);
    virtual ~HighStudent();
    void print();
protected:
    float height;
};
#endif