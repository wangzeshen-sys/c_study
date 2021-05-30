#include <iostream>
using namespace std;

// 多继承

class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
    int m_A;
};

class Base2
{
public:
    Base2()
    {
        m_A = 100;
    }
    int m_A;
};

class Son : public Base1,
            public Base2
{
public:
    Son()
    {
        m_A = 300;
        m_B = 400;
    }
    int m_A;
    int m_B;
};

void test01()
{
    Son s;
    // cout << sizeof(s) << endl;
    cout << s.m_A << endl;
    cout << s.m_B << endl;
    cout << s.Base1::m_A << endl;
    cout << s.Base2::m_A << endl;
}

int main()
{
    test01();
    return 0;
}