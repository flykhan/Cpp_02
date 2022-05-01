#include "Point.h"
// 全局函数
void printPoint(const Point &p)
{
    // 由于在 Point 类中声明为友元函数,所以可以直接访问类中成员
    cout << "Point(" << p.x << ", " << p.y << ")\n";
}

int main()
{
    // 实例化 Point 对象
    Point p(3, 4);

    // 通过全局函数可以直接访问
    printPoint(p);

    return 0;
}