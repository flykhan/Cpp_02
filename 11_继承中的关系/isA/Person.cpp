#include "Person.h"

Person::Person(){
    cout<<"Person()"<<endl;
}
Person::~Person(){
    cout<<"~Person()"<<endl;
}
void Person::name(){
    cout<<"Person::name()"<<endl;
}