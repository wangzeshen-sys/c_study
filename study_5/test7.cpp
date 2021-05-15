#include <iostream>
using namespace std;

struct Student
{
    string sName;
    int score;
};

struct Teacher
{
    string tName;
    Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";

    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 60 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

void printInfo(Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "teacherName:" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t"
                 << "studetName:" << tArray[i].sArray[j].sName << endl;
            cout << "\t"
                 << "studentScore:" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    // 1 创建3名老师
    Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
    // 2 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    allocateSpace(tArray, len);
    // 3 打印老师和学生的信息
    printInfo(tArray, len);
    return 0;
}