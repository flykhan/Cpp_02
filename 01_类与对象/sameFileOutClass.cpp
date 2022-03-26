#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student();
    ~Student();
    void setName(string name);
    string getName() const;
    void setAge(int age);
    int getAge() const;

private:
    string name;
    int age;
};

Student::Student() {}
Student::~Student() {}
void Student::setName(string name)
{
    this->name = name;
}
string Student::getName() const
{
    return name;
}
void Student::setAge(int age)
{
    this->age = age;
}
int Student::getAge() const
{
    return age;
}

int main()
{
    Student stu;
    stu.setName("jake");
    stu.setAge(15);
    cout << "My name is " << stu.getName() << ", I'm " << stu.getAge() << " years old." << endl;

    return 0;
}
