#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
public:
    // 接口类没有构造函数
    virtual ~Person() {};
    virtual void eat() = 0;
    virtual void play() = 0;
};
#endif