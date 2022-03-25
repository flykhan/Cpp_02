#include "Student.h"
using namespace std;

int main(){
    //栈上实例化
    Student stu1;
    stu1.setName("jake");
    stu1.setAge(15);
    cout<<"My name is "<<stu1.getName()<<", I'm "<<stu1.getAge()<<" years old."<<endl;

    //堆上实例化
    Student *stu2 = new Student;
    //访问
    stu2->setName("Siri");
    stu2->setAge(5);
    cout<<"My name is "<<stu2->getName()<<", I'm "<<stu2->getAge()<<" years old."<<endl;
    //释放内存
    delete stu2;
    stu2=nullptr;

    return 0;
}