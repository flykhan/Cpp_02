#include <iostream>
#include "Point.h"
using namespace std;

//栈上实例化
void stackInstantiation()
{
    //实例化对象数组
    Point point[3];

    //对象数组操作
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
    cout << "p[1]: (" << point[1].getX() << ", " << point[1].getY() << ")" << endl;
    cout << "p[2]: (" << point[2].getX() << ", " << point[2].getY() << ")" << endl;
    point[0].setPoint(3, 4);
    cout << "p[0]: (" << point[0].getX() << ", " << point[0].getY() << ")" << endl;
}

int main(){
    stackInstantiation();

    return 0;
}