#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
  private:
    static int total;               //私有静态数据成员
    int num;
    char name[20];

  public:
    Student()  { total++; }         //构造函数，每新定义一个对象，total + 1
    ~Student() { total--; }         //析构函数，每一个对象生命期结束，则total - 1
    Student(int n, char *p = "Wang");
    void Getname();
    int Getnum();
    static void paint();            //声明一个公有的静态数据成员函数
};
int Student::total = 0;             //静态数据成员的初始化
Student::Student(int n, char *p)    //带参构造函数，每定义一个新对象，total+1
{
    num = n;
    strcpy(name, p);
    total++;
}
void Student::Getname()
{
    cout << name << endl;
}
int Student::Getnum()
{
    return num;
}
void Student::paint()               /******定义该公有静态成员函数，此处不能再加static******/
{
    cout << "The number of all students:" << total << endl;
}
int main()
{
    Student::paint();              //无对象时可用类名::静态成员函数名()形式输出total（1）
    Student *p = new Student(13);  //使用指针申请动态空间并得到对象*p
    Student::paint();              //用类名::静态成员函数名()输出total(2.1)
    p->paint();                    //用指针所指向的对象去访问静态成员函数名(2.2)
    delete p;                      //通过指针删除动态对象，析构一次
    Student::paint();       

    Student s[2];                  //定义两个对象，构造函数调用两次
    s[0].paint();
    s[1].paint();
    system("pause");
    return 0;
}

/****
Q:1.将delete p;后的Student::paint(); 能否改为 p->paint();
  2.将s[0].paint();能否改为Student::paint();
A:1.可以。delete p;仅删除p指向的堆内存，未将p删除。
  2.可以。paint为公有静态成员函数，可通过类名::函数名调用。
****/
