#include <iostream>
using namespace std;
// struct  和  class 都可以修饰类
// 区别 struct 默认权限为公共
//      class 默认权限为私有

class C1
{
    int m_A;
};

struct C2
{
    int m_A;
};

int main()
{
    // C1 c_1;
    // c_1.m_A = 100;
    C2 c_2;
    c_2.m_A = 122;
    
}