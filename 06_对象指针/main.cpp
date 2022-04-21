#include "Point.h"

int main()
{
    //堆实例化
    Point *point1 = new Point(1, 2);
    Point *point2 = nullptr;
    point2 = new Point(3, 4);

    cout << "point1:(" << point1->getX() << ", " << point2->getY() << ")" << endl;
    cout << "point2:(" << point2->getX() << ", " << point2->getY() << ")" << endl;

    //释放内存防止内存泄漏
    delete point1;
    //置空防止野指针
    point1 = nullptr;
    delete point2;
    point2 = nullptr;
    return 0;
}