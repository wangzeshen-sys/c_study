#include <iostream>
using namespace std;

//  指针 与 函数
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "交换前" << endl;
    cout << a << endl;
    cout << b << endl;
    swap(&a, &b);
    cout << "交换后" << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}