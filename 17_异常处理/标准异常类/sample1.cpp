#include <iostream>
#include <exception>
using namespace std;
int main()
{
    // 程序抛出异常并捕获
    try
    {
        throw out_of_range("out of range.");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }
    return 0;
}