#include <iostream>
using namespace std;

// 默情况下：c++编译器至少给一个类添加3个函数
// 1 默认构造函数 无参，函数体为空
// 2 默认析构函数 无参 函数体为空
// 3 默认拷贝构造函数，对属性进行值拷贝

// 构造函数调用规则
//     1 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//     2 如果用户定义拷贝构造函数，c++不会再提供其他构造函数


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

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p1.age:" << p1.age << endl;
    cout << "p2.age:" << p2.age << endl;
}
// 2 值传递的方式给函数参数传值
void dowork(Person p)
{
    cout << "dowork~" << endl;
}
void test02()
{
    Person p;
    dowork(p);
}
int main()
{
    // test01();
    test02();
    return 0;
}