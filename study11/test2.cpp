#include <iostream>
using namespace std;

//  继承 同名处理 函数也是一样
class Basel
{
public:
    Basel()
    {
        m_A = 100;
    }
    int m_A;
};

class son : public Basel
{
public:
    son()
    {
        m_A = 200;
    }
    int m_A;
};

void test01()
{
    son s;
    cout << s.m_A << endl;
    cout << s.Basel::m_A << endl;
}

int main()
{
    test01();
    return 0;
}