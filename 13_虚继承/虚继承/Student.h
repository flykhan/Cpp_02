#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student : virtual public Person
{
protected:
    int age;

public:
    Student(const string &name = "wanger", int age = 15);
    ~Student();
};
#endif