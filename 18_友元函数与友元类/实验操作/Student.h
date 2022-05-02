#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Teacher;
class Student
{
    friend Teacher;

private:
    string name;
    int age;
    float score;
    void speek();

public:
    Student(const string &name, int age, float score);
    ~Student();
};
#endif