#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    // 1.无参构造函数
    Teacher() {}
    // 2.有参构造函数
    Teacher(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // 3.有参构造函数--全部有默认参数-->默认构造函数
/*     
    Teacher(string name = "jake", int age = 15)
    {
        this->name = name;
        this->age = age;
    }
 */
private:
    string name;
    int age;
};