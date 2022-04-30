#ifndef DBTASK_H
#define DBTASK_H
#include "Task.h"
#include <iostream>
using namespace std;

class DbTask : public Task
{
public:
    DbTask();
    virtual ~DbTask();
    virtual void executeTask();
    void readDatabase();
};
#endif