#include <iostream>
using namespace std;

int main()
{
    // 二维数组的用途
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << "二维数组占用内存空间为:" << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存空间为:" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用内存空间为:" << sizeof(arr[0][0]) << endl;
    cout << "二维数组行数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数为:" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 查看二维数组的首地址
    cout << "二维数组的首地址为:" << arr << endl;
    cout << "二维数组的第一行地址为:" << arr[0] << endl;
    cout << "二维数组的第二行地址为:" << arr[1] << endl;
    cout << "二维数组的第一个元素的首地址为:" << (int*)&arr[0][0] << endl;

    return 0;
}