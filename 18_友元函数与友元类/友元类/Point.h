#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Circle; // 声明 Circle
class Point
{
    // 声明 Circle 为 Point 的友元类
    friend Circle;

private:
    double x;
    double y;
    void printPoint();

public:
    Point(double x, double y);
    ~Point();
};
#endif