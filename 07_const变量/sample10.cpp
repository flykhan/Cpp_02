#include <iostream>
using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0) : x(x), y(y)
    {
        cout << "Point(double x = " << x << ", double y = " << y << ")" << endl;
    }
    ~Point()
    {
        cout << "~Point():(" << x << ", " << y << ")" << endl;
    }
    void setX(double x) { this->x = x; }
    double getX() const
    {
        cout << "getX() const" << endl;
        return x;
    }
    void setY(double y) { this->y = y; }
    double getY() const { return y; }
};

int main()
{
    Point point(1, 2);
    //常引用
    const Point &point2 = point;
    //常指针
    const Point *p = &point2;
    point2.getX();
    p->getX();
    // 常引用与常对象可以调用常成员函数，不能调用普通成员函数。
    // error:常引用与常指针只能访问常成员函数
    // point2.setX(4);
    // p->setY(9);
    return 0;
}