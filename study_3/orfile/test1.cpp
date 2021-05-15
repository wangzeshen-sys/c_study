#include <iostream>
using namespace std;

//  函数
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a = 10;
    int b = 20;
    int sum = add(a, b);
    cout << "sum:" << sum << endl;
    return 0;
}