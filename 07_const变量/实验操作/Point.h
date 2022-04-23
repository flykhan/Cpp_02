#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0);
    ~Point();
    void setX(double x);
    double getX();
    void setY(double y);
    double getY();
};
#endif