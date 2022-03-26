//main.cpp 文件
#include <iostream>
#include "Student.h"

int main(){
    Student stu;
    stu.setName("jake");
    stu.setAge(15);
    cout<<"My name is "<<stu.getName()<<", I'm "<<stu.getAge()<<" years old."<<endl;
    return 0;
}