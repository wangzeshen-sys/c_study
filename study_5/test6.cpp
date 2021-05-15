#include <iostream>
using namespace std;

// 结构体中const的使用

struct Person
{
    string name;
    int age;
    int score;
};

// 添加 const 关键字  只读操作
void printPerson(const Person *p)
{
    // p->name = "wangwu"; 编译出错误
    cout << "p->name:" << p->name << endl;
    cout << "p->age:" << p->age << endl;
    cout << "p->score:" << p->score << endl;
}

int main()
{
    Person p = {"zhangsan", 18, 90};

    printPerson(&p);
    cout << "p name:" << p.name << endl;
    cout << "p age:" << p.age << endl;
    cout << "p score:" << p.score << endl;
    return 0;
}
