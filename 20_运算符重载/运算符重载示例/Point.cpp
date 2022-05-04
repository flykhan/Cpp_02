// Point.cpp
#include "Point.h"
Point& Point::operator++()
{
    ++this->x;
    ++this->y;
    return *this;
}

Point Point::operator++(int)
{
    Point temp(*this);
    operator++();
    return temp;
}

Point& Point::operator--()
{
    --this->x;
    --this->y;
    return *this;
}

Point Point::operator--(int)
{
    Point temp(*this);
    operator--();
    return temp;
}

Point& Point::operator-()
{
    this->x = -this->x;
    this->y = -this->y;
    return *this;
}