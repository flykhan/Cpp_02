#include <iostream>
using namespace std;

class Circle
{
public:
    Circle() : Pi(3.14) {}
    //错误：Circle(){Pi = 3.14;}
private:
    const double Pi;
};