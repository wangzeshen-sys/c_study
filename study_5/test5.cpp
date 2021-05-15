#include <iostream>
using namespace std;

// 结构体做函数参数
struct Student
{
    string name;
    int age;
    int score;
};

// 值传递
void printStudent1(struct Student s)
{
    cout << "值传递" << endl;
    cout << "s name:" << s.name << endl;
    cout << "s age:" << s.age << endl;
    cout << "s score:" << s.score << endl;
}

// 地址传递
void printStudent2(struct Student *s)
{
    cout << "地址传递" << endl;
    cout << "s name:" << s->name << endl;
    cout << "s age:" << s->age << endl;
    cout << "s score:" << s->score << endl;
}

int main()
{
    Student s = {"zhangsan", 18, 90};
    printStudent1(s);
    printStudent2(&s);
    return 0;
}