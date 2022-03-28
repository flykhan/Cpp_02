#include "Point.h"

int main()
{
    //堆上实例化对象数组
    Point *point = new Point[3];

    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;

    //释放内存
    delete[] point;
    point = nullptr;
    return 0;
}

// 在堆上操作对象数据会比在栈上操作对象数组复杂，但却比栈上操作更加的灵活，如果数据量比较大建议在堆上操作。