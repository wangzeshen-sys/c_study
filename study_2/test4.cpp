#include <iostream>
using namespace std;

int main()
{
    // 二维数组
    // 定义

    // 1
    // int arr[2][3];
    // arr[0][1] = 1;
    // arr[0][1] = 2;
    // arr[0][2] = 3;
    // arr[1][0] = 4;
    // arr[1][1] = 5;
    // arr[1][2] = 6;

    // 2
    int arr[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 循环读取
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}