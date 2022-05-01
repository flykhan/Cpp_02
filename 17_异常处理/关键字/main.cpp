#include <iostream>
#include <exception>
using namespace std;

void throwInt()
{
    throw 1;
}

void throwDouble()
{
    throw 0.1;
}

int main()
{
    try
    {
        throwInt();
    }
    catch (int i)
    {
        cerr << i << endl;
    }
    catch (double d)
    {
        cerr << d << endl;
    }

    return 0;
}