#include <iostream>
using namespace std;

class Plan
{
    //默认为私有属性
    int wingCount;

public:
    //代码区
    Plan() { wingCount = 0; }
    ~Plan() {}
    int getWingCount() { return wingCount; }
};

int main()
{
    //栈上
    Plan p1;
    Plan p2;
    Plan p3;
    p1.getWingCount();
    p2.getWingCount();
    p3.getWingCount();
    return 0;
}