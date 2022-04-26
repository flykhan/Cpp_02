#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;

void tempFunc(Animal p)
{
    p.color();
}
void tempFunc_ref(Animal &p)
{
    p.color();
}
void tempFunc_p(Animal *p)
{
    p->color();
}

int main()
{
    Cat cat;
    Dog dog;
    cat.Animal::skinColor = "Cat-black";
    dog.Animal::skinColor = "Dog-red";
    Animal ac(cat);
    Animal ad = dog;
    ac.color();
    ad.color();

    tempFunc(ac);
    tempFunc_ref(ad);
    Animal animal;
    tempFunc(animal);
    
    return 0;
}