#ifndef OTHERMISSION_H
#define OTHERMISSION_H
#include "Task.h"
class OtherMission : public Task
{
public:
    OtherMission();
    virtual ~OtherMission();
    virtual void doWork();
};
#endif