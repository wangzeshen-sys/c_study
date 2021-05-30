#include <iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person
{
public:
    static void func()
    {
        m_A = 100;
        cout << "static void func 调用" << endl;
    }
    static int m_A;
};

int Person::m_A = 0;

// 静态函数的访问
void test01()
{
    // 1 通过对象直接访问
    Person p;
    p.func();
    cout << " p.m_A:" << p.m_A << endl;
    // 2 通过类名访问
    Person::func();
    cout << "Person::m_A:" << Person::m_A << endl;
    
}

int main()
{
    test01();
    return 0;
}
