#include <iostream>
using namespace std;

// 地址传递
void test01(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用做函数参数  简化指针的书写
void test02(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    // test01(&a, &b);
    test02(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}