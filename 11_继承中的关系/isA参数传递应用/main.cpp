#include "Student.h"

void tempFunc(Person p)
{
    p.eat();
}
void tempFunc_ref(Person &p)
{
    p.eat();
}
void tempFunc_p(Person *p)
{
    p->eat();
}
int main()
{
    Student stu;
    Person per;
    /*     tempFunc(stu);
        tempFunc(per); */
    /* tempFunc_ref(stu);
    tempFunc_ref(per); */
    tempFunc_p(&stu);
    tempFunc_p(&per);
    return 0;
}