#include <iostream>
using namespace std;

int main()
{
    // const 修饰指针   -----常量指针 指针的指向可以修改，但是指针指向的值不可以修改
    int a = 10;
    int b = 20;

    const int *p = &a;

    // *p = 20; 错误

    // const 修饰常量   -----指针常量 指针的指向不可以修改，但是指针指向的值可以修改

    int *const p2 = &a;
    *p2 = 100; // 正确
    // p2 = &b; 错误
    cout << p2 << endl;

    // const 修饰指针和常量   --指针指向和指向的值都不可变
    const int *const p3 = &a;
    // *p3 = 100; 错误
    // p3 = &b; 错误

    return 0;
}