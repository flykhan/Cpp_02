#include "Rectangle.h"
Rectangle::Rectangle(float w, float h) : width(w), height(h)
{
    cout << "Rectangle()" << endl;
}
Rectangle::~Rectangle()
{
    cout << "~Rectangle()" << endl;
}
float Rectangle::calcArea()
{
    cout << "Rectangle::calcArea() = " << endl;
    return width * height;
}
float Rectangle::calcPerimeter()
{
    cout << "Rectangle::calcPerimeter() = " << endl;
    return 2 * (width + height);
}