#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "Circle.h"
using namespace std;
class Point
{
    // 声明成员全局函数, printPoint 为 Circle 类中成员函数
    friend void Circle::printPoint(const Point &p);

public:
    Point(double x, double y);
    ~Point();

private:
    double x;
    double y;
};
#endif