#include "Point.h"

void stackInstantiation()
{
    Point point[3];
    Point *p = point;
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;
    point[2].setPoint(3, 4);
    cout << "p: (" << p->getX() << ", " << p->getY() << ")" << endl;
}

int main()
{
    stackInstantiation();

    return 0;
}