#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <string>
using namespace std;
class Task
{
protected:
    // task data information
    string startTime;
public:
    Task();
    virtual ~Task();
    virtual void doWork() = 0;
};
#endif