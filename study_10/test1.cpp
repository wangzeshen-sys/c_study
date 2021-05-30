#include <iostream>
using namespace std;

class Builing
{
    // 友元函数声明
    friend void goodGay(Builing *builing);
public:
    Builing()
    {
        m_SittiingRoom = "客厅";
        m_BathRoom = "卧室";
    }

public:
    string m_SittiingRoom;

private:
    string m_BathRoom;
};

// 全局函数
void goodGay(Builing *builing)
{
    cout << "参观:" << builing->m_SittiingRoom << endl;
    cout << "参观:" << builing->m_BathRoom << endl;
}

void test01()
{
    Builing b;
    goodGay(&b);
}

int main()
{
    test01();
    return 0;
}