#include <iostream>
using namespace std;

class Point
{
public:
    //使用带参数默认构造函数，并使用初始化列表初始化 x,y
    Point(double x = 0, double y = 0) : x(x), y(y)
    {
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }
    //析构函数，由于没有申请内存，析构函数中不需要做什么
    ~Point()
    {
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }
    // x,y绑定的成员函数
    void setX(double x) { this->x = x; }
    double getX() const { return x; }
    void setY(double y) { this->y = y; }
    double getY() const { return y; }

private:
    double x;
    double y;
};

class Line
{
private:
    // const Point pointA; 与 Point const pointB; 两种写法都是正确的。
    const Point pointA;
    Point const pointB;

public:
    Line(double aX, double aY, double bX, double bY) : pointA(aX, aY), pointB(bX, bY)
    {
        // error
        // pointA.setX(aX);
        // pointA.setY(aY);
        // pointB.setX(bX);
        // pointB.setY(bY);
        cout << "Line(double aX, double aY, double bX, double bY)" << endl;
    }
    ~Line() { cout << "~Line()" << endl; }
    Point getPointA() { return pointA; }
    Point getPointB() { return pointB; }
};

int main(){
    Line *line = new Line(1,2,3,4);
    delete line;
    line = nullptr;
    return 0;
}