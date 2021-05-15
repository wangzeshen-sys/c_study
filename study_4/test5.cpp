#include <iostream>
using namespace std;

void swap(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap2(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // 1 创建一个数组
    int arr[10] = {4, 3, 2, 1, 8, 7, 9, 6, 5, 0};

    //
    int len = sizeof(arr) / sizeof(arr[0]);
    // 2 创建函数， 实现冒泡排序
    swap(arr, len);
    // 3 打印排序后的结果
    swap2(arr, len);
    return 0;
}
