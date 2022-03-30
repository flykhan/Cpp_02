#ifndef __LINE_H__
#define __LINE_H__
#include "Point.h"

class Line
{
public:
    Line(const Point &pA, const Point &pB);
    Line(double aX, double aY, double bX, double bY);
    ~Line();

private:
    Point pointA;
    Point pointB;
};

#endif