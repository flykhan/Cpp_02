#include "Child.h"
Child::Child(const string &name) : name(name)
{
    cout << "Child(const string &name)" << endl;
}
Child::~Child()
{
    cout << "~Child()" << endl;
}