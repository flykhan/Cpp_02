#ifndef TASK_H
#define TASK_H
#include <iostream>
using namespace std;
class Task
{
public:
    Task();
    virtual ~Task();
    virtual void doWork();
};
#endif