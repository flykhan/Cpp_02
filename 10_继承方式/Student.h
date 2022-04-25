#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person // 公有继承
{
private: // 私有数据成员
    int id;

public:
    Student();
    ~Student();
    void setId(int id);
    int getId() const;
};
#endif