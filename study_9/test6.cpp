#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        //  this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }
    Person &PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }
    int age;
};

void test01()
{
    Person p1(18);
    cout << "p1 is age:" << p1.age << endl;
    Person p2(20);
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout << "p1 is age:" << p2.age << endl;
}

int main()
{
    test01();
    return 0;
}