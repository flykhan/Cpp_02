#include <iostream>
#include <exception>
#include <vector>
using namespace std;
int main()
{
    // 异常并捕获
    try
    {
        vector<int> arr = {1, 2, 3};
        // 越界访问,抛出异常
        cout << "arr: " << arr.at(3) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }

    return 0;
}