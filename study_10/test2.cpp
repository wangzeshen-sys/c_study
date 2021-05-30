#include <iostream>
using namespace std;

class Building;

class GoodGay
{
public:
    GoodGay();
    void visit();

private:
    Building *building;
};

class Building
{
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom;
    string m_BathRoom;
};

Building::Building()
{
    this->m_SittingRoom = "客厅";
    this->m_BathRoom = "卧室";
}

GoodGay::GoodGay()
{
    // 创建建筑物对象
    building = new Building;
}

void GoodGay::visit()
{
    cout << "参观:" << building->m_SittingRoom << endl;
    cout << "参观:" << building->m_BathRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}
int main()
{
    test01();
    return 0;
}