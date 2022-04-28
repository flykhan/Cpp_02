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
    Person(const string &name = "wanger");
    ~Person();
    void print();
};
#endif