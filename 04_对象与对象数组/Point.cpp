#include "Point.h"

//使用带参数默认构造函数，并使用初始化列表初始化x,y
Point::Point(double x, double y) : x(x), y(y)
{
    // cout<<"Point(double x=0,double y=0)"<<endl;
    cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
}
//拷贝构造函数
Point::Point(const Point &p)
{
    // cout<<"Point(const Point &p)"<<endl;
    //打印点的值
    cout << "Point(const Point &p:(" << p.x << ", " << p.y << ")" << endl;
    this->x = p.x;
    this->y = p.y;
}

//析构函数，由于没有申请内存，析构函数中不需要做什么
Point::~Point()
{
    // cout<<"~Point()"<<endl;
    cout << "~Point():(" << x << ", " << y << ")" << endl;
}

// x,y绑定的成员函数
void Point::setPoint(const Point &p)
{
    this->x = p.x;
    this->y = p.y;
}
void Point::setPoint(double x, double y)
{
    this->x = x;
    this->y = y;
}
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
double Point::getX() { return x; }
double Point::getY() { return y; }