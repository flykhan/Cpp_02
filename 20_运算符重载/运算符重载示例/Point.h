// Point.h
#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
    friend ostream& operator<<(ostream& out, const Point& p);
public:
    Point(double x = 0, double y = 0);
    ~Point();

    Point& operator++();    // 前置 ++
    Point operator++(int);  // 后置 ++
    Point& operator--();    // 前置 --
    Point operator--(int);  // 后置 --
    Point& operator-();     // 负号
private:
    double x;
    double y;
};
#endif // POINT_H