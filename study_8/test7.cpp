#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person 无参的构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person 有参的构造函数调用" << endl;
    }

    // 拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout << "Person 拷贝构造函数" << endl;
    }
    ~Person()
    {
        cout << "~Person 析构函数调用" << endl;
    }
    int age;
};

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p1.age:" << p1.age << endl;
    cout << "p2.age:" << p2.age << endl;
}
// 2 值传递的方式给函数参数传值
void dowork(Person p)
{
    cout << "dowork~" << endl;
}
void test02()
{
    Person p;
    dowork(p);
}
int main()
{
    // test01();
    test02();
    return 0;
}