#include "HighStudent.h"
int main()
{
    HighStudent stu("jake", 15);
    // 调用顶层基类数据成员
    stu.print();
    // 调用成员函数
    stu.play();
    return 0;
}