#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
}
Student::~Student()
{
    cout << "~Student()" << endl;
};

void Student::code()
{
    cout << "Student::code()" << endl;
}