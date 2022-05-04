// main.cpp
#include "Point.h"
int main()
{
    Point p1(3, 4);
    cout << p1;

    // 前置 ++
    cout << "前置 ++: " << ++p1;

    // 后置 ++
    cout << "后置 ++: " << p1++;
    cout << "后置 ++: " << p1;


    // 前置 --
    cout << "前置 --: " << --p1;

    // 后置 --
    cout << "后置 --: " << p1--;
    cout << "后置 --: " << p1;


    // 负号
    cout << "负号: " << -p1;

    return 0;
}