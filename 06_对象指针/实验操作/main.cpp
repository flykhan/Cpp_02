#include "Line.h"

int main()
{
    Line *l1 = new Line(1, 2, 3, 4);
    Line l2(*l1);

    cout << "sizeof (l1) = " << sizeof(l1) << endl;
    cout << "sizeof (Line) = " << sizeof(Line) << endl;

    delete l1;
    l1 = nullptr;
    return 0;
}