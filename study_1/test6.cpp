#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// for 循环
int main()
{
    // for
    // for (int a = 10; a < 20; a++)
    // {
    //     cout << "a的值:" << a << endl;
    // }

    // int my_array[5] = {1, 2, 3, 4, 5};
    // for (int x : my_array)
    // {
    //     x *= 2;
    //     cout << x << endl;
    // }

    // string str("some string");
    // for (auto &c : str)
    // {
    //     c = toupper(c);
    // }
    // cout << str << endl;

    int my_array[5] = {1, 2, 3, 4, 5};
    for (int x : my_array)
    {
        x *= 2;
        cout << x << endl;
    }
    cout << my_array << endl;
    return 0;
}