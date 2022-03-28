#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
#include <string>
using namespace std;

class Point
{
public:
    Point(double x = 0, double y = 0);
    Point(const Point &p);
    ~Point();
    void setPoint(const Point &p);
    void setPoint(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

private:
    double x;
    double y;
};

#endif