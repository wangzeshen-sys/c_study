#include <iostream>
using namespace std;

// 结构体指针
struct Student
{
    string name;
    int age;
    int score;
};
int main()
{
    // 创建学生结构体变量
    Student s = {"zhangsan", 28, 90};
    //  通过指针指向结构体变量
    Student *p = &s;
    // 通过指针访问结构体变量中的数据
    cout << "name:" << p->name << endl;
    cout << "age:" << p->age << endl;
    cout << "score:" << p->score << endl;
    return 0;
}