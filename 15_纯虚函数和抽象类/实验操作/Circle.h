#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <iostream>
using namespace std;
class Circle : public Shape
{
private:
    const float Pi = 3.1415926;
    float radius;

public:
    Circle(float r);
    virtual ~Circle();
    virtual float calcArea();
    virtual float calcPerimeter();
};
#endif