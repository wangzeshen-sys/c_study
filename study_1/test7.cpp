#include <iostream>
using namespace std;

// do while

int main()
{
    //  局部变量
    // int a = 20;

    // do
    // {
    //     cout << "a的值" << a << endl;
    //     a = a + 1;
    // } while (a < 20);

    int a = 10;

LOOP:
    do
    {
        if (a == 15)
        {
            a = a + 1;
            goto LOOP;
        }
        cout << "a的值" << a << endl;
        a = a + 1;
    } while (a < 20);

    return 0;
}