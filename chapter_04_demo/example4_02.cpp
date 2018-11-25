#include <iostream>
#include <windows.h>
using namespace std;

class Student
{
  private:
    static int total;               //˽�о�̬���ݳ�Ա
    int num;
    char name[20];

  public:
    Student()  { total++; }         //���캯����ÿ�¶���һ������total + 1
    ~Student() { total--; }         //����������ÿһ�����������ڽ�������total - 1
    Student(int n, char *p = "Wang");
    void Getname();
    int Getnum();
    static void paint();            //����һ�����еľ�̬���ݳ�Ա����
};
int Student::total = 0;             //��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p)    //���ι��캯����ÿ����һ���¶���total+1
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
void Student::paint()               /******����ù��о�̬��Ա�������˴������ټ�static******/
{
    cout << "The number of all students:" << total << endl;
}
int main()
{
    Student::paint();              //�޶���ʱ��������::��̬��Ա������()��ʽ���total��1��
    Student *p = new Student(13);  //ʹ��ָ�����붯̬�ռ䲢�õ�����*p
    Student::paint();              //������::��̬��Ա������()���total(2.1)
    p->paint();                    //��ָ����ָ��Ķ���ȥ���ʾ�̬��Ա������(2.2)
    delete p;                      //ͨ��ָ��ɾ����̬��������һ��
    Student::paint();       

    Student s[2];                  //�����������󣬹��캯����������
    s[0].paint();
    s[1].paint();
    system("pause");
    return 0;
}

/****
Q:1.��delete p;���Student::paint(); �ܷ��Ϊ p->paint();
  2.��s[0].paint();�ܷ��ΪStudent::paint();
A:1.���ԡ�delete p;��ɾ��pָ��Ķ��ڴ棬δ��pɾ����
  2.���ԡ�paintΪ���о�̬��Ա��������ͨ������::���������á�
****/
