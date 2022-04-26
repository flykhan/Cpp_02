#include "Student.h"

int main()
{
    Person *p = new Student;
    delete p;
    p = nullptr;
    return 0;
}