#include <iostream>
using namespace std;

// 成员属性设置为私有

class Person
{
public:
    // 设置姓名
    void setName(string name)
    {
        Name = name;
    }
    // 获取姓名
    string getName()
    {
        return Name;
    }
    // 获取年龄
    int getAge()
    {
        Age = 1;
        return Age;
    }
    // 设置情人
    void setLover(string lover)
    {
        Lover = lover;
    }

private:
    string Name;
    int Age;
    string Lover;
};

int main()
{
    Person p1;
    p1.setName("张三");
    p1.setLover("小智");
    cout << "姓名:" << p1.getName() << endl;
    cout << "年龄:" << p1.getAge() << endl;
}