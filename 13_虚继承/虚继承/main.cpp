#include "HighStudent.h"
int main()
{
    HighStudent stu("jake", 15);
    stu.Student::print();
    stu.Child::print();
    return 0;
}