#include <iostream>
using namespace std;

int main(){
    const int a = 5;
    //当const常量被直接取地址时，编译器会报错，不能将const int*转为int*
    int *P = &a;
    //int *P = (int*)&a;
    return 0;
}