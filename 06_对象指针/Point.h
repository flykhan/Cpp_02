#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
using namespace std;

class Point
{
public:
    //使用带参默认构造函数，并使用初始化列表初始化x,y
    Point(double x = 0, double y = 0);
    //拷贝构造函数
    Point(const Point &p);
    //析构函数，由于没有申请内存，西析构函数中不需要做什么
    ~Point();
    // x,y绑定的成员函数
    void setPoint(const Point &p);
    void setPoint(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();

private:
    double x;
    double y;
};

#endif