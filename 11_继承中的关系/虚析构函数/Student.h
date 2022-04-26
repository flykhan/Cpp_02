#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person //公有继承
{
public:
    Student();
    //派生类中可以不写 virtual 关键字,编译器会默认加上
    //建议加上
    virtual ~Student();
};
#endif