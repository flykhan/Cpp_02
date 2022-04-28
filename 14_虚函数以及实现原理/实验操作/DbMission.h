#ifndef DBMISSION_H
#define DBMISSION_H
#include "Task.h"
class DbMission : public Task
{
public:
    DbMission();
    virtual ~DbMission();
    virtual void doWork();
};
#endif