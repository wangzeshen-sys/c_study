#include <iostream>
using namespace std;
// 设计英雄结构体
struct Hero
{
    string name;
    int age;
    string gender;
};

// 按年龄排序

void bubbleSort(Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

void printHeroInfo(Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << heroArray[i].name << endl;
        cout << heroArray[i].age << endl;
        cout << heroArray[i].gender << endl;
    }
    
}


int main()
{
    // 创建数组存放5名英雄
    struct Hero heroArray[5] =
        {
            {"刘备", 23, "男"},
            {"关羽", 22, "男"},
            {"张飞", 20, "男"},
            {"赵云", 21, "男"},
            {"貂蝉", 19, "女"}};

    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    // for (int i = 0; i < len; i++)
    // {
    //     cout << heroArray[i].name << endl;
    //     cout << heroArray[i].age << endl;
    //     cout << heroArray[i].gender << endl;
    // }

    // 对数组进行排序
    bubbleSort(heroArray, len);
    // 将排序后结果打印
    printHeroInfo(heroArray, len);
    return 0;
}