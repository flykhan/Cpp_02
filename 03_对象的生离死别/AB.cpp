#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    //默认implicit(隐式转换)
    A(int) {}      //转换构造函数
    A(int, int) {} //转换构造函数(C++11)
    operator bool() const { return true; }
};

class B
{
public:
    //申明构造函数使用显示声明，不能隐式转换
    explicit B(int) {}
    explicit B(int, int) {}
    explicit operator bool() const { return true; }
};

int main()
{
    A a1 = 1;   // OK:赋值初始化选择 A::A(int)
    A a2(2);    // OK:直接初始化选择 A::A(int)
    A a3{4, 5}; // OK:直接列表初始化选择 A::A(int,int)
    // A a4 = {4, 5}; // OK:赋值列表初始化选择 A::A(int,int)
    if (a1)
        ;                             // OK:A::operator bool()
    bool na1 = a1;                    // OK:赋值初始化选择A::operator bool()
    bool na2 = static_cast<bool>(a1); // OK:static_cast 进行直接初始化

    // B b1=1;//err:赋值初始化不考虑B::B(int)
    B b2(2);//OK:直接初始化选择B::B(int)
    // B b3{4,5};//OK:直接列表初始化选择B::B(int,int)
    // B b4={4,5};//err:赋值列表初始化不考虑B::B(int,int)
    B b5 =(B)1;//OK:显式转换进行 static_cast
    if(b2);//OK:B::operator bool()
    // bool nb1=b2;//err:赋值初始化不考虑B::operator bool()
    bool nb2= static_cast<bool>(b2);//OK:static_cast 进行直接初始化

}