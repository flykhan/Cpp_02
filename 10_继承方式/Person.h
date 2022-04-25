#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
public: // 公有属性成员函数
    Person();
    ~Person();
    void setName(const string &name);
    string getName() const;
    void setAge(int age);
    int getAge() const;

protected: // 保护属性数据成员
    string name;
    int age;
};
#endif
/*
在示例代码 1 中继承时使用 public 公有继承方式。
示例代码 1 中，Student 类将继承 protected 属性的两个数据成员 name 和 age，被继承的数据成员仍然是 protected 属性。
Student 将继承 public 属性的成员函数。 */