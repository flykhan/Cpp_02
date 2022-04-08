#include "Array.h"
//构造函数
Array::Array(int count)
{
    this->count = count;
    Arr = new int[count];
    cout << "Array()" << endl;
}
//拷贝构造函数
Array::Array(const Array &arr)
{
    // //浅拷贝
    this->count = arr.count;
    //深拷贝
    this->Arr = new int[count];
    for (int i = 0; i < count; i++)
    {
        this->Arr[i] = arr.Arr[i];
    }

    cout << "Array(const Array & arr)" << endl;
}
//析构函数
Array::~Array()
{
    delete[] Arr;
    Arr = nullptr;
    cout << "~Array(): " << count << endl;
}

void Array::printAddress()
{
    cout << "address: " << Arr << endl;
}
void Array::setCount(int count)
{
    this->count = count;
}
int Array::getCount()
{
    return count;
}
