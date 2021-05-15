#include <iostream>
using namespace std;

void func(int &ref)
{
    ref = 100;
}

int main()
{
    int a = 10;

    int &ref = a; // int* const ref = 20
    ref = 20; // *ref = 20
    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;
    func(a);
}