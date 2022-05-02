#include "Teacher.h"

Teacher::Teacher(const string &name, int age, float score) : stu(name, age, score)
{
    cout << "Teacher()" << endl;
}
Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
}

void Teacher::visitStudent()
{
    stu.speek(); // 可以直接访问友元的私有成员函数
    cout << "Teacher::visitStudent(): s.name: " << stu.name << ", s.age: " << stu.age << ", s.score: " << stu.score << endl;
}