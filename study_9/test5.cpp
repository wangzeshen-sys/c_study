#include <iostream>
using namespace std;

class Person
{
    int m_A;
    static int m_B;
};

Person::m_B = 10;
void test1()
{
    Person p;
    cout << Person::m_B << endl;
    // 空对象占用内存空间为: 1
    // c++ 编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    cout << "size of p:" << sizeof(p) << endl;
}
int main()
{
    test1();
    return 0;
}
