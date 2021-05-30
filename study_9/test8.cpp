#include <iostream>
using namespace std;

// 常函数
//     成员函数后加const后称为这个函数为常函数
//     常函数内不可以修改成员属性
//     成员属性声明时加关键字mutable后 在常函数中依然可以修改
// 常对象
//     声明对象前加const称为常对象
//     常对象只能调用常函数

class Person
{
    public:
    void showPerson() const
    {

    }
    int m_A;
}