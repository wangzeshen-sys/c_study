#include <iostream>
using namespace std;

// 结构体嵌套结构体
// student
struct Student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct Student stu;
};

int main()
{
    teacher t1;
    t1.name = "wanglaoshi";
    t1.id = 1007;
    t1.age = 70;
    t1.stu.name = "zhangsan";
    t1.stu.age = 18;
    t1.stu.score = 90;
    cout << "t1 name:" << t1.name << endl;
    cout << "t1 age:" << t1.age << endl;
    cout << "t1 id:" << t1.id << endl;
    cout << "t1 stu name:" << t1.stu.name << endl;
    cout << "t1 stu age:" << t1.stu.age << endl;
    cout << "t1 stu score:" << t1.stu.score << endl;

    return 0;
}
