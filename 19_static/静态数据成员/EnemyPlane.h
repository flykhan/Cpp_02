#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H
#include <iostream>
using namespace std;

class EnemyPlane
{
private:
    static int count;

public:
    EnemyPlane();
    ~EnemyPlane();
    static int getCount();
};
#endif