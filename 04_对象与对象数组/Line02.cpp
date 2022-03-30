#include "Line.h"

int main()
{
    //实例化
    Line *line = new Line(Point(1, 2), Point(3, 5));

    //释放内存
    delete line;
    line = nullptr;
    return 0;
}