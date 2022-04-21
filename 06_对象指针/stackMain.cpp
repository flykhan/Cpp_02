#include "Point.h"

//栈上实例化
void stackInstantiation(){
    Point point(5,7);
    Point *p = &point;
    cout<<"p:("<<p->getX()<<", "<<p->getY()<<")"<<endl;
}

int main(){
    stackInstantiation();
    return 0;
}