#include <iostream>
using namespace std;

// 继承  同名静态成员的处理
class Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Base" << endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son" << endl;
    }
};

int Son::m_A = 200;

// 静态属性
void test01()
{
    Son s;
    // 对象的方式
    cout << s.m_A << endl;
    cout << s.Base::m_A << endl;
    // 通过类名的方式
    cout << Son::m_A<< endl;
    cout << Son::Base::m_A << endl;

}
// 静态函数
void test02()
{
    Son s;
    // 对象的方式
    s.func();
    s.Base::func();
    // 通过类名的方式
    Son::func();
    Son::Base::func();
}
int main()
{
    // test01();
    test02();
    return 0;
}
