#include "Circle.h"
Circle::Circle(float r) : radius(r)
{
    cout << "Circle()" << endl;
}
Circle::~Circle()
{
    cout << "~Circle()" << endl;
}
float Circle::calcArea()
{
    cout << "Circle::calcArea() = " << endl;
    return Pi * radius * radius;
}
float Circle::calcPerimeter()
{
    cout << "Circle::calcPerimeter() = " << endl;
    return 2 * Pi * radius;
}