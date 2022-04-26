#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
    //隐藏函数代码示例段
    /* protected:
        string name;

    public:
        Person();
        ~Person();
        void setName(const string &name);
        string getName() const;
        void eat(); */

    //隐藏数据成员代码示例段
public:
    string code;

protected:
    float height;

public:
    Person();
    ~Person();
};
#endif