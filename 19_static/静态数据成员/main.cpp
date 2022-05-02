#include "EnemyPlane.h"

int main()
{
    cout << EnemyPlane::getCount() << endl;

    EnemyPlane *stu1 = new EnemyPlane;
    cout << stu1->getCount() << endl;

    EnemyPlane *stu2 = new EnemyPlane;
    cout << stu2->getCount() << endl;

    delete stu1;
    stu1 = nullptr;
    cout << EnemyPlane::getCount() << endl;
    delete stu2;
    stu2 = nullptr;
    cout << EnemyPlane::getCount() << endl;

    return 0;
}