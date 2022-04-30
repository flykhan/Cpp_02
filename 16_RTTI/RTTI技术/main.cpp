#include <typeinfo>
#include "Student.h"
#include "Teacher.h"
void doSomething(Person *p)
{
    p->eat();
    // 运行时使用 typeif 识别类型
    if (typeid(*p) == typeid(Student)) {
        // 运行时使用 dynamic_cast 进行类型转换
        Student *stu = dynamic_cast<Student*> (p);
        stu->study();
    }
    if (typeid(*p) == typeid(Teacher)) {
        Teacher *tea = dynamic_cast<Teacher*> (p);
        tea->teach();
    }
}

int main()
{
    Student stu;
    Teacher tea;
    doSomething(&stu);
    doSomething(&tea);

    return 0;
}