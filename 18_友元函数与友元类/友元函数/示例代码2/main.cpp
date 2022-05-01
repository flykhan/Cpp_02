#include "Point.h"
#include "Circle.h"
int main()
{
    Point p(3, 4);
    Circle c;
    // Circle 类成员函数访问 Point 类成员
    c.printPoint(p);

    return 0;
}