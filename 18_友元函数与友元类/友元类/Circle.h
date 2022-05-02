#ifndef CIRCLE_H
#define CIRCLE_H
// Point 声明
#include "Point.h"  // 需要添加 Point 头文件
class Circle
{
private:
    // 类中实例化 Point 对象
    Point point1;
public:
    Circle(double x, double y);
    ~Circle();
    void visitPoint();
};
#endif