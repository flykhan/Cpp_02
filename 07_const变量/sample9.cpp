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
    Point *point1 = new Point(1, 2);
    const Point *point2 = new Point(3, 4);
    // 当只有常成员函数时，普通对象与常对象都可以调用常成员函数。
    point1->getX();
    point2->getX();
    delete point1;
    point1 = nullptr;
    delete point2;
    point2 = nullptr;
    return 0;
}