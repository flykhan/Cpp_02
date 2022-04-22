#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    int b = 10;
    // const int * const p 修饰表示地址与值都不能改变。
    const int *const p = &a;
    // *p = 11; //error
    // p = &a; //error
    cout << "*p = " << *p << endl;
    return 0;
}