#include <iostream>
using namespace std;

int main()
{
    // 数组的用途
    // 1 可以通过数组名统计整个数组占用内存大小
    //      1个中整形占用的内存空间为 4
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
    cout << "数组中元素的个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2 可以通过数组名查看数组首地址
    cout << "数组的首地址为：" << arr << endl;
    cout << "数组的第一个元素的地址为：" << &arr[0] << endl;

    return 0;
}