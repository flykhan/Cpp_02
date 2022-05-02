#include "Circle.h"
Circle::Circle(double x, double y) : point1(x, y)
{
    cout << "Circle()" << endl;
}
Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

void Circle::visitPoint()
{
    // 访问 Point 类的私有成员函数
    point1.printPoint();

    // 访问 Point 类的私有数据成员
    cout << "Point(" << point1.x << ", " << point1.y << ")\n";
}