#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person //公有继承
{
private:
    string name;
public:
    Student();
    ~Student();
    void setName(const string &name);
    string getName() const;
    void eat(int time);
};
#endif