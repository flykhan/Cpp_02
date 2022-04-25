#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
    //在派生类（学生类）中直接访问 public 和 protected 属性基类数据成员
    name = "jake";
    age = 15;
}
Student::~Student()
{
    cout << "~Student()" << endl;
}
void Student::setId(int id)
{
    this->id = id;
}
int Student::getId() const
{
    return id;
}