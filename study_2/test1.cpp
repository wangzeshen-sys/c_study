#include <iostream>
using namespace std;

// 数组
int main()
{
    // 定义方法
    // 1 数据类型 数组名[长度]
    int arr[5];

    // 2 数据类型 数组名[长度] = {值1, 值2...}
    int arr2[5] = {10, 20, 30, 40, 50};

    // 3
    int arr3[] = {50, 40, 30, 20, 10};

    // 访问元素
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     cout << arr3[i] << endl;
    // }

    // cout << arr2[2] << endl;

    cout << sizeof(arr3) << endl;

    return 0;
}
