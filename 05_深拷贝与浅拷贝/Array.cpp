#include "Array.h"
//构造函数
Array::Array(int count)
{
    this->count = count;
    cout << "Array()" << endl;
}
//拷贝构造函数
Array::Array(const Array &arr)
{
    //浅拷贝
    this->count = arr.count;
    cout << "Array(const Array & arr)" << endl;
}
//析构函数
Array::~Array()
{
    cout << "~Array(): " << count << endl;
}

void Array::setCount(int count)
{
    this->count = count;
}
int Array::getCount()
{
    return count;
}
