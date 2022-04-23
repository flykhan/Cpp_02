#include <iostream>
using namespace std;

class Point
{
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
    // 同名函数的普通成员函数与常成员函数互为重载。
    double getX()
    {
        cout << "getX()" << endl;
        return x;
    }
    //重载(函数)方法
    double getX() const
    {
        cout << "getX() const" << endl;
        return x;
    }
    void setY(double y) { this->y = y; }
    double getY() const { return y; }

private:
    double x;
    double y;
};

int main()
{
    // 普通成员函数与常成员函数互为重载时，普通对象调用普通成员函数，常对象调用常成员函数。
    Point *point1 = new Point(1, 2);
    const Point *point2 = new Point(3, 4);
    point1->getX();
    point2->getX();
    delete point1;
    point1 = nullptr;
    delete point2;
    point2 = nullptr;
    return 0;
}