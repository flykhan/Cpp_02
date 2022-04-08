#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <iostream>
// #include <string>
using namespace std;

class Array
{
public:
    //构造函数
    Array(int count);
    //拷贝构造函数
    Array(const Array &arr);
    //析构函数
    ~Array();
    void printAddress();
    void setCount(int count);
    int getCount();

private:
    int count;
    int *Arr;
};
#endif