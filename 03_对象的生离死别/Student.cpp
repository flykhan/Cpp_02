#include <iostream>
using namespace std;

class Student
{
public:
    Student() : buffer(new char[16]) {}
    ~Student()//如果没有自定义析构函数，系统自动生成，对象销毁时自动调用
    {
        //析构函数释放内存
        delete[] buffer;
        buffer = nullptr;
    }

private:
    char *buffer;
};