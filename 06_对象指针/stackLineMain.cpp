#include "Line.h"

void stackInstantiation()
{
    Line line(1, 2, 3, 4);
    // 可以通过返回对象指针或者引用直接操作数据成员指针。
    cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
    line.getPointA()->setPoint(7, 17);
    cout << "pA:(" << line.getPointA()->getX() << ", " << line.getPointA()->getY() << ")" << endl;
}

int main()
{
    stackInstantiation();
    return 0;
}