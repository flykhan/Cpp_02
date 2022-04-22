#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    int b = 10;
    const int *p = &a;
    //*p = 7; // error
    p = &b;
    // 使用 const int *p 表示 *p 的值不能改变，但是可以改变 p 的地址。
    cout << "*p = " << *p << endl;
    return 0;
}