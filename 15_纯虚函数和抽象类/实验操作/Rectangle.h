#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <iostream>
using namespace std;
class Rectangle : public Shape
{
private:
    float width;
    float height;
public:
    Rectangle(float w, float h);
    virtual ~Rectangle();
    virtual float calcArea();
    virtual float calcPerimeter();
};
#endif