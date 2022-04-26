#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
}
Student::~Student()
{
    cout << "~Student()" << endl;
};
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
}