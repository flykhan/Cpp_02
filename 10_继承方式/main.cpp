#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //堆上实例化
    Student *stu = new Student;
    //实例化对象访问基类数据成员，实例化对象只能访问 public 属性的数据成员和成员函数
    stu->setName("Jake");
    stu->setAge(15);
    //实例化对象访问派生类数据成员，实例化对象只能访问 public 属性的数据成员和成员函数
    stu->setId(17);
    cout << "My name is " << stu->getName() << ", I'm " << stu->getAge() << " years old, my id is " << stu->getId();

    //释放内存
    delete stu;
    //释放空指针
    stu = nullptr;
    return 0;
}