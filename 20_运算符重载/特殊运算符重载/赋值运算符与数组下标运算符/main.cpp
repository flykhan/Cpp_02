#include "Point.h"

int main()
{
    Point p1(3, 4);
    cout << p1;

    Point p2;
    // 调用赋值运算符
    p2 = p1;

    cout << p2[0] << ", " << p2[1] << endl;

    try
    {
        cout << p2[2] << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}