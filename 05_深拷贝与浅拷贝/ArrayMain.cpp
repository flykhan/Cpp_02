#include "Array.h"

//栈上实例化
void stackInstantiation(){
    Array arr1(5);
    //调用拷贝构造函数
    Array arr2 = arr1;
    // arr2.setCount(5);
    // Array arr3(arr2);
    arr1.printAddress();
    arr2.printAddress();
}

int main(){
    stackInstantiation();
    return 0;
}