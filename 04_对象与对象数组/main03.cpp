#include "Point.h"

//堆上实例化
int main()
{
    //实例化对象
    Point *point = new Point[3];
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    point++;
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    point++;
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    point->setPoint(3, 4);
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;

    //指针使用完成后需要将指针指到起始地址
    point -= 2;
    //释放内存
    delete point;//这里会造成windows端的内存泄漏，类unix端则不会通过编译
    point = nullptr;
    return 0;
}