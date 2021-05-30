#include <iostream>
using namespace std;

class Basel
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

class son1 : public Basel
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
    }
};

void test01()
{
    son1 so;
    so.m_A = 10;
    cout << so.m_A << endl;
}
int main()
{
    test01();
    return 0;
}