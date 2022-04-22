#include <iostream>
using namespace std;

int main()
{
    const int a = 5;
    int b = 10;
    const int *const p = &a;
    // *p = 11; //error
    // p = &a; //error
    cout << "*p = " << *p << endl;
    return 0;
}