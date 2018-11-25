#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
  private:
    int num;
    char name[20];

  public:
    static int total;       //公有静态数据成员
    Student() { total++; }  //构造函数，每新定义一个对象，total + 1
    ~Student() { total--; } //析构函数，每一个对象生命期结束，则total - 1
    Student(int n, char *p = "wang");
    void Getname();
    int Getnum();
};
int Student::total= 0;          //静态数据成员的初始化
Student::Student(int n, char *p) //带参构造函数，每定义一个新对象，total+1
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

int main()
{
    cout << "The number of all students:" << Student::total << endl; //无对象时,用类名::静态成员名形式访问（1）
    Student *p = new Student(13);                                    //使用指针申请动态空间并得到对象*p
    cout << "The number of all students:" << Student::total << endl; //有对象时,类名::静态成员名形式访问（2.1）
    cout << "The number of all students:" << p->total << endl;       //有对象时,用指针(对象名)所指向的对象去访问(2.2)
    delete p;                                                        //通过指针删除动态对象，析构一次
    cout << "The number of all students:" << Student::total << endl;

    Student s[2];
    cout << "The number of all student:" << s[0].total << endl;
    cout << "The number of all student:" << s[1].total << endl;
    system("pause");
    return 0;
}

/****
Q:1.将L19的int Student::total= 0; --> int Student::total;
  2.将L19的int Student::total= 0;注释掉。
  3.将static int total;移动到private内。
A:1.没有变化。系统默认初始值为0。
  2.编译报错：无法解析的外部符号 "public: static int Student::total" 。必须进行初始化。
  3.编译报错：成员 "Student::total" (已声明 所在行数:**) 不可访问。私有静态数据成员不可被类外函数访问，也不可通过对象访问，只可通过静态成员函数。
****/
