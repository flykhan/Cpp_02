#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
    //派生类中访问数据成员
    code = 17;
    height = 1.75;
    cout << "Student::code: " << Student::code << endl;
    cout << "Student::height: " << Student::height << endl;

    //派生类中访问基类中数据成员
    cout << "Person::code: " << Person::code << endl;
    cout << "Person::height: " << Person::height << endl;
}
Student::~Student()
{
    cout << "~Student()" << endl;
};

//隐藏函数代码段
/*
void Student::setName(const string &name)
{
    this->name = name;
}
string Student::getName() const
{
    return name;
}
void Student::eat(int time)
{
    cout << "eat time = " << time << endl;
} */