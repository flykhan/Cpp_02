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
    ~Person();
    void setName(const string &name);
    string getName() const;
    void eat();
};
#endif