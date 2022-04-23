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

// 自定义类型作为参数时，尽量使用引用类型传递并且使用 const 修饰。
void doSomething(const Point &p){
    cout<<p.getX()<<", "<<p.getY()<<endl;
}

int main()
{
    Point point(1,2);
    doSomething(point);
    return 0;
    
}