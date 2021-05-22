#include <iostream>
using namespace std;
// 深拷贝和浅拷贝

class Person
{
public:
    Person()
    {
        cout << "Person 无参的构造函数调用" << endl;
    }
    Person(int a, int height)
    {
        age = a;
        Height = new int(height);
        cout << "Person 有参的构造函数调用" << endl;
    }

    // 拷贝构造函数
    // Person(const Person &p)
    // {
    //     age = p.age;
    //     cout << "Person 拷贝构造函数" << endl;
    // }
    ~Person()
    {
        // 析构代码，将堆区开辟的数据释放
        if (Height != NULL)
        {
            delete Height;
            Height = NULL;
        }
        cout << "~Person 析构函数调用" << endl;
    }
    int age;
    int *Height;
};
void test01()
{
    Person p1(18, 160);
    cout << "p1.age:" << p1.age << endl;
    cout << "p1.height:" << *p1.Height << endl;
}

int main()
{
    test01();

    return 0;
}