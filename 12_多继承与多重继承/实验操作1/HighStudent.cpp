#include "HighStudent.h"
HighStudent::HighStudent(float height) : height(height)
{
    cout << "HighStudnet(float height)" << endl;
}
HighStudent::~HighStudent()
{
    cout << "~HighStudent()" << endl;
}
void HighStudent::print(){
    cout<<"name: "<<name<<", age: "<<age<<", height: "<<height<<endl;
}