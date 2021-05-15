#include <iostream>
using namespace std;

int main()
{
    // 引用  给变量起别名
    // int a = 10;
    // int &b = a;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << &b << endl;

    // 引用必须要初始化
    int c = 20;
    int &d = c;
    // int &f; // panic
    // 引用一旦初始化，就不能更改
    cout << c << endl;

}