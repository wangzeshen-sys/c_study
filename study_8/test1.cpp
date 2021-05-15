#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
    // 访问权限
public:
    // 属性
    // 半径
    int m_r;
    // 行为
    // 获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

class Student
{
public:
    int s_id;
    string s_name;

    void Info()
    {
        cout << s_id << endl;
        cout << s_name << endl;
    }
};

int
main()
{
    // 创建圆的实例
    // Circle c1;
    // c1.m_r = 10;
    // cout << "圆的周长:" << c1.calculateZC() << endl;

    Student s1;
    s1.s_name = "zhangsan";
    s1.s_id = 1;
    s1.Info();
}