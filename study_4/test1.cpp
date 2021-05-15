#include <iostream>
using namespace std;

int main()
{
    //  定义指针
    int a = 10;
    int *p;
    p = &a;
    cout << "a的地址为:" << &a << endl;
    cout << "a的地址为:" << p << endl;
}

