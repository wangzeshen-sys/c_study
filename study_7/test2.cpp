#include <iostream>
using namespace std;

// new 的基本语法
int *func()
{
    // 在堆区创建整形数据
    // new返回是 该数据类型的指针
    int *p = new int(10);
    return p;
}

void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
    // 堆区的数据，由程序员管理开辟，程序员释放
    // 释放堆区数据，利用delete 删除
}

// 在堆区利用new 开辟数组
void test02()
{
    // 创建10整形数据的数组，在堆区
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    // 释放数组
    delete[] arr;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // test01();
    test02();
}