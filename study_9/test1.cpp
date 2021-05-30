#include <iostream>
using namespace std;
#include <map>
// map 构造和赋值

void printMap(map<int, int> &m)
{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout <<  << endl;
    }
}

void test01()
{
    // 创建map容器
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 11));
    m.insert(pair<int, int>(3, 12));
    m.insert(pair<int, int>(4, 13));

    printMap(m)
}

int main()
{

    return 0;
}