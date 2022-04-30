#include <typeinfo>
#include "FileTask.h"
#include "DbTask.h"

void doSomething(Task *t)
{
    t->executeTask();
    if (typeid(*t) == typeid(FileTask)) {
        FileTask *ft = dynamic_cast<FileTask*> (t);
        ft->readFile();
    }
    if (typeid(*t) == typeid(DbTask)) {
        DbTask *dt = dynamic_cast<DbTask*> (t);
        dt->readDatabase();
    }
}

int main()
{
/*
    // 方法一
    FileTask ft;
    DbTask dt;
    doSomething(&ft);
    doSomething(&dt);
*/

    // 方法二
    Task *ft = new FileTask;
    Task *dt = new DbTask;
    doSomething(ft);
    doSomething(dt);

    delete ft;
    ft = nullptr;
    delete dt;
    dt = nullptr;

    return 0;
}