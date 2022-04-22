#include <iostream>
using namespace std;

int main(){
    const int a = 5;
    //编译器不通过
    a = 7;
    return 0;
}