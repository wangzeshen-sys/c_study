#include <iostream>
using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "this is person class" << endl;
    }
    void showPersonAge()
    {
        if (this == NULL)
        {
            cout << "存在空指针" << endl;
            return;
        }
        
        cout << "age=" << m_Age << endl;
    }

    int m_Age;
};

void test01()
{
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main()
{
    test01();
    return 0;
}