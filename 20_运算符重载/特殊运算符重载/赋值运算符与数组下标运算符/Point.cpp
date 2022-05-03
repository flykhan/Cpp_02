#include "Point.h"

Point::Point(double x, double y) : x(x), y(y)
{
    cout << "Point()" << endl;
}
Point::~Point()
{
    cout << "~Point()" << endl;
}

ostream &operator<<(ostream &out, const Point &p)
{
    out << "Point(" << p.x << ", " << p.y << ")" << endl;
    return out;
}

Point &Point::operator=(const Point &p)
{
    cout << "operator=(const Point& p)" << endl;
    this->x = p.x;
    this->y = p.y;
    return *this;
}
double Point::operator[](int index)
{
    if (index < 0 || index > 1)
        throw out_of_range("index out of range, index range in [0, 1].");
    if (0 == index)
        return this->x;
    if (1 == index)
        return this->y;
}