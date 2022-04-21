#ifndef __LINE_H__
#define __LINE_H__
#include <iostream>
#include "Point.h"
using namespace std;

class Line
{
public:
    //构造函数
    Line(const Point &pA, const Point &pB);
    Line(double aX, double aY, double bX, double bY);
    //析构函数
    ~Line();
    //数据成员操作函数
    void setPointA(const Point &pA);
    void setPointB(const Point &pB);
    void setPoint(const Point &pA, const Point &pB);
    Point *getPointA();
    Point *getPointB();
private:
    Point *pointA;
    Point *pointB;
};
#endif