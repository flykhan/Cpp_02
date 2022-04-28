#ifndef FILEMISSION_H
#define FILEMISSION_H
#include "Task.h"
class FileMission : public Task
{
public:
    FileMission();
    virtual ~FileMission();
    virtual void doWork();
};
#endif