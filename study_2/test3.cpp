#include <iostream>
using namespace std;

int main()
{
    // 找出数组中最大值
    // int arr[5] = {300,
    //   350,
    //   200,
    //   400,
    //   250};
    // int max = 0;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }

    // cout << "最大的值为:" << max << endl;

    // cout << "=================" << endl;

    //  使数组逆序排列
    // int start = 0;                              // 其实元素的下标位置
    // int end = sizeof(arr) / sizeof(arr[0]) - 1; // 末尾元素下标
    // cout << "数组逆置前：" << endl;
    // for (int i = 1; i < 5; i++)
    // {
    //     // cout << arr[i] << endl;
    // }

    // while (start < end)
    // {
    //     // 实现元素互换
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;

    //     start++;
    //     end--;
    // }
    // cout << "数组逆置后：" << endl;
    // for (int i = 1; i < 5; i++)
    // {
    //     // cout << arr[i] << endl;
    // }

    // 冒泡排序

    int arr3[9] = {8, 2, 4, 0, 5, 7, 1, 3, 9};
    cout << "排序前" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - i - 1; j++)
        {
            if (arr3[j] > arr3[i])
            {
                int temp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = temp;
            }
        }
    }
    cout << "排序后" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}