#include <iostream>
using namespace std;

// 函数占位参数
// void func(int a, int)
// {
//     cout << "this is func" << endl;
// }

// int main()
// {
//     func(1, 2);
// }

// 函数重载

void func(int a)
{
    cout << "func(int a) 的调用" << endl;
}

void func()
{
    cout << "func() 的调用!" << endl;
}

void func(double a)
{
    cout << "func(double a) 的调用!" << endl;
}

int main()
{
    func(1);
    func(1.2);
    return 0;
}

