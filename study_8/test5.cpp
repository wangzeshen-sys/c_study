#include <iostream>
using namespace std;

// 构造函数

class Person
{
public: //公共作用域下才能找到
    // 1 构造函数没有返回值 函数名与类名相同，可以重载，创建对象时自动调用 而且只会掉哟个一次
    Person()
    {
        cout << "Person 构造函数的调用" << endl;
    }
    // 析构函数 进行清理的操作
    // 没有返回值 函数名和类名相同 在名称前加~
    // 不可以由参数 不可以发生重载
    // 对象在销毁前 会自动调用析构函数，而且只会掉哟个一次
    ~Person()
    {
        cout << "person 析构函数的调用" << endl;
    }
};

// 构造和析构都是必须有实现，如果我们不提供，编译器会提供一个空实现的构造函数和析构函数
void test01()
{
    Person p1; // 在栈上的数据，test01执行完毕后，释放这个对象
}

int main()
{
    // test01();
    Person p1;
    return 0;
}