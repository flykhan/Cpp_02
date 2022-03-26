#include <iostream>
#include <string>
using namespace std;

class Point
{
    //私有属性
    double x;
    double y;
public: //公有属性
    Point(){}
    ~Point(){}

    void setX(double x){this->x=x;}
    double getX() const {return x;}
    void setY(double y){this->y=y;}
    double getY() const {return y;}
};

int main(){
    //堆上实例化
    Point *point = new Point;

    //正确访问
    point->setX(1);
    point->setY(5);

    //错误访问，私有成员不能直接访问，编译报错
    //point->x=3;
    //point->y=9;
    
    //释放内存
    delete point;
    point = nullptr;

    return 0;
}