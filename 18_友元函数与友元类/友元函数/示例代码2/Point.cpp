#include "Point.h"
Point::Point(double x, double y) : x(x), y(y)
{
    cout << "Point()" << endl;
}

Point::~Point()
{
    cout << "~Point()" << endl;
}