#include "Line.h"

int main()
{
    //实例化
    Line *line = new Line(1, 2, 3, 5);

    //释放内存
    delete line;
    line = nullptr;
    return 0;
}