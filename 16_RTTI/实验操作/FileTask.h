#ifndef FILETASK_H
#define FILETASK_H
#include "Task.h"
#include <iostream>
using namespace std;

class FileTask : public Task
{
public:
    FileTask();
    virtual ~FileTask();
    virtual void executeTask();
    void readFile();
};
#endif