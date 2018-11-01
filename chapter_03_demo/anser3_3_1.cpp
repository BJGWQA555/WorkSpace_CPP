#include <iostream>
#include <windows.h>
using namespace std;

class B
{
    int x, y;

  public:                   //创建三个构造函数
    B()
    {
        x = y = 0;
        cout << "con1\t";
    }
    B(int i)
    {
        x = i;
        y = 0;
        cout << "con2\t";
    }
    B(int i, int j)
    {
        x = i;
        y = j;
        cout << "con3\t";
    }
    ~B()                    //创建一个析构函数
    {
        cout << "Des\t";
    }
};

int main()
{
    B *ptr;
    ptr = new B[3];
    ptr[0] = B();       //con1
    cout<<"hr"<<endl;
    ptr[1] = B(1);      //con2
    cout<<"hr"<<endl;
    ptr[2] = B(2, 3);   //con3
    cout<<"hr"<<endl;
    delete[] ptr;
    system("pause");
    return 0;
}