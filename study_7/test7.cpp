#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    const int &ref = 10;
    // int temp = 10; const int &ref = temp;

    cout << ref << endl;
}