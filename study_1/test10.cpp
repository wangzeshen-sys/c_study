#include <iostream>
using namespace std;

int main()
{
    int var = 20;
    int *ip; // 声明指针变量

    ip = &var; // 在指针变量中存储 var的地址

    cout << "value of var variable";
    cout << var << endl;

    //  访问指针中地址的值
    cout << "value of *ip variable:";
    cout << &ip << endl;

    return 0;
}