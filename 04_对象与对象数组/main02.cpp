#include "Point.h"

//堆上实例化
int main()
{
    //实例化对象
    Point *p = new Point[3];
    Point *point = p; // point指针指向p指针

    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    p++;
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    p++;
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    point->setPoint(3, 4);
    cout << "point: (" << point->getX() << ", " << point->getY() << ")" << endl;
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;

    //释放内存
    delete[] point;
    point = nullptr;
    return 0;
}

// 运行结果：发现使用指针的方式一样可以访问对象数组，但是使用时也要注意几个问题。

// 使用 -> 的方式来访问类成员函数，并且不需要使用下标。
// Point *point = p; 可以发现我又重新声明一个指针，因为一个指针只能指向一个对象，通过指针 ++ 或者 -- 运算符的方式来访问对象数组中对象。