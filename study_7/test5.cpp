#include <iostream>
using namespace std;

// 引用做函数的返回值

int &test01()
{
    int a = 10;
    return a;
}

int main()
{
    int &ref = test01();
    cout << ref << endl;
}