#include "Student.h"

int main()
{
    //堆上实例化
    Student *stu = new Student;
    stu->setName("Jake");
    stu->setAge(15);
    stu->setId(17);
    cout << "My name is " << stu->getName() << ", I'm " << stu->getAge() << " years old, my id is " << stu->getId();

    //释放内存
    delete stu;
    //释放空指针
    stu = nullptr;
    return 0;
}