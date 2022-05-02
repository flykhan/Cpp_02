#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string>
#include "Student.h" // 需要添加 Student 头文件
using namespace std;

class Teacher
{
private:
    Student stu;

public:
    Teacher(const string &name, int age, float score);
    ~Teacher();
    void visitStudent();
};
#endif