#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person //公有继承
{
public:
    Student();
    ~Student();
    void eat();
};
#endif