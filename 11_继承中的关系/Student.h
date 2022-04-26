#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person //公有继承
{
    /* 
    //隐藏函数代码段
private:
    string name;
public:
    Student();
    ~Student();
    void setName(const string &name);
    string getName() const;
    void eat(int time);
 */

    //隐藏数据成员代码段
public:
    int code;

protected:
    float height;

public:
    Student();
    ~Student();
};
#endif