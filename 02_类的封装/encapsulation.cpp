#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
    void setName(string name){this->name=name;}
    string getName() const {return name;}
    void setAge(int age){this->age=age;}
    int getAge() const {return age;}
private:
    string name;
    int age;
};

int main(){
    Teacher *teacher = new Teacher;
    teacher->setName("liubo");
    teacher->setAge(24);

    cout<<"Teacher name is "<<teacher->getName()<<", age is "<<teacher->getAge()<<endl;

    delete teacher;
    teacher = nullptr;

    return 0;
}