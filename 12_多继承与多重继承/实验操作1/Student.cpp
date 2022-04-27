#include "Student.h"
Student::Student(int age) : age(age)
{
    cout << "Student(int age)" << endl;
}
Student::~Student()
{
    cout << "~Student()" << endl;
}