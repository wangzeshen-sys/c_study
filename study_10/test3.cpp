#include <iostream>
using namespace std;

// 成员函数作友元
class Building;
class GoodGay
{
private:
    Building *building;

public:
    GoodGay();
    void sisit();  //让visit函数可以访问Building中的私有成员
    void sisit2(); // 让visit2函数不可以访问Building中的私有成员
};

class Building
{
    friend void GoodGay::sisit();

public:
    string m_SittingRoom1;
    Building();

private:
    string m_BathRoom1;
};
//  类外实现成员函数
Building::Building()
{
    this->m_SittingRoom1 = "客厅";
    this->m_BathRoom1 = "卧室";
}
GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::sisit()
{
    cout << "sisit 参观:" << building->m_SittingRoom1 << endl;
    cout << "sisit 参观:" << building->m_BathRoom1 << endl;
}

void GoodGay::sisit2()
{
    cout << "sisit2 参观:" << building->m_SittingRoom1 << endl;
    // cout << "sisit2 参观:" << building->m_BathRoom1 << endl;
}

void test01()
{
    GoodGay gg;
    gg.sisit();
    gg.sisit2();
}

int main()
{
    test01();
    return 0;
}