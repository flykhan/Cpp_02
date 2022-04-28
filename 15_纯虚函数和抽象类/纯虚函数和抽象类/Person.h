#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
public:
    Person();
    virtual ~Person();
    // 纯虚函数
    virtual void work() = 0;
    void setName(const string &name);
    string getName() const;
};

#endif