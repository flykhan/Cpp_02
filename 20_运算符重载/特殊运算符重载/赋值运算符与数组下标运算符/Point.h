#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
    friend ostream &operator<<(ostream &out, const Point &p);

private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0);
    ~Point();

    Point &operator=(const Point &p);
    double operator[](int index);
};
#endif