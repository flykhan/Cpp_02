#include "Student.h"

Student::Student()
{
    cout << "Student()" << endl;
}
Student::~Student()
{
    cout << "~Student()" << endl;
};

void Student::eat()
{
    cout << "Student::eat()" << endl;
}