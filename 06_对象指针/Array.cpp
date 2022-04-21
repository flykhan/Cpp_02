#include <iostream>
using namespace std;

class Array
{
public:
    Array(int Len = 0) : Len(Len) { cout << "Array()" << endl; }
    ~Array() { cout << "~Array()" << endl; }
    // void setLen(int Len) { this->Len = Len; }
    Array &setLen(int Len)
    {
        this->Len = Len;
        return *this;
    }
    int getLen() { return Len; }
    void print() { cout << "Len = " << Len << endl; }

private:
    int Len;
};

void stackInstantiation()
{
    /*     Array arr1(5);
        Array arr2;
        arr2.setLen(7);
        arr1.print();
        arr2.print(); */
    /*
    Array arr1(5);
    arr1.print();
    arr1.setLen(7).print(); */

    Array arr1(5);
    cout << "this addr: " << arr1.setLen(7) << endl;
    cout << "obj addr: " << &arr1 << endl;
    Array arr2(3);
    cout << "this addr: " << arr2.setLen(6) << endl;
    cout << "obj addr: " << &arr2 << endl;
}

int main()
{
    stackInstantiation();
    return 0;
}