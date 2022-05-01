#include "Circle.h"
#include "Point.h" // 需要添加 Point 头文件
Circle::Circle()
{
    cout << "Circle()" << endl;
}

Circle::~Circle()
{
    cout << "~Circle()" << endl;
}

// 友元成员函数
void Circle::printPoint(const Point &p)
{
    // 由于声明为友元函数,可以直接访问 Point 类成员
    cout << "Point(" << p.x << ", " << p.y << ")\n";
}