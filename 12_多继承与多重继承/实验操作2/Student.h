#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student : public Person
{
protected:
    int age;

public:
    Student(int age = 19);
    virtual ~Student();
};
#endif