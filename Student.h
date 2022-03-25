#include <iostream>
#include <string>
using namespace std;

// class类关键字、Student类名
class Student
{
    //访问限制符 - 公有属性
public:
    Student() {}  //构造函数
    ~Student() {} //析构函数

    //成员函数
    void setName(string name) { this->name = name; }
    string getName() const { return name; }
    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }

    //访问修饰符 - 私有属性
private:
    //数据成员
    string name;
    int age;
};


// 一般将数据成员封装在 private 关键字下，不让用户直接访问数据成员，而是通过成员函数来进行访问。