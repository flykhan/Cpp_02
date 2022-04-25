#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person
{
private:
    int id;

public:
    Student();
    ~Student();
    void setId(int id);
    int getId() const;
};
#endif