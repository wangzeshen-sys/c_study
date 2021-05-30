#include <iostream>
using namespace std;
// 类对象作为类成员
class Phone
{
public:
    Phone(string name)
    {
        m_pname = name;
        cout << "phone 构造条用" << endl;
    }

    ~Phone()
    {
        cout << "phone 释放" << endl;
    }

    string m_pname;
};

class Person
{
public:
    Person(string name, string pname) : m_name(name), m_Phone(pname)
    {
        cout << "person 构造调用" << endl;
    }

    ~Person()
    {
        cout << "person 释放" << endl;
    }
    string m_name;
    Phone m_Phone;
};

void test1()
{
    Person p1("张三", "三星");
    cout << p1.m_name << "拿着" << p1.m_Phone.m_pname << endl;
}

// 先进后出的规则

int main()
{
    test1();
}