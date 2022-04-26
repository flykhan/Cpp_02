#include "Person.h"

Person::Person(){
    cout<<"Person()"<<endl;
}
Person::~Person(){
    cout<<"~Person()"<<endl;
}

//隐藏函数代码段
/* void Person::setName(const string &name){
    this->name = name;
}
string Person::getName() const {
    return name;
}
void Person::eat(){
    cout<<"Person::eat()"<<endl;
} */