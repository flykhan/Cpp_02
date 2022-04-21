#include "Line.h"

int main()
{
    Line *p = new Line(1, 2, 3, 4);

    cout << "sizeof (p) = " << sizeof(p) << endl;
    cout << "sizeof (Line) = " << sizeof(Line) << endl;

    delete p;
    p = nullptr;
    return 0;
}

// 运行结果：

// p 本身是一个指针，在 32 位机器上占 4 字节。在示例中系统是 64 位机器，指针 p 占 8 个字节。
// Line 类中有 pointA 和 pointB 数据成员指针，每个数据成员指针占 8 字节。