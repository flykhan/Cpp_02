// string初始化
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2 = "hello";
    string s3("world");
    string s4 = s1 + s2;
    string s5="hello "+s2;
    string s6="hello "+s2+"world";
    string s7(5,'c');
    // string s8="hello"+" world";//Error
    cout<<s1+"\n"+s2+"\n"+s3+"\n"+s4+"\n"+s5+"\n"+s6+"\n"+s7<<endl;
    return 0;
}