#ifndef TASK_H
#define TASK_H

// 定义接口类
class Task
{
public:
    Task() {}
    virtual ~Task() {};
    virtual void executeTask() = 0;
};
#endif