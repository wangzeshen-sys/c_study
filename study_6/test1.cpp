#include <iostream>
using namespace std;
#define maxSize 1000


//  通讯录设计
// 联系人
struct Person
{
    string Name;
    int Sex; // 1 男 2 女
    int Age;
    string Phone;
    string Addr;
};

struct Addressbooks
{
    Person personArray[maxSize];
    int Size;
};

void showMenu()
{
    cout << "*********************" << endl;
    cout << "*****1 添加联系人*****" << endl;
    cout << "*****2 显示联系人*****" << endl;
    cout << "*****3 删除联系人*****" << endl;
    cout << "*****4 查找联系人*****" << endl;
    cout << "*****5 修改联系人*****" << endl;
    cout << "*****6 清空联系人*****" << endl;
    cout << "*****0 退出通讯录*****" << endl;
    cout << "*********************" << endl;
}

int main()
{
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select; // 用户输入
        switch (select)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "欢迎下次使用" << endl;
            return 0;
        default:
            break;
        };
    };

    return 0;
}