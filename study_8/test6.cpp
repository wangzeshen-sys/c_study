#include <iostream>
using namespace std;
// 构造函数的分类及调用

class Person
{
public:
    Person()
    {
        cout << "Person 无参的构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person 有参的构造函数调用" << endl;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person 拷贝构造函数" << endl;
    }
    ~Person()
    {
        cout << "~Person 析构函数调用" << endl;
    }
    int age;
};

// 调用
void test01()
{
    // 1 括号法
    // Person p; // 默认构造函数调用 不要加()
    // Person p1(10); // 有参构造函数
    // Person p2(p1); // 拷贝构造函数
    // cout << "p1的年龄:" << p1.age << endl;
    // cout << "p2的年龄:" << p2.age << endl;
    //显示法
    // Person p3;
    // Person p4 = Person(10); // 有参构造
    // Person p5 = Person(p4); // 拷贝构造

    // 
    // Person(10); // 匿名对象, 特点：当前行执行完，立即回收掉匿名对象

    // 隐士转换法
    Person p6 = 10; // Person p6 = Person(10);
    Person p7 = p6; // Person p7 = Person(p6)
}

int main()
{
    test01();
    return 0;
}