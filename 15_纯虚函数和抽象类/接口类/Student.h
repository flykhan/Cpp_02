#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person
{
public:
    Student();
    virtual ~Student();
    // 抽象类有构造函数和纯虚函数
    virtual void study() = 0;
    void setId(int id);
    int getId() const;
protected:
    int id;
};
#endif