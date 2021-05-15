#include <iostream>
using namespace std;

// 在推区开辟数据
int *func()
{
    // 利用new 可以将数据开辟到推区
    // 指针 本质也是局部变量，放在栈上，指针把保存的数据是放在堆区
    int *p = new int(10);
    return p;
}

int main()
{

    // static int b = 29; // 静态变量
    // int a = 10;

    // cout << &a << endl;
    // cout << &b << endl;

    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
