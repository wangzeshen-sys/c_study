#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1 引用作为重载的条件
void fun(int &a)
{
    cout << "fun(int &a)调用" << endl;
}

void fun(const int &a) // int temp = 10; const int &a = temp;
{
    cout << "fun(const int &a)调用" << endl;
}

// 函数冲澡碰到默认参数

void func1(int a)
{
    cout << "func1(int a)调用" << endl;
}
void func1(int a, int b)
{
    cout << "func1(int a, int b)调用" << endl;
}
int main()
{
    int a = 10;
    // fun(a); // 调用的是 fun(int &a)

    // fun(10); // fun(const int &a)调用

    func1(10);
}