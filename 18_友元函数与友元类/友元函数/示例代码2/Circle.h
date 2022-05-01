#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;
// Point 声明
class Point;
class Circle
{
public:
    Circle();
    ~Circle();
    void printPoint(const Point &p);
};
#endif