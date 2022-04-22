#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    int b = 10;
    // int * const p 表示地址不能改变。
    int *const p = &b;
    *p = 11;
    // p=&a; //error
    cout << "*p = " << *p << endl;
    return 0;
}