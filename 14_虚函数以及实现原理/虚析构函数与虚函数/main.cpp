#include "Student.h"
#include "Teacher.h"
int main()
{
    Person *per = new Person;
    Person *stu = new Student;
    Person *tea = new Teacher;
    per->work();
    stu->work();
    tea->work();
    delete per;
    per = nullptr;
    delete stu;
    stu = nullptr;
    delete tea;
    tea = nullptr;
    return 0;
}