#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
    // 声明友元全局函数
    friend void printPoint(const Point &p);

public:
    Point(double x, double y);
    ~Point();

private:
    double x;
    double y;
};
#endif