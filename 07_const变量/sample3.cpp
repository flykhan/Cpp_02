#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    int *p = (int *)&a;
    *p = 7;
    cout << "a = " << a << endl;
    return 0;
}

// 如果直接使用强制类型转换将 const 常量进行取地址操作并进行赋值时，编译器可以编译，却仍然不能改变 const 常量的值。