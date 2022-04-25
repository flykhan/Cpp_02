#include "Line.h"

Line::Line(const Point &pA, const Point &pB) : pointA(new Point(pA)), pointB(new Point(pB))
{
    cout << "Line(const Point & pA, const Point & pB)" << endl;
}
Line::Line(double aX, double aY, double bX, double bY) : pointA(new Point(aX, aY)), pointB(new Point(bX, bY))
{
    cout << "Line(double aX, double aY, double bX, double bY)" << endl;
}
Line::Line(const Line &l)
{
    cout << "Line(const Line &l)" << endl;
    //注意：需要深拷贝
    pointA = new Point(l.getPointA());
    pointB = new Point(l.getPointB());
}
Line::~Line()
{
    cout << "~Line()" << endl;
    delete pointA;
    pointA = nullptr;
    delete pointB;
    pointB = nullptr;
}
void Line::setLine(const Point &pA, const Point &pB)
{
    pointA->setPoint(pA);
    pointB->setPoint(pB);
}
Point Line::getPointA() const
{
    return *pointA;
}
Point Line::getPointB() const
{
    return *pointB;
}