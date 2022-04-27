#ifndef CHILD_H
#define CHILD_H
#include <iostream>
#include <string>
using namespace std;
class Child
{
public:
    Child(const string &name = "fname");
    virtual ~Child();

protected:
    string name;
};
#endif