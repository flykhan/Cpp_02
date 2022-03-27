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
    //拷贝构造函数
    Teacher(const Teacher &tea){
        this->name=tea.name;
        this->age=tea.age;
    }
private:
    string name;
    int age;
};

int main(){
    //执行默认构造函数
    Teacher tea1;
    //执行拷贝构造函数
    Teacher tea2=tea1;
    Teacher tea3=Teacher(tea1);

    return 0;
}